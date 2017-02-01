(load "pattern-matcher.scm")

(print-gensym #f)
(define with (lambda (s f) (apply f s)))

(define (simple-const? value)
  (or (boolean? value) (number? value) (string? value) (char? value) (vector? value))
)

(define *reserved-words*
  '(and begin cond define do else if lambda
    let let* letrec or quasiquote unquote 
    unquote-splicing quote set!))

(define *primitives*
  '(apply boolean? car cdr char->integer char? cons eq? integer? integer->char make-string make-vector
	null? number? pair? procedure? remainder set-car! set-cdr!
	string-length string-ref string-set! string->symbol string?
	symbol? symbol->string vector-length vector-ref
	vector-set! vector? zero? bin+ bin- bin* bin/ bin=? bin<? void?))


(define (is-not-reserved? expr)
	(not (memq expr *reserved-words*))
)

(define (var? expr)
	(and 
		(symbol? expr)
		(not (memq expr *reserved-words*))
	)
)

(define *void-object*
	(if #f #f)
)

; Add 'begin to the sequence
(define (beginify sequence)
	(cond 
		; Single element
		((null? (cdr sequence)) (car sequence))
		(else `(begin ,@sequence))
	)
	
)

(define (lambdify sequence)
	`(lambda ,@sequence)
)

(define (non-list-pair? val)
	(and (pair? val) (not (list? val)))
  )

; Splitting to two stuff
(define (lambda-opt-arg-list lst)
  (cond 
  	((not (pair? lst)) '())
        (else (cons (car lst) (lambda-opt-arg-list (cdr lst))))))

(define (lambda-opt-rest-name lst)
  (cond 
  	((not (pair? lst)) lst)
        (else (lambda-opt-rest-name (cdr lst)))))



;; AS Provided by Mayer in the Announcements
(define expand-qq
  (lambda (e)
    (cond ((unquote? e) (cadr e))
	  ((unquote-splicing? e)
	   (error 'expand-qq "unquote-splicing here makes no sense!"))
	  ((pair? e)
	   (let ((a (car e))
		 (b (cdr e)))
	     (cond ((unquote-splicing? a) `(append ,(cadr a) ,(expand-qq b)))
		   ((unquote-splicing? b) `(cons ,(expand-qq a) ,(cadr b)))
		   (else `(cons ,(expand-qq a) ,(expand-qq b))))))
	  ((vector? e) `(list->vector ,(expand-qq (vector->list e))))
	  ((or (null? e) (symbol? e)) `',e)
	  (else e))))

(define ^quote?
  (lambda (tag)
    (lambda (e)
      (and (pair? e)
	   (eq? (car e) tag)
	   (pair? (cdr e))
	   (null? (cddr e))))))

(define unquote? (^quote? 'unquote))
(define unquote-splicing? (^quote? 'unquote-splicing))

;;;;;;


(define Ym
  (lambda fs
    (let ((ms (map
		(lambda (fi)
		  (lambda ms
		    (apply fi (map (lambda (mi)
				     (lambda args
				       (apply (apply mi ms) args))) ms))))
		fs)))
      (apply (car ms) ms))))


(define expand-letrec
  (lambda (letrec-expr)
    (with letrec-expr
      (lambda (_letrec ribs . exprs)
	(let* ((fs (map car ribs))
	       (lambda-exprs (map cdr ribs))
	       (nu (gensym))
	       (nu+fs `(,nu ,@fs))
	       (body-f `(lambda ,nu+fs ,@exprs))
	       (hofs
		(map (lambda (lambda-expr) `(lambda ,nu+fs ,@lambda-expr))
		  lambda-exprs)))
	  `(Ym ,body-f ,@hofs))))))



(define parse
	(let ((run
		(compose-patterns

			; 2.1.1
			(pattern-rule
				(? 'c simple-const?)
			(lambda (c) `(const ,c)))

			(pattern-rule
			`(quote ,(? 'c))
			(lambda (c) `(const ,c)))

			; 2.1.2
			(pattern-rule
			 (? 'In var?)
			 (lambda (v) `(var ,v)))

			; 2.1.3
			(pattern-rule
			`(if ,(? 'test) ,(? 'dit))
			(lambda (test dit)
			 `(if3 ,(parse test) ,(parse dit) (const ,*void-object*))))

			(pattern-rule
			`(if ,(? 'test) ,(? 'dit) ,(? 'dif))
			(lambda (test dit dif)
			 `(if3 ,(parse test) ,(parse dit) ,(parse dif))))


			; 2.1.4
			; Sequence
			(pattern-rule 
				`(begin . ,(? 'rest list?))
				(lambda (rest)
					(if (null? rest)
						`(const ,*void-object*)
						`(seq ,(map parse rest))
					)
				)
			)

			; Type 1
			; No args / Multiple args
			; Bodies: 1 or more
			(pattern-rule
			`(lambda ,(? 'arg-list list?) . ,(? 'expressions))
				(lambda (arg-list expressions) 
					; If single argument
					(if (null? (cdr expressions))
						`(lambda-simple (,@arg-list) ,(parse (car expressions)))
						`(lambda-simple (,@arg-list) ,(parse (beginify expressions)))
					)
				)
			)

			; Type 2
			(pattern-rule
			`(lambda ,(? 'arg-list non-list-pair?) . ,(? 'expressions))
				(lambda (arg-list expressions) 
					; If single argument
					(let (
						  (args (lambda-opt-arg-list arg-list))
						  (rest-name (lambda-opt-rest-name arg-list))
						  )
						(if (null? (cdr expressions))
							`(lambda-opt (,@args) ,rest-name ,(parse (car expressions)))
							`(lambda-opt (,@args) ,rest-name ,(parse (beginify expressions)))
						)
					)
				)
			)

			; Type 3
			(pattern-rule
			`(lambda ,(? 'args-name var?) . ,(? 'expressions))
				(lambda (args-name expressions) 
					; If single argument
					(if (null? (cdr expressions))
						`(lambda-variadic ,args-name ,(parse (car expressions)))
						`(lambda-variadic ,args-name ,(parse (beginify expressions)))
					)
				)
			)


			; 2.1.5 define
		  	(pattern-rule
		  	`(define ,(? `varname var?) ,(? `val))
		  		(lambda (varname val)
		  			`(define ,(parse varname) ,(parse val))
		  		)
		  	)

		  	;2.1.5 MIT define
		  	(pattern-rule
		  	`(define  ,(? 'first is-not-reserved?) . ,(? 'expressions))
		  		(lambda (first exps)
		  			;`(define ,(parse (car first)) ,(parse (lambdify (cons (cdr first) exps)) ))
		  			(parse `(define ,(car first) ,(lambdify (cons (cdr first) exps) )))
		  		)
		  	)

		  	;2.1.6 Application
			(pattern-rule
		  	`( ,(? 'op is-not-reserved?) . ,(? 'args) )
		  	(lambda (op args)
		  		`(applic ,(parse op) ,(map parse args)))
		  	)

		  	;; Macro expandors
		  	;; -----------------------------

		  	; And (no params)
		  	(pattern-rule 
		  		`(and)
		  		(lambda () 
		  			(parse `#t)
		  		)
		  	)

		  	; And (one param)
		  	(pattern-rule 
		  		`(and ,(? 'param))
		  		(lambda (param) 
		  			; and returns the param as is (ampric tests)
		  			(parse param)
		  		)
		  	)

		  	; And (multiple params)
		  	(pattern-rule 
		  		`(and . ,(? 'conditions))
		  		(lambda (conditions) 
		  			(parse 
		  				`(if ,(car conditions) 
		  					,(cons 'and (cdr conditions))
		  				 	#f)
		  			)
		  		)
		  	)


			; OR (no params)
		  	(pattern-rule 
		  		`(or)
		  		(lambda () 
		  			(parse `#f)
		  		)
		  	)

		  	; OR (one param)
		  	(pattern-rule 
		  		`(or ,(? 'param))
		  		(lambda (param) 
		  			(parse param)
		  		)
		  	)

		  	; Or (multiple params)
		  	(pattern-rule 
		  		`(or . ,(? 'conditions))
		  		(lambda (conditions) 
		  			`(or ,(map parse conditions))
		  		)
		  	)


		  	; Cond 1 conditions (incl. else)
		  	;(cond (#t 1))
		  	(pattern-rule 
		  		`(cond (,(? 'condition) . ,(? 'result)))	
		  		(lambda (con res) 
		  			(parse 
						(cond 
			  				((eq? con 'else) 
			  					(beginify res)
			  				)
			  				(else `(if ,con ,(beginify res)))
			  			)
		  			)
		  			; and returns the param as is (ampric tests)
		  			;(parse `(if ,con (begin ,@res)))
		  		)
		  	)

		  	; Cond 2 or more conditions
		  	(pattern-rule 
		  		`(cond ,(? 'first-cond) . ,(? 'rest-conds))
		  		(lambda (first-cond rest-conds)
		  			(parse `(if ,(car first-cond) ,(beginify (cdr first-cond)) (cond ,@rest-conds)))
		  		)
		  	)


		  	(pattern-rule
	  			`(quasiquote . ,(? 'expr))
	  			(lambda (expr)
	  				(parse (expand-qq expr))
	  					   ;`(const ,(expand-qq expr))

  				)
  			)


		  	;;; let
			(pattern-rule
		  	`(let ,(? 'varlist list?) . ,(? 'body) )
		  	  (lambda (varlist body)
		  		(let (
		  			(varnames (map car varlist))
		  			(values   (map cadr varlist))
		  		)
		  		 (parse `((lambda ,varnames ,@body) ,@values))
		  		)
		  		
		  	))

			;;; let* (provided in tutorial)
			(pattern-rule
			`(let* () ,(? 'expr) . ,(? 'exprs list?))
			(lambda (expr exprs)
			 (parse (beginify (cons expr exprs)))))

			(pattern-rule
			`(let* ((,(? 'var var?) ,(? 'val)) . ,(? 'rest)) . ,(? 'exprs))
			(lambda (var val rest exprs)
			 (parse `(let ((,var ,val))
			       (let* ,rest . ,exprs)))))


			;;; letrec
			 (pattern-rule
		    `(letrec . ,(? `exp))
		     (lambda (exp)
		      	(parse (expand-letrec `(letrec ,@exp)))
		      	;((expand-letrec `(letrec ,@exp))	
		     ))




	  )))
	
	(lambda (e)
      (run e
	   (lambda ()
	     (error 'parse
		    (format "I can't recognize this: ~s" e)))))))





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; HOMEWORK 3
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; Returns index of element in list or #f
(define (get-index lst elem)
	(if (not (member elem lst)) 
		#f
		(let ((sfunc 
				(lambda (lst elem)
					(cond
						((eq? elem (car lst)) 0)
						(else (add1 (get-index (cdr lst) elem)))
					)
				)
			))
		(sfunc lst elem)
		)
	)
)

; Utility function (TODO: Add as letrec)
(define (pe-lex-test-as-bound pe bound major)
	(let*
		(
			(variable (cadr pe))
			; Get index in first list
			(index-in-bound (and (not (null? bound)) (get-index (car bound) variable)))
		)
		(cond 
			; Not a bound variable --> a free one
			((null? bound) `(fvar ,variable))
			
			; If bound
			(index-in-bound `(bvar ,variable ,major ,index-in-bound))

			; Not found. Try different bound
			(else (pe-lex-test-as-bound pe (cdr bound) (add1 major)))
		)
	)
)

; Performs the following code:
;   input: (var x)
;   output: (fvar x) or (bvar x 0 0) or ....
(define (lex-detect pe bound params)
	(cond 
		((not (list? pe)) pe)
		((not (eq? (car pe) 'var)) pe)
		(else
			(let*
				(
					(variable (cadr pe))
					(index-in-param (and (not (null? params)) (get-index params variable)))
				)
				(cond 
					; If PARAM
					(index-in-param `(pvar ,variable ,index-in-param))

					; Not a parameter - test as a bound variable
					(else (pe-lex-test-as-bound pe bound 0))
				)
			)
		)
	)
)


; Kind of a MAP function for 'lex-detect' with 
(define (lex-detect-list lst bound params)
	(map (lambda (x) 
		(pe->lex-pe-full x bound params)
	) lst )
)

(define (pe->lex-pe-full pe bound params)

	(cond 
		((null? pe) pe)
		((not (list? pe)) pe)
		
		((eq? (car pe) 'var)
			(lex-detect pe bound params)
		)
		
		((eq? (car pe) 'lambda-simple) 
			(let*
				(
					(tag (car pe))
					(expr (cdr pe))
					(parameters (car expr))
					(body (cdr expr))

					(new-bound (cons params bound))

					(body-lex (pe->lex-pe-full body new-bound parameters))
				)
				`(lambda-simple ,parameters ,@body-lex)
			)
		)

		((eq? (car pe) 'lambda-opt) 
			(let*
				(
					(tag (car pe))
					(expr (cdr pe))

					(opt-var-name (cadr expr))
					(parameters-no-opt (car expr))
					(parameters `(,@(car expr) ,opt-var-name))
					(body (cddr expr))

					(new-bound (cons params bound))

					(body-lex (pe->lex-pe-full body new-bound parameters))
				)
				`(lambda-opt ,parameters-no-opt ,opt-var-name ,@body-lex)
			)
		)

		((eq? (car pe) 'lambda-variadic) 
			(let*
				(
					(tag (car pe))
					(expr (cdr pe))

					(opt-var-name (car expr))
					(body (cdr expr))

					(new-bound (cons params bound))

					(body-lex (pe->lex-pe-full body new-bound (list opt-var-name)))
				)
				`(lambda-variadic ,opt-var-name ,@body-lex)
			)
		)


		(else 
			(cons 
				(pe->lex-pe-full (car pe) bound params)
				(pe->lex-pe-full (cdr pe) bound params)
			)
		)

	)
 
)

(define (pe->lex-pe pe)
  (pe->lex-pe-full pe (list) (list)))


(define (with s f)
  (apply f s)
)

; Annotates all list as: [#f #f ... #f tp?]
(define (annotate-all-but-last lst tp?)
	;(display " --> ")
	;(display (car lst))
	;(display "\n")

	(cond
		((null? lst) lst)
		((null? (cdr lst)) (annotate-tc-run (car lst) tp?))
		(else
			(cons
				(annotate-tc-run (car lst) #f)
				(annotate-all-but-last (cdr lst) tp?)
			)
		)
	)
)

(define (annotate-all-but-last-seq lst tp?)
	;(display " --> ")
	;(display (car lst))
	;(display "\n")

	(cond
		((null? lst) lst)
		((null? (cdr lst)) (list (annotate-tc-run (car lst) tp?)))
		(else
			(cons
				(annotate-tc-run (car lst) #f)
				(annotate-all-but-last-seq (cdr lst) tp?)
			)
		)
	)
)

;;;;; Annotate
(define (annotate-tc-run pe tp?)
	(cond
		((null? pe) pe)
		((not (pair? pe)) pe)

		; Fixed-points (e.g. do nothing)
		((eq? (car pe) 'const) pe)
		((eq? (car pe) 'var) pe)
		((eq? (car pe) 'fvar) pe)
		((eq? (car pe) 'pvar) pe)
		((eq? (car pe) 'bvar) pe)

		; if3 seq lambda-* or and applic
		((eq? (car pe) 'if3) 
			(with pe
				(lambda (tag test dit dif)
					`(,tag ,(annotate-tc-run test #f) ,(annotate-tc-run dit tp?) ,(annotate-tc-run dif tp?))
				)
			)
		)

		; SEQ
		((eq? (car pe) 'seq) 
			(with pe
				(lambda all-seq-args
					`(seq ,(annotate-all-but-last-seq (cadr all-seq-args) tp?))
				)
			)
		)


		((eq? (car pe) 'or) 
			(with pe
				(lambda all-seq-args
					`(or ,(annotate-all-but-last-seq (cadr all-seq-args) tp?))
				)
			)
		)


		; define
		((eq? (car pe) 'define) 
			(with pe
				(lambda (tag vars body)
					`(,tag ,vars ,(annotate-tc-run body #f))
				)
			)
		)


		((eq? (car pe) 'lambda-simple) 
			(with pe
				(lambda (tag params body)
					`(,tag ,params ,(annotate-tc-run body #t))
					;(annotate-tc-run body #t)
				)
			)
		)

		((eq? (car pe) 'lambda-variadic) 
			(with pe
				(lambda (tag params body)
					`(,tag ,params ,(annotate-tc-run body #t))
				)
			)
		)

		((eq? (car pe) 'lambda-opt) 
			(with pe
				(lambda (tag params rest body)
					`(,tag ,params ,rest ,(annotate-tc-run body #t))
				)
			)
		)

		((eq? (car pe) 'applic) 
			(with pe
				(lambda (tag proc params)
					(let ((annotated-params  (map (lambda (x) (annotate-tc-run x #f) ) params)))
						(if tp? 
							`(tc-applic ,(annotate-tc-run proc #f) ,annotated-params)
							`(applic ,(annotate-tc-run proc #f) ,annotated-params)
						)	
					)
				)
			)
		)



		(else 
			(cons 
				(annotate-tc-run (car pe) tp?)
				(annotate-tc-run (cdr pe) tp?)
			)
		)

	)
)


(define (annotate-tc pe)
  (annotate-tc-run pe #f))






;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; HOMEWORK 4
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


; Read SEXPR from File
(define file->sexprs
  (lambda (filename)
    (let ((input (open-input-file filename)))
      (letrec ((run
                (lambda ()
                  (let ((e (read input)))
                    (if (eof-object? e)
                        (begin (close-input-port input)
                               '())
                        (cons e (run)))))))
        (run)))))


(define (string->intlist str)
	(map char->integer (string->list str))
)

; Remove duplicates from a list
(define (list-remove-duplicates e)
	(if (null? e) (list)
		(cons 
			(car e) 
			(list-remove-duplicates 
				; Filter each element
				(filter 
					(lambda (x) (not (equal? x (car e))))
					(cdr e)))
		)
	)
)


(define (compilation-error message . more)
	(display message)
	(display "\n")
	(display more)
	(display "\n")
	(exit 1)
)


;; Consts
;; ==================================================
; Global table that will be used in the consts
(define consts-table `(

		(2 ,*void-object* (t_void))
		(3 () (t_nil))
	))

(define consts-free-index 4)

(define (consts-get-list pe)
	(cond 
		((null? pe) (list))
		((not (pair? pe)) (list))
		((eq? (car pe) 'const) (consts-unpack-const (cadr pe)))
		;((eq? (car pe) 'fvar) (cdr pe))
		(else `(,@(consts-get-list (car pe)) ,@(consts-get-list (cdr pe))))
	)
)

; Modified version of code as seen in class in lecture 20  (reordered things)
(define (consts-unpack-const e)
	(cond 
		((pair? e)
			`(,@(consts-unpack-const (car e)) ,@(consts-unpack-const (cdr e)) ,e))
		((symbol? e)
			`(,(symbol->string e) ,e))
		((vector? e)
			`(,@(apply append (map consts-unpack-const (vector->list e))) ,e))
		(else `(,e))
	)
)

; Finds an 'exp in consts table
(define (consts-find exp)
	(letrec ((cfind (lambda (exp lst)
		;(display (cadar lst))
		;(display "\n")
		(cond 
			((or (null? lst) (not (pair? lst))) #f)
	    	((equal? exp (cadar lst)) (car lst))
	    	(else (cfind exp (cdr lst)))
	    )	
	)))
	(cfind exp consts-table)
	)
)

(define (consts-add-to-table exp)
	(let ((current-free-index consts-free-index))
		(cond 
			; First make sure its not on the list
			((consts-find exp) void)
			((string? exp) 
				(set! consts-free-index (+ consts-free-index 1 1 (string-length exp)))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_string ,(string-length exp) ,(map char->integer (string->list exp))))
					)
				)	
			)
			((char? exp) 
				(set! consts-free-index (+ consts-free-index 2))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_char ,(char->integer exp)))
					)
				)	
			)
			((symbol? exp) 
				(set! consts-free-index (+ consts-free-index 2 3))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_symbol ,(car (consts-find (symbol->string exp)))))
					)
				)	
			)
			((number? exp) 
				(set! consts-free-index (+ consts-free-index 2))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_integer ,exp))
					)
				)	
			)
			((boolean? exp) 
				(set! consts-free-index (+ consts-free-index 2))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_bool ,(if exp 1 0)))
					)
				)	
			)
			((pair? exp) 
				(set! consts-free-index (+ consts-free-index 3))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_pair 
										,(car (consts-find (car exp)))
										,(car (consts-find (cdr exp)))
														))
					)
				)	
			)
			((vector? exp) 
				(set! consts-free-index (+ consts-free-index 2 (vector-length exp)))
				(set! consts-table 
					`(,@consts-table 
						,(list current-free-index exp `(t_vector ,exp))
					)
				)	
			)
			;; TODO - Vector
		)
	)
)

(define (consts-cg)
	(letrec ((cg (lambda (consts-table) 
		(cond
			((or (null? consts-table) (not (pair? consts-table))) "")
		    (else
		    	(let* (
		    			(current (car consts-table)) ; current item
		    			; unpack values:
		    			(offset (car current))
		    			(expr (cadr current))
		    			(cg-data (caddr current))
		    			(cg-type (car cg-data))
		    		)

		    		;; --
		    		(string-append
		    		(cond 
		    			((eq? 't_bool cg-type)  (string-append
		    					"\n/* CONSTS: BOOL sob Creation */\n"
		    					"PUSH(IMM(" (number->string (cadr cg-data)) "));\n"
								"CALL(MAKE_SOB_BOOL);\n"
								"DROP(1);\n"
		    			))
		    			((eq? 't_char cg-type)  (string-append
		    					"\n/* CONSTS: CHAR sob Creation */\n"
		    					"PUSH(IMM(" (number->string (cadr cg-data)) "));\n"
								"CALL(MAKE_SOB_CHAR);\n"
								"DROP(1);\n"
		    			))
		    			((eq? 't_integer cg-type)  (string-append
		    					"\n/* CONSTS: INTEGER sob Creation */\n"
		    					"PUSH(IMM(" (number->string (cadr cg-data)) "));\n"
								"CALL(MAKE_SOB_INTEGER);\n"
								"DROP(1);\n"
		    			))
		    			((eq? 't_string cg-type)  (string-append
		    					"\n/* CONSTS: STRING sob Creation */\n"
		    					(apply string-append (map (lambda (val) 
		    						(string-append "PUSH(IMM(" (number->string val) "));\n")
		    						) (caddr cg-data)))
		    					"PUSH(IMM(" (number->string (cadr cg-data)) "));\n"
								"CALL(MAKE_SOB_STRING);\n"
								"DROP(" (number->string (+ 1 (cadr cg-data))) ");\n"
		    			))
		    			((eq? 't_symbol cg-type)  (string-append
		    					"\n/* CONSTS: SYMBOL sob Creation */\n"
		    					"PUSH(IMM(" (number->string (cadr cg-data)) "));\n"			; The location in memeory of the string
								"CALL(MAKE_SOB_SYMBOL);\n"
								"DROP(1);\n"

					    		"/* Allocate Link-Chain (3 items) */" nl
					    		"PUSH(IND(SOB_SYMBOL_LIST));" nl 			; Chain's next points to original chain
								"PUSH(R0);" nl 								; Allocated element
								"CALL(MAKE_SOB_PAIR);" nl
								"DROP(2);" nl
								"MOV(IND(SOB_SYMBOL_LIST), R0);" nl

		    			))
		    			((eq? 't_pair cg-type)  (string-append
		    					"\n/* CONSTS: PAIR sob Creation */\n"
		    					"PUSH(IMM(" (number->string (caddr cg-data)) "));\n"
		    					"PUSH(IMM(" (number->string (cadr cg-data)) "));\n"
								"CALL(MAKE_SOB_PAIR);\n"
								"DROP(2);\n"
		    			))
		    			((eq? 't_vector cg-type)  (string-append
		    					"\n/* CONSTS: VECTOR sob Creation */\n"
		    					(apply string-append (map (lambda (val) 
		    						(string-append "PUSH(IMM(" (number->string (car (consts-find val))) "));\n")
		    						) (vector->list (cadr cg-data))))
		    					"PUSH(IMM(" (number->string (vector-length (cadr cg-data))) "));\n"
								"CALL(MAKE_SOB_VECTOR);\n"
								"DROP(2);\n"
		    			))
		    			((eq? 't_void cg-type)  (string-append
		    					"\n/* CONSTS: VOID sob Creation */\n"
								"CALL(MAKE_SOB_VOID);\n"
		    			))
		    			((eq? 't_nil cg-type)  (string-append
		    					"\n/* CONSTS: NIL sob Creation */\n"
								"CALL(MAKE_SOB_NIL);\n"
		    			))
		    			(else "ERROR ERROR ERROR !!!!### UNSUPPORTED ")
		    		)
		    		(cg (cdr consts-table)))
		    		;; --
		    	)
		    	
		    )
		)
	)))
	
		(cg consts-table)
	)
)

;; Init default values
(consts-add-to-table #f)
(consts-add-to-table #t)
(consts-add-to-table 0)
(consts-add-to-table 1)
(consts-add-to-table 2)
(consts-add-to-table 3)
(consts-add-to-table 4)
(consts-add-to-table 5)
(consts-add-to-table 6)
(consts-add-to-table 7)
(consts-add-to-table 8)
(consts-add-to-table 9)



;; Iterate list and call a 'side effect' functino consts-add-to-table
(define (consts-add-list lst)
	(cond
		((or (null? lst) (not (pair? lst))) void)
		(else 
			(consts-add-to-table (car lst))
			(consts-add-list (cdr lst))
		)
	)
)




;; FVars (Symbols)
;; ==================================================
; Global table that will be used to save symbol references
(define symbols-table '())

(define (symbols-get-list pe)
	(cond 
		((null? pe) (list))
		((not (pair? pe)) (list))
		((eq? (car pe) 'fvar) (cdr pe))
		(else `(,@(symbols-get-list (car pe)) ,@(symbols-get-list (cdr pe))))
	)
)

(define (symbols-create-table symbol-list start-index)
	(letrec
		((func (lambda (symbol-list start-index)
			(cond
				((or (null? symbol-list) (not (pair? symbol-list))) '())
			    (else
			    	(cons (cons start-index (car symbol-list)) (func (cdr symbol-list) (add1 start-index)))
			    )
			)
		)))
		(set! symbols-table (func symbol-list start-index))
	)
)

(define (symbols-cg symtbl)
	(cond
		((or (null? symtbl) (not (pair? symtbl))) "")
	    (else
	    	(string-append
	    		"\n/*Allocate undefined symbol: " (symbol->string (cdar symtbl)) "  */\n"
	    		"PUSH(IMM(1));\n"
	    		"CALL(MALLOC);\n"
	    		"DROP(1);\n"
	    		"MOV(IND(R0), T_VOID);\n"
	    		(symbols-cg (cdr symtbl))
	    	)
	    )
	)
)

; Finds an 'exp in consts table
(define (symbols-find symbol)
	(letrec ((sfind (lambda (symbol lst)
		(cond 
			((or (null? lst) (not (pair? lst))) #f)
	    	((eq? symbol (cdar lst)) (car lst))
	    	(else (sfind symbol (cdr lst)))
	    )	
	)))
	(sfind symbol symbols-table)
	)
)

(define (pe-const? pe) (if (eq? (car pe) 'const) #t #f))
(define (pe-define? pe) (if (eq? (car pe) 'define) #t #f))
(define (pe-if3? pe) (if (eq? (car pe) 'if3) #t #f))
(define (pe-seq? pe) (if (eq? (car pe) 'seq) #t #f))
(define (pe-or? pe) (if (eq? (car pe) 'or) #t #f))
(define (pe-fvar? pe) (if (eq? (car pe) 'fvar) #t #f))
(define (pe-pvar? pe) (if (eq? (car pe) 'pvar) #t #f))
(define (pe-bvar? pe) (if (eq? (car pe) 'bvar) #t #f))
(define (pe-lambda-simple? pe) (if (eq? (car pe) 'lambda-simple) #t #f))
(define (pe-lambda-opt? pe) (if (eq? (car pe) 'lambda-opt) #t #f))
(define (pe-lambda-variadic? pe) (if (eq? (car pe) 'lambda-variadic) #t #f))
(define (pe-applic? pe) (if (eq? (car pe) 'applic) #t #f))
(define (pe-tc-applic? pe) (if (eq? (car pe) 'tc-applic) #t #f))


;; Auto-number labels (as given in project's instructions)
(define ^^label
	(lambda (name)
		(let ((n 0))
			(lambda ()
				(set! n (+ n 1))
				(string-append name (number->string n))
			)
		)
	)
)

(define nl (list->string (list #\newline)))

(define ^label-if3else (^^label "Lif3else"))
(define ^label-if3exit (^^label "Lif3exit"))
(define ^label-or-exit (^^label "Lorexit"))
(define ^label-closure (^^label "Lclosure"))
(define ^label-closure-exit (^^label "Lclosureexit"))
(define ^label-convert (^^label "Lconvert"))
(define ^label-convert-done (^^label "Lconvertdone"))
(define ^label-push (^^label "Lpush"))
(define ^label-push-done (^^label "Lpushdone"))


;; ==================================================
;;   Code Gen
;; ==================================================
(define (cg pe env-size param-size)
	(cond
		((pe-const? pe) (cg-const (cadr pe) env-size param-size))
		((pe-seq? pe)   (cg-seq   (cadr pe) env-size param-size))
		((pe-if3? pe)   (cg-if3   (cdr pe) env-size param-size))
		((pe-or? pe)    (cg-or    (cadr pe) env-size param-size))
		((pe-define? pe) (cg-define (cdr pe) env-size param-size))
		((pe-fvar? pe)  (cg-fvar  (cadr pe) env-size param-size))
		((pe-bvar? pe)  (cg-bvar  (cdr pe) env-size param-size))
		((pe-pvar? pe)  (cg-pvar  (cdr pe) env-size param-size))
		((pe-applic? pe)  (cg-applic  (cdr pe) env-size param-size))
		((pe-tc-applic? pe)  (cg-applic-tc  (cdr pe) env-size param-size))
		((pe-lambda-simple? pe)  (cg-lambda-simple  (cdr pe) env-size param-size))
		((pe-lambda-variadic? pe)  (cg-lambda-variadic  (cdr pe) env-size param-size))
		((pe-lambda-opt? pe)  (cg-lambda-opt  (cdr pe) env-size param-size))
		(else (compilation-error "Unsupported symbol" pe))
	)
)

(define (cg-bvar value env-size param-size)
	(let* (
		(bvar-name (symbol->string (car value)))
		(bvar-major (number->string (cadr value)))
		(bvar-minor (number->string (caddr value)))
		)
	(string-append 
		nl 
		"/* BVar Value: " bvar-name " */" nl
		"MOV(R0, FPARG(0));" nl
		;"SHOW(\" -> Bvar fparg: \", R0);" nl

		"MOV(R0, INDD(R0, " bvar-major "));" nl
		;"SHOW(\" -> Major: \", R0);" nl

		"MOV(R0, INDD(R0, " bvar-minor "));" nl
		;"SHOW(\" -> Minor: \", R0);" nl
	))
)

(define (cg-pvar value env-size param-size)
	(let* (
		(pvar-name (symbol->string (car value)))
		(pvar-val (+ 2 (cadr value)))
		(pvar-addr (number->string pvar-val))
		)
	(string-append 
		nl 
		"/* PVar Value: " pvar-name " */" nl
		"MOV(R0, FPARG(" pvar-addr "));" nl
		;"CALL(PRINT_STACK);"
		;"SHOW(\"Pvar of " pvar-name " \", R0);" nl
	))
)

(define (cg-lambda-simple value env-size param-size)
	(let* (
		;(proc-args (car value))
		;(proc-args-length (length proc-args))
		(proc-body (cadr value))
		;(label-closure (^label-closure))
		;(label-closure-exit (^label-closure-exit))
		(proc-body-compiled (cg proc-body (add1 env-size) param-size))
		)
	(cg-lambda-base-code value proc-body-compiled env-size param-size)
	)
)


(define (cg-lambda-base-code value proc-body-compiled env-size param-size)
	(let* (
		;(proc-args (car value))
		;(proc-args-length (length proc-args))
		;(proc-body (cadr value))
		(label-closure (^label-closure))
		(label-closure-exit (^label-closure-exit))
		;(proc-body-compiled (cg proc-body (add1 env-size) param-size))
		)
	(string-append 
		; Compile the expression value of the define
		nl 
		"/* Lambda (normal) */" nl

		; TODO: Back up R1
		;"PUSH(R1);" nl
		;"PUSH(R2);" nl


		"/* Allocating new env */" nl
		"PUSH(IMM(" (number->string (add1 env-size)) "));" nl
		"CALL(MALLOC);" nl 
		"DROP(1);" nl

		; Save the new env pointer
		"MOV(R1, R0);" nl

		; Create new env
		(if (zero? env-size)
			"MOV(INDD(R1, 0), SOB_NIL);"
			(string-append 
				; Copy ENV
				"/* Copying old env to new env */" nl
				"MOV(R2, FPARG(0));" nl
                "for(i=0, j=1 ; i < " (number->string env-size) "; ++i, ++j) {" nl
				"  MOV(INDD(R1,IMM(j)), INDD(R2, IMM(i)));" nl
                "}" nl nl
				"/* Allocating current env */" nl 
				"PUSH(FPARG(IMM(1)));" nl
				"CALL(MALLOC);" nl
				"DROP(1);" nl nl
				"/* Copying current parameters to new env */" nl
				"for (i=0;i<FPARG(IMM(1));++i) { " nl
                  "  MOV(INDD(R0,i),FPARG((IMM(2+i))));" nl
                "}" nl nl

    			"/* Saving new env in current env list */"
				"MOV(INDD(R1, 0), R0);" nl
			)
		)
		
		; Allocate closure
		"PUSH(LABEL(" label-closure "));" nl 
		"PUSH(R1);" nl 
		"CALL(MAKE_SOB_CLOSURE);" nl 
		"DROP(2);" nl

		;"SHOW(\"Create closure in: \", R0);"

		; Skip code		
		"JUMP(" label-closure-exit ");" nl

		; Function code
		label-closure ":" nl
		"PUSH(FP);" nl
  		"MOV(FP, SP);" nl
		proc-body-compiled nl
		"POP(FP);" nl 
		"RETURN;" nl

		label-closure-exit ":" nl
		;"POP(R2);"
		;"POP(R1);"
		
	))
)

(define (cg-lambda-variadic value env-size param-size)
	(let* (
		(proc-args (car value))
		;(proc-args-length (length proc-args))
		(proc-body (cadr value))
		(label-convert (^label-convert))
		(label-convert-done (^label-convert-done))
		;(label-closure-exit (^label-closure-exit))
		(proc-body-compiled (cg proc-body (add1 env-size) param-size))
		)
	(cg-lambda-base-code value (string-append
			"/* Convert arguments to a list */" nl
			"MOV(R1, FPARG(1));" nl
			"INCR(R1);" nl

			; ===== PUSH ARGUMENTS TO STACK =====
			label-convert ":" nl
			"CMP(1, R1);" ; counter
			"JUMP_EQ(" label-convert-done ");" nl
			"PUSH(FPARG(R1));" nl
			"DECR(R1);" nl
			"JUMP(" label-convert ");" nl
			label-convert-done ":" nl

			; ===== Call Make List =====
			"PUSH(FPARG(1));" nl
			"CALL(MAKE_LIST);" nl
			"DROP(1);"
			"DROP(FPARG(1));" nl ; drop all args

			"MOV(R3, SP);"			; save new stack pointer

			; ==== Create a new stack ====
			"PUSH(R0);" nl 					; New list
			"PUSH(IMM(1));" nl				; 1 argument (the list)
			"PUSH(FPARG(0));" nl			; save env
			"PUSH(FPARG(-1));" nl			; Return  address
			"PUSH(FPARG(-2));" nl nl 		; Old FP
			
			; ===== Copy stack =======
			; destination
			"PUSH(IMM(5));  /* amount */" nl
			"PUSH(R3);  /* source */"  nl
			"MOV(R3, FP);" nl
			"SUB(R3, 4);" nl 		; old_fp + ret + env + arg count
			"SUB(R3, FPARG(1));" nl ; amount of arguments
			"PUSH(R3); /* destination */"  nl
			"CALL(STACKCPY);" nl
			"DROP(3);" nl

			nl
			; Fix FP and SP
			"ADD(R3, 5);" nl 	; R3 (dest) + 5 items
			"MOV(FP, R3);" nl 	 
			"MOV(SP, R3);" nl 

			;"SHOW(\"Stack\", SP);" nl

			proc-body-compiled
		) env-size param-size)
	)
)

(define (cg-lambda-opt value env-size param-size)
	(let* (
		(proc-args (car value))
		(proc-args-length (length proc-args))
		(proc-vararg (cadr value))
		(proc-body (caddr value))
		(label-convert (^label-convert))
		(label-convert-done (^label-convert-done))
		(label-push (^label-push))
		(label-push-done (^label-push-done))
		;(label-closure-exit (^label-closure-exit))
		(proc-body-compiled (cg proc-body (add1 env-size) param-size))
		)
	(cg-lambda-base-code value (string-append
			"/* Convert arguments to a list */" nl
			"MOV(R1, FPARG(1));" nl ; 1 - no. of arguments
			"INCR(R1);" nl

			; ===== PUSH ARGUMENTS TO STACK =====
			label-convert ":" nl
			"CMP(" (number->string (add1 proc-args-length)) ", R1);" ; counter
			"JUMP_EQ(" label-convert-done ");" nl
			"PUSH(FPARG(R1));" nl
			;debug print
			;"PUSH(FPARG(R1));" nl
			;"CALL(WRITE_SOB);DROP(1);"
			"DECR(R1);" nl
			"JUMP(" label-convert ");" nl
			label-convert-done ":" nl

			; ===== Call Make List =====
			; Length of list is FPARG(1)-args  => Total params - fixed params
			"MOV(R1, FPARG(1));" nl
			"SUB(R1, IMM(" (number->string proc-args-length) "));" nl
			"PUSH(R1);" nl
			"CALL(MAKE_LIST);" nl
			"DROP(1);"
			"DROP(R1);" nl ; drop all args

			"MOV(R3, SP);"			; save new stack pointer

			; =========== Create a new stack ========
			"PUSH(R0);" nl 					; New list

			; == push remained variables
			"MOV(R1, " (number->string (add1 proc-args-length)) ");" nl
			label-push ":" nl 
			"CMP(1, R1);" ; counter
			"JUMP_EQ(" label-push-done ");" nl
			"PUSH(FPARG(R1));" nl
			;debug print
			;"PUSH(FPARG(R1));" nl
			;"CALL(WRITE_SOB);DROP(1);"
			"DECR(R1);" nl
			"JUMP(" label-push ");" nl
			label-push-done ":" nl 
			; ==
			
			"PUSH(IMM(" (number->string (add1 proc-args-length)) "));" nl				; 1 argument (the list)
			"PUSH(FPARG(0));" nl			; save env
			"PUSH(FPARG(-1));" nl			; Return  address
			"PUSH(FPARG(-2));" nl nl 		; Old FP


			; ===== Copy stack =======
			; destination
			"PUSH(IMM(" (number->string (+ 5 proc-args-length)) "));  /* amount */" nl
			"PUSH(R3);  /* source */"  nl
			"MOV(R3, FP);" nl
			"SUB(R3, 4);" nl 		; old_fp + ret + env + arg count
			"SUB(R3, FPARG(1));" nl ; amount of arguments

			"PUSH(R3); /* destination */"  nl
			"CALL(STACKCPY);" nl
			"DROP(3);" nl

			nl
			; Fix FP and SP
			"ADD(R3, " (number->string (+ 5 proc-args-length)) ");" nl 	; R3 (dest) + 5 items
			"MOV(FP, R3);" nl 	 
			"MOV(SP, R3);" nl 

			;"SHOW(\"Stack\", SP);" nl

			proc-body-compiled
		) env-size param-size)
	)
)

(define (cg-applic value env-size param-size)
	(let* (
		(proc-expr (car value))
		(proc-args (cadr value))
		(proc-args-len (length proc-args))
		(proc-push-arg (lambda (arg) (string-append
			(cg arg env-size param-size)
			"PUSH(R0);" nl
		)))
		(proc-args-code (apply string-append (map proc-push-arg (reverse proc-args))))
		(proc-get-proc-code (cg proc-expr env-size param-size))
		)
	(string-append 
		; Compile the expression value of the define
		nl 
		"/* Applic (normal) */" nl
		
		; Push ARGS reversed (e.g. compile each and push R0)
		proc-args-code

		; Push number of args
		"PUSH(IMM(" (number->string proc-args-len) ")); /* length */" nl

		; ----- Get function -----
		;"SHOW(\"==Befor\", R0);" nl
		proc-get-proc-code nl
		;"SHOW(\"Applic Got proc\", R0);" nl
		; Make sure it's valid (maybe wan't defined yet)
		"// test if closure" nl
		"CMP(INDD(R0,0), T_CLOSURE);" nl
		"JUMP_NE(Lruntime_error);" nl
		; ----- Get function -----

		; Push ENV (TODO)
		"PUSH(INDD(R0,1)); //env" nl

		; Call function
		"CALLA(INDD(R0, 2));" nl

		; Restore stack
		"DROP(2 + STARG(0));" ; (number->string (+ 2 proc-args-len)) ");" nl
	))
)


(define (cg-applic-tc value env-size param-size)
	(let* (
		(proc-expr (car value))
		(proc-args (cadr value))
		(proc-args-len (length proc-args))
		(proc-push-arg (lambda (arg) (string-append
			(cg arg env-size param-size)
			"PUSH(R0);" nl
		)))
		(proc-args-code (apply string-append (map proc-push-arg (reverse proc-args))))
		(proc-get-proc-code (cg proc-expr env-size param-size))
		)
	(string-append 
		; Compile the expression value of the define
		nl 
		"/* Applic (TC) */" nl
		;"SHOW(\"Applic TC\",0);" nl

		; Push ARGS reversed (e.g. compile each and push R0)
		proc-args-code

		; Push number of args
		"PUSH(IMM(" (number->string proc-args-len) ")); /* length */" nl

		; ----- Get function -----
		proc-get-proc-code nl
		;"SHOW(\"ApplicTC Got proc\", R0);" nl
		; Make sure it's valid (maybe wan't defined yet)
		"// test if closure" nl
		"CMP(INDD(R0,0), T_CLOSURE);" nl
		"JUMP_NE(Lruntime_error);" nl
		; ----- Get function -----

		; Push ENV
		"PUSH(INDD(R0,1)); //env" nl

		"MOV(R1, FPARG(-2)); // save old fp" nl
		"PUSH(FPARG(-1)); // push previous ret address" nl
		nl

		;"CALL(PRINT_STACK);"

		; Calc stack start address
		"/* Overwrite old stack */" nl
		"PUSH(IMM(" (number->string (+ 3 proc-args-len)) "));  /* amount */" nl
		"PUSH(FP);      /* source */"  nl
		"MOV(R2, FP);" nl
		"SUB(R2, 4);" nl 		; old_fp + ret + env + arg count
		"SUB(R2, FPARG(1));" nl ; amount of arguments
		"PUSH(R2);      /* destination */" nl
		"CALL(STACKCPY);" nl
		;"DROP(3);" nl

		; FP = New stack FP
		"MOV(FP, R1); " nl
		"ADD(R2, " (number->string (+ 3 proc-args-len)) ");" nl
		"MOV(SP, R2);" nl

		;"CALL(PRINT_STACK);"
		;"exit(1);";

		; Call function
		"JUMPA((void *) INDD(R0, 2));" nl

		;; Restore stack
		;"DROP(2 + STARG(0));" ; (number->string (+ 2 proc-args-len)) ");" nl


	))
)

(define cg-list-of-sexpr
	(lambda (lst)
		(if (null? lst) ""
			(string-append
				(cg (car lst) 0 0)
				(cg-list-of-sexpr (cdr lst))
			))
	)
)

(define (cg-const value env-size param-size)
	(string-append 
		"MOV(R0, IMM(" (number->string (car (consts-find value))) "));\n"
	)
)

(define (cg-define value env-size param-size)
	(let* (
		(fvar (car value))
		(expr (cadr value))
		(fvar-name (symbol->string (cadr fvar)))
		(fvar-addr (symbols-find (cadr fvar)))
		)
	(if (not fvar-addr) (compilation-error "Error on Define. Could not find symbol in table."))
	(string-append 
		; Compile the expression value of the define
		nl 
		"/* Define " fvar-name " */" nl
		(cg expr env-size param-size) ; Internal Value compilation
		"MOV(IND(" (number->string (car fvar-addr)) "), R0);" nl
	))
)


(define (cg-fvar value env-size param-size)
	;(display value)
	(let* (
		(fvar-name (symbol->string value))
		(fvar-sym (symbols-find value))
		(fvar-addr (number->string (car fvar-sym)))
		)
	(if (not fvar-sym) (compilation-error "Error on Fvar. Could not find symbol in table." value))
	(string-append 
		nl 
		"/* FVar Value: " fvar-name " */" nl
		"MOV(R0, IND(" fvar-addr "));" nl
	))
)

(define (cg-seq value env-size param-size)
	(string-append 
		"\n/* Sequence */\n"
		(apply string-append 
			(map (lambda (item) (cg item env-size param-size)) value)
		)
	)
)

(define (cg-or value env-size param-size)
	(let* 
	   ((or-exit-label (^label-or-exit))
	   	(cg-conditions (map (lambda (item) (cg item env-size param-size)) value))
	   	(cg-cond-codes (map (lambda (asm-code)
	   			(string-append 
	   				asm-code
	   				"CMP(R0, SOB_BOOL_FALSE);" nl
	   				"JUMP_NE(" or-exit-label ");" nl
	   			)
	   		) cg-conditions))
	   	(cg-cond-src-string (apply string-append cg-cond-codes)))

		(string-append 
			nl nl
			"/* OR Expression */\n"
			cg-cond-src-string nl
			or-exit-label ":" nl
		)
	)
)

;; Aas given in project's instructions
(define (cg-if3 value env-size param-size)
	(with value
		(lambda (test do-if-true do-if-false)
			(let (
				(code-test (cg test env-size param-size))
				(code-dit (cg do-if-true env-size param-size))
				(code-dif (cg do-if-false env-size param-size))
				(label-else (^label-if3else))
				(label-exit (^label-if3exit)))
			(string-append
				nl
				"/* if3 expression */" nl
				code-test nl ; when run, the result of the test will be in R0
				"CMP(R0, SOB_BOOL_FALSE);" nl
				"JUMP_EQ(" label-else ");" nl
				code-dit nl
				"JUMP(" label-exit ");" nl
				label-else ":" nl
				code-dif nl
				label-exit ":" nl)
		))
	)
)


;; ==================================================
;;   Primitives
;; ==================================================
(define (get-primitive-label name)
	(cond 
		((equal? name "bin+") "PLUS")
		((equal? name "bin/") "PDIV")
		((equal? name "bin=?") "BIN_EQ")
		((equal? name "bin<?") "BIN_LT")
		((equal? name "bin-") "MINUS")
		((equal? name "bin*") "PMUL")
		((equal? name "car") "CAR")
		((equal? name "cdr") "CDR")
		((equal? name "char->integer") "CHAR_TO_INTEGER")
		((equal? name "integer->char") "INTEGER_TO_CHAR")
		((equal? name "cons") "CONS")
		((equal? name "eq?") "IS_EQ")

		; WTF is "IS_EQ?"
		((equal? name "apply") "PAPPLY")

		((equal? name "string?") "IS_STRING")
		((equal? name "integer?") "IS_INTEGER")
		((equal? name "number?") "IS_INTEGER")
		((equal? name "boolean?") "IS_BOOL")
		((equal? name "char?") "IS_CHAR")
		((equal? name "null?") "IS_NILL")
		((equal? name "void?") "IS_VOID")
		((equal? name "pair?") "IS_PAIR")
		((equal? name "vector?") "IS_VECTOR")
		((equal? name "symbol?") "IS_SYMBOL")
		((equal? name "procedure?") "IS_CLOSURE")
		((equal? name "zero?") "ZERO")
		((equal? name "string?") "ZERO")

		((equal? name "make-string") "MAKE_STRING")
		((equal? name "make-vector") "MAKE_VECTOR")

		((equal? name "remainder") "REMAINDER")
		((equal? name "set-car!") "SET_CAR")
		((equal? name "set-cdr!") "SET_CDR")
		((equal? name "string-length") "STRING_LENGTH")
		((equal? name "string-ref") "STRING_REF")
		((equal? name "string-set!") "STRING_SET")
		((equal? name "string->symbol") "STRING_TO_SYMBOL")
		((equal? name "symbol->string") "SYMBOL_TO_STRING")
		((equal? name "vector-length") "VECTOR_LENGTH")
		((equal? name "vector-ref") "VECTOR_REF")
		((equal? name "vector-set!") "VECTOR_SET")

	    (else #f)
	)
)

(define (primitives-cg symtbl)
	(cond
		((or (null? symtbl) (not (pair? symtbl))) "")
		((get-primitive-label (symbol->string (cdar symtbl))) (string-append
			"PUSH(LABEL(" (get-primitive-label (symbol->string (cdar symtbl))) "));" nl
			"PUSH(IMM(SOB_NIL));" nl
			"CALL(MAKE_SOB_CLOSURE);" nl
			"DROP(2);" nl
			"MOV(IND(" (number->string (caar symtbl)) "), R0);" nl nl
			(primitives-cg (cdr symtbl))
		))
	    (else
	    	(primitives-cg (cdr symtbl))
	    )
	)
)


;; ==================================================
;;   General
;; ==================================================



;(file->sexprs "tests.scm")
; TODO: Support file writing 
(define compile-scheme-file
	(lambda (filename out-filename)
		(let* 
			((support-code (file->sexprs "support-code.scm"))
			 (sexprs (file->sexprs filename))
			 (all-sexprs (append support-code sexprs))
			 (parsed (map parse all-sexprs))
			 (lexed (map pe->lex-pe parsed))
			 (annotated (map annotate-tc lexed))
			 (consts-list (consts-get-list annotated))
			 (symbols-list (list-remove-duplicates (symbols-get-list annotated)))
			 (symbols-extended-list (list-remove-duplicates (append *primitives* symbols-list)))
			 (out-fd (open-output-file out-filename))
			)
		; Add all constst-list to table (side effect function)
		(consts-add-list consts-list)
	
		; Create symbol table
		(symbols-create-table symbols-extended-list consts-free-index)

		;write to output file
		(display (string-append

"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* change to 0 for no debug info to be printed: */
#define DO_SHOW 1

#include \"cisc.h\"

int main()
{
  START_MACHINE;

  JUMP(CONTINUE);

  int i,j;

#define SOB_SYMBOL_LIST 1
#define SOB_VOID  2
#define SOB_NIL   3
#define SOB_BOOL_FALSE 4
#define SOB_BOOL_TRUE  6
#define SOB_ZERO  8

#include \"char.lib\"
#include \"io.lib\"
#include \"math.lib\"
#include \"string.lib\"
#include \"system.lib\"
#include \"scheme.lib\"
#include \"builtins.lib\"

 CONTINUE:
 "

			"/**************************************************/" nl
			"/* Symbol Table Linked-List allocation */" nl
			"/**************************************************/" nl
			"PUSH(1);" nl
			"CALL(MALLOC);" nl
			"DROP(1);" nl
			"MOV(IND(R0), SOB_NIL);"

 			nl
			"/**************************************************/" nl
			"/* Consts Table (autogenerated) */" nl
			"/**************************************************/" nl
			(consts-cg)
			nl nl nl

			"/**************************************************/" nl
			"/* Symbol Table (autogenerated) */" nl
			"/**************************************************/" nl
			(symbols-cg symbols-table)
			nl nl nl


			"/**************************************************/" nl
			"/* Update primitive symbols */" nl
			"/**************************************************/" nl
			(primitives-cg symbols-table)
			nl nl nl 

			"/**************************************************/" nl
			"/* Compiled Code */" nl
			"/**************************************************/" nl
			(cg-list-of-sexpr annotated)

"

/**************************************************/
/* Compiled Code: END */
/**************************************************/


/* Display result on STDOUT */
PUSH(R0);
CALL(WRITE_SOB);
DROP(1);

STOP_MACHINE;
  return 0;


Lruntime_error:
  printf(\"Runtime error\\n\");
  //CALL(PRINT_HEAP);

STOP_MACHINE;

  return 1;
}
"


			) out-fd)

		(close-output-port out-fd)




		)
	)
)


