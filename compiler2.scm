(load "compiler3.scm")

(define meirsSchemeString
  (string-append
"abc")
)

;(define meirsSchemeString
;  (string-append
;"
;(define map
;  ((lambda (y) 
;     ((lambda (map1) 
;  ((lambda (maplist) 
;     (lambda (f . s) 
;       (maplist f s))) 
;   (y (lambda (maplist) 
;        (lambda (f s) 
;    (if (null? (car s)) '() 
;        (cons (apply f (map1 car s)) 
;        (maplist f (map1 cdr s))))))))) 
;      (y (lambda (map1) 
;     (lambda (f s) 
;       (if (null? s) '() 
;     (cons (f (car s)) 
;           (map1 f (cdr s))))))))) 
;   (lambda (f) 
;     ((lambda (x) 
;  (f (lambda (y z)
;       ((x x) y z))))
;      (lambda (x) 
;  (f (lambda (y z)
;       ((x x) y z))))))))


;(define Ym
;  (lambda fs
;    (let ((ms (map
;    (lambda (fi)
;      (lambda ms
;        (apply fi (map (lambda (mi)
;             (lambda args
;               (apply (apply mi ms) args))) ms))))
;    fs)))
;      (apply (car ms) ms)))) 
      

;(define bin+ (lambda (x y) (+ x y)))
;(define bin- (lambda (x y) (- x y)))
;(define bin* (lambda (x y) (* x y)))
;(define bin/ (lambda (x y) (/ x y)))
;(define bin<? (lambda (x y) (< x y)))
;(define bin>? (lambda (x y) (> x y)))
;(define bin=? (lambda (x y) (= x y)))

;(define bin<=? (lambda (a b) (not (bin>? a b))))
;(define bin>=? (lambda (a b) (not (bin<? a b))))


;(define add1 (lambda (n) (bin+ n 1))) 
;(define sub1 (lambda (n) (bin- n 1)))


;(define not (lambda (x) (if x #f #t)))

;(define ormap
;  (lambda (f . s)
;    (letrec ((loop
;        (lambda (s)
;    (and (pair? (car s))
;         (or (apply f (map car s))
;       (loop (map cdr s)))))))
;      (loop s))))

;(define andmap
;  (lambda (f . s)
;    (letrec ((loop
;        (lambda (s)
;    (or (null? (car s))
;        (and (apply f (map car s))
;       (loop (map cdr s)))))))
;      (loop s))))
      

;(define order
;  (lambda (<)
;    (letrec ((loop
;        (lambda (a s)
;    (or (null? s)
;        (and (< a (car s))
;       (loop (car s) (cdr s)))))))
;      (lambda (a . s)
;  (loop a s)))))


;(define <= (order bin<=?))
;(define >= (order bin>=?))

;(define <>
;  (letrec ((loop
;      (lambda (a s)
;        (or (null? s)
;      (and (andmap (lambda (b) (not (= a b))) s)
;           (loop (car s) (cdr s)))))))
;    (lambda s
;      (loop (car s) (cdr s)))))


;(define foldr
;  (lambda (binop final s)
;    (letrec ((loop
;        (lambda (s)
;    (if (null? s) final
;        (binop (car s) (loop (cdr s)))))))
;      (loop s))))

;(define compose
;  (let ((binary-compose
;   (lambda (f g)
;     (lambda (x)
;       (f (g x))))))
;    (lambda s
;      (foldr binary-compose (lambda (x) x) s))))

;(define caar (compose car car))
;(define cadr (compose car cdr))
;(define cdar (compose cdr car))
;(define cddr (compose cdr cdr))
;(define caaar (compose car caar))
;(define caadr (compose car cadr))
;(define cadar (compose car cdar))
;(define caddr (compose car cddr))
;(define cdaar (compose cdr caar))
;(define cdadr (compose cdr cadr))
;(define cddar (compose cdr cdar))
;(define cdddr (compose cdr cddr))
;(define caaaar (compose car caaar))
;(define caaadr (compose car caadr))
;(define caadar (compose car cadar))
;(define caaddr (compose car caddr))
;(define cadaar (compose car cdaar))
;(define cadadr (compose car cdadr))
;(define caddar (compose car cddar))
;(define cadddr (compose car cdddr))
;(define cdaaar (compose cdr caaar))
;(define cdaadr (compose cdr caadr))
;(define cdadar (compose cdr cadar))
;(define cdaddr (compose cdr caddr))
;(define cddaar (compose cdr cdaar))
;(define cddadr (compose cdr cdadr))
;(define cdddar (compose cdr cddar))
;(define cddddr (compose cdr cdddr))

;(define ^variadic-right-from-binary
;  (lambda (binary-op base-value)
;    (letrec ((op-list
;        (lambda (s)
;    (if (null? s) base-value
;        (binary-op (car s) (op-list (cdr s)))))))
;      (lambda args
;  (op-list args)))))

;(define ^variadic-left-from-binary
;  (lambda (binary-op base-value)
;    (letrec ((op-list
;        (lambda (acc s)
;    (if (null? s) acc
;        (op-list (binary-op acc (car s)) (cdr s))))))
;      (lambda args
;  (if (null? args) base-value
;      (op-list (car args) (cdr args)))))))

;(define ^char-op
;  (lambda (int-op)
;    (lambda (ch1 ch2)
;      (int-op (char->integer ch1) (char->integer ch2)))))


;(define char=? (order (^char-op bin=?)))
;(define char<=? (order (^char-op bin<=?)))
;(define char<? (order (^char-op bin<?)))
;(define char>=? (order (^char-op bin>=?)))
;(define char>? (order (^char-op bin>?)))

;(define char-uppercase?
;  (lambda (ch)
;    (and (char<=? #\\A ch)
;   (char<=? ch #\\Z))))

;(define char-lowercase?
;  (lambda (ch)
;    (and (char<=? #\\a ch)
;   (char<=? ch #\\z))))

;(define char-upcase
;  (let ((char-aA (- (char->integer #\\a) (char->integer #\\A))))
;    (lambda (ch)
;      (if (char-lowercase? ch)
;    (integer->char
;     (- (char->integer ch) char-aA))
;    ch))))

;(define char-downcase
;  (let ((char-aA (- (char->integer #\\a) (char->integer #\\A))))
;    (lambda (ch)
;      (if (char-uppercase? ch)
;    (integer->char
;     (+ (char->integer ch) char-aA))
;    ch))))

;(define char-ci<=?
;  (order
;   (lambda (ch1 ch2)
;     (char<=? (char-upcase ch1) (char-upcase ch2)))))

;(define char-ci<?
;  (order
;   (lambda (ch1 ch2)
;     (char<? (char-upcase ch1) (char-upcase ch2)))))

;(define char-ci=?
;  (order
;   (lambda (ch1 ch2)
;     (char=? (char-upcase ch1) (char-upcase ch2)))))

;(define char-ci>?
;  (order
;   (lambda (ch1 ch2)
;     (char>? (char-upcase ch1) (char-upcase ch2)))))

;(define char-ci>=?
;  (order
;   (lambda (ch1 ch2)
;     (char>=? (char-upcase ch1) (char-upcase ch2)))))

;(define string-upcase
;  (lambda (string)
;    (list->string
;     (map char-upcase (string->list string)))))

;(define string-downcase
;  (lambda (string)
;    (list->string
;     (map char-downcase (string->list string)))))

;(define even?
;  (lambda (n)
;    (zero? (remainder n 2))))

;(define odd?
;  (lambda (n)
;    (not (zero? (remainder n 2)))))

;(define length
;  (lambda (s)
;    (if (null? s) 0
;  (add1 (length (cdr s))))))

;(define list (lambda args args))

;(define list-ref
;  (lambda (s i)
;    (if (zero? i) (car s)
;  (list-ref (cdr s) (- i 1)))))

;(define list?
;  (lambda (e)
;    (or (null? e)
;  (and (pair? e)
;       (list? (cdr e))))))

;(define member?
;  (lambda (a s)
;    (ormap (lambda (b) (eq? a b)) s)))

;(define negative? (lambda (n) (< n 0)))

;(define positive? (lambda (n) (> n 0)))

;(define vector (lambda args (list->vector args)))


;(define string->list
;  (letrec ((loop
;      (lambda (str n s)
;        (if (= n -1) s
;      (loop str
;      (- n 1)
;      (cons (string-ref str n) s))))))
;    (lambda (str)
;      (loop str (- (string-length str) 1) '()))))

;(define binary-string=?
;  (lambda (str1 str2)
;    (let ((n1 (string-length str1))
;    (n2 (string-length str2)))
;      (and (= n1 n2)
;     (let ((s1 (string->list str1))
;     (s2 (string->list str2)))
;       (andmap char=? s1 s2))))))

;(define binary-string<?
;  (lambda (str1 str2)
;    (letrec ((loop
;        (lambda (s1 s2)
;    (cond ((null? s1) (pair? s2))
;          ((null? s2) #f)
;          ((char=? (car s1) (car s2))
;           (loop (cdr s1) (cdr s2)))
;          (else (char<? (car s1) (car s2)))))))
;      (loop (string->list str1)
;      (string->list str2)))))

;(define binary-string>? (lambda (str1 str2) (binary-string<? str2 str1)))

;(define binary-string<=?
;  (lambda (str1 str2) (not (binary-string>? str1 str2))))

;(define binary-string>=?
;  (lambda (str1 str2) (not (binary-string<? str1 str2))))

;(define string=? (order binary-string=?))
;(define string<? (order binary-string<?))
;(define string>? (order binary-string>?))
;(define string<=? (order binary-string<=?))
;(define string>=? (order binary-string>=?))

;(define vector->list
;  (letrec ((loop
;      (lambda (v n s)
;        (if (= n -1) s
;      (loop v
;      (- n 1)
;      (cons (vector-ref v n) s))))))
;    (lambda (v)
;      (loop v (- (vector-length v) 1) '()))))

;(define list->string
;  (lambda (s)
;    (let* ((n (length s))
;     (str (make-string n)))
;      (letrec ((loop
;    (lambda (s i)
;      (if (= i n) str
;          (begin
;      (string-set! str i (car s))
;      (loop (cdr s) (+ i 1)))))))
;  (loop s 0)))))

;(define list->vector
;  (lambda (s)
;    (let* ((n (length s))
;     (v (make-vector n)))
;      (letrec ((loop
;    (lambda (s i)
;      (if (= i n) v
;          (begin
;      (vector-set! v i (car s))
;      (loop (cdr s) (+ i 1)))))))
;  (loop s 0)))))

;(define member
;  (lambda (a s)
;    (cond ((null? s) #f)
;    ((equal? (car s) a) s)
;    (else (member a (cdr s))))))

;;;; this procedure is defined as an abstraction over assoc/assq,
;;;; with the potential to define assoc over new and interesting
;;;; predicates...

;(define equal?
;  (let ((void-object (if #f #f)))
;    (letrec ((equal?
;        (lambda (a b)
;    (cond
;     ;; bool
;     ((and (boolean? a) (boolean? b))
;      (boolean=? a b))
;     ;; char
;     ((and (char? a) (char? b)) (char=? a b))
;     ;; nil
;     ((null? a) (null? b))
;     ;; number
;     ((and (number? a) (number? b)) (= a b))
;     ;; pair
;     ((and (pair? a) (pair? b))
;      (and (equal? (car a) (car b))
;           (equal? (cdr a) (cdr b))))
;     ;; string
;     ((and (string? a) (string? b)) (string=? a b))
;     ;; symbol
;     ((and (symbol? a) (symbol? b)) (eq? a b))
;     ;; vector
;     ((and (vector? a) (vector? b)
;           (= (vector-length a) (vector-length b)))
;      (equal? (vector->list a) (vector->list b)))
;     ;; void
;     ((eq? a void-object) (eq? b void-object))
;     (else #f)))))
;      equal?)))

;(define ^associate
;  (lambda (equal?)
;    (letrec ((run
;        (lambda (a s)
;    (cond ((null? s) #f)
;          ((equal? (caar s) a) (car s))
;          (else (run a (cdr s)))))))
;      run)))

;(define assoc (^associate equal?))

;(define assq (^associate eq?))

;(define boolean=?
;  (lambda (a b)
;    (if (and (boolean? a) (boolean? b))
;  (if a b (not b))
;  #f ; should have generated an error message!
;  )))


;(define void
;  (let ((void-object
;   (if #f #f)))
;    (lambda () void-object)))

;(define void?
;  (let ((void-object (void)))
;    (lambda (x) (eq? x void-object))))

;(define string-append
;  (lambda s
;    (list->string (apply append (map string->list s)))))

;(define vector-append
;  (lambda s
;    (list->vector (apply append (map vector->list s)))))

;(define append
;  (letrec ((app2
;      (lambda (s1 s2)
;        (if (null? s1) s2
;      (cons (car s1)
;       (app2 (cdr s1) s2)))))
;     (appl
;      (lambda (s1 s)
;        (if (null? s) s1
;      (app2 s1 (appl (car s) (cdr s)))))))
;    (lambda s
;      (if (null? s) '()
;    (appl (car s) (cdr s))))))

;(define reverse
;  (letrec ((loop
;      (lambda (s r)
;        (if (null? s) r
;      (loop (cdr s) (cons (car s) r))))))
;    (lambda (s)
;      (loop s '()))))

;(define string-reverse
;  (compose
;   list->string
;   reverse
;   string->list))

;(define list-ref
;  (lambda (s i)
;    (if (zero? i) (car s)
;  (list-ref (cdr s) (- i 1)))))

;(define list-set!
;  (lambda (s i x)
;    (if (zero? i) (set-car! s x)
;  (list-set! (cdr s) (- i 1) x))))

;(define max
;  (let ((binary-max (lambda (a b) (if (> a b) a b))))
;    (lambda (a . s)
;      (foldr binary-max a s))))

;(define min
;  (let ((binary-min (lambda (a b) (if (< a b) a b))))
;    (lambda (a . s)
;      (foldr binary-min a s))))

;"))

;(define T_VOID    937610)
;(define T_NIL     722689)
;(define T_BOOL    741553)
;(define T_CHAR    181048)
;(define T_INTEGER 945311)
;(define T_STRING  799345)
;(define T_SYMBOL  368031)
;(define T_PAIR    885397)
;(define T_VECTOR  335728)
;(define T_CLOSURE 276405)
;(define addressPtr 20)
;(define constTable '())
;(define initConstTable
;  (lambda ()
;    (set! constTable 
;          (append constTable (list (list addressPtr (void) `(,T_VOID)))))
;    (set! addressPtr (+ addressPtr 1))
    
;    (set! constTable 
;          (append constTable (list (list addressPtr '() `(,T_NIL)))))
;    (set! addressPtr (+ addressPtr 1))
    
;    (set! constTable 
;          (append constTable (list (list addressPtr #f `(,T_BOOL 0)))))
;    (set! addressPtr (+ addressPtr 2))
    
;    (set! constTable 
;          (append constTable (list (list addressPtr #t `(,T_BOOL 1)))))
;    (set! addressPtr (+ addressPtr 2))
    
;    ""))

;------------------------------ Const Table: ----------------------

(define getConstStackAddress
  (lambda (constObj constTable)
          (if (null? constTable)
              0 
            (if (and (not (null? constTable)) (equal? constObj (cadar constTable)))
                (caar constTable)
                (getConstStackAddress constObj (cdr constTable))))))

(define addToConstTable
  (lambda (exp)
    (let* ((addr (getConstStackAddress exp constTable))
           (appendToConstTable
                (lambda (newConst)
                  (set! constTable
                        (append constTable
                           (list (list addressPtr newConst)))))))
      (if (eq? addr 0)
      (cond 
      ((char? exp)          
       (appendToConstTable (append `(,T_CHAR) (list (char->integer exp))))
       (set! addressPtr (+ addressPtr 2)) "")
      
      ((number? exp)
       (appendToConstTable (append `(,T_INTEGER) (list exp)))
       (set! addressPtr (+ addressPtr 2)) "")
      
      ((string? exp)
       (appendToConstTable (append `(,T_STRING) (list (length (string->list exp))) (make-int-list (string->list exp))))
       (set! addressPtr  (+ addressPtr 2 (length (string->list exp)))) "")
      
      ((symbol? exp)
       (addToConstTable (symbol->string exp))
       (appendToConstTable (append `(,T_SYMBOL) (list (getConstStackAddress (symbol->string exp) constTable))))
       (set! addressPtr (+ addressPtr 2)) "")
      
      ((pair? exp)
       (addToConstTable (car exp))
       (addToConstTable (cdr exp))
        (appendToConstTable (append `(,T_PAIR) (list (getConstStackAddress (car exp) constTable) (getConstStackAddress (cdr exp) constTable))))
       (set! addressPtr (+ addressPtr 3)) "")
      
      ((vector? exp)
       (addToConstTable (car (vector->list exp)))
       (addToConstTable (cdr (vector->list exp)))
       (appendToConstTable (append `(,T_VECTOR) (list (vector-length exp)) (getVectorConstsAddresses exp 0)))
       (set! addressPtr  (+ addressPtr 2 (vector-length exp))) "")
      (else (error 'addToConstTable (format "Unknown const: ~s" exp))))
          ""))))
    
(define getVectorConstsAddresses
  (lambda (vector len)
    (if (eq? (vector-length vector) len)
        '()
        (append (list 
                  (getConstStackAddress (vector-ref vector len) constTable))
                (getVectorConstsAddresses vector (+ len 1))))))


(define initFvarTable
  (lambda ()
    (display "fvarTable Generated!\n")
      )    
)

(define getAllFreeVars
  (lambda (parsedInCode)
    "--getAllFreeVars--"   
 
))

(define loadConstTable
  (lambda ()
    "--ConstTables--"   
))

(define loadBuiltinProcedures
  (lambda ()
    "--loadBuiltinProcedures--"   
  
))


(define builtInProcedures
  '(apply boolean? car cdr char->integer char? cons eq? integer?
          integer->char make-string make-vector null? number? pair? procedure?
          remainder set-car! set-cdr! string-length string-ref string-set! 
          string->symbol string? symbol? symbol->string vector-length 
          vector-ref vector-set! vector? zero? + - * / < > = ))

(define builtInProceduresLabels
  '((apply "APPLY") (boolean? "IS_BOOLEAN") (car "CAR") (cdr "CDR") (char->integer "CHAR_TO_INT") (char? "IS_CHAR") (cons "CONS") (eq? "IS_EQ") (integer? "IS_INT")
          (integer->char "INT_TO_CHAR")  (make-string "MAKE_STRING") (make-vector "MAKE_VECTOR") (null? "IS_NULL") (number? "IS_NUMBER") (pair? "IS_PAIR") (procedure? "IS_PROC")
          (remainder "REMAINDER") (set-car! "SET_CAR") (set-cdr! "SET_CDR") (string-length "STRING_LENGTH") (string-ref "STRING_REF") (string-set! "STRING_SET") 
          (string->symbol "STRING_TO_SYMBOL") (string? "IS_STRING") (symbol? "IS_SYMBOL") (symbol->string "SYMBOL_TO_STRING") (vector-length "VECTOR_LENGTH") 
          (vector-ref "VECTOR_REF") (vector-set! "VECTOR_SET") (vector? "IS_VECTOR") (zero? "IS_ZERO") (+ "OP_PLUS") (- "OP_MINUS") (* "OP_MUL") (/ "OP_DIV") (< "OP_SMALLER")
          (> "OP_BIGGER") (= "OP_EQUAL")))


;---------------------------Symbol Table:-------------------------

;--------------------------ToChange --------------------------

(define buildInProcList
  '(number? integer? boolean? char? null? pair? string? symbol? zero? vector? procedure? 
      + - * / < > = char->integer integer->char string-length string-ref string-set! make-string 
      vector-length vector-ref vector-set! make-vector cons car cdr list vector apply length symbol->string
      string->symbol eq? set-cdr! set-car!)
)


(define createSymbolTable
  (lambda (symbols)
    (if 
      (null? symbols) 
      (g_symbolsTable 0)
      
      (let* (
          (nextSym  (car symbols))
          (restSyms (cdr symbols))
          (newEntry     (createNewSymbolTableEntry nextSym))
          )
        (begin 
          (g_symbolsTable newEntry)
          (createSymbolTable restSyms)              
        )
            
    ))))

(define createNewSymbolTableEntry
  (lambda (sym)
    (let* 
      (
        (oldFm        (freeMem 0))
        (newFm        (freeMem 5))
        (stringObjAddr    (getEntryAddrFromConstTable (symbol->string sym)))
        (newEntry   (list `(,oldFm ,sym ,t_symbol ,(+ 3 oldFm) ,newFm ,stringObjAddr)))
      )
      newEntry
  )))

;; always exist!!!
(define existInSymbolTable? 
  (lambda (sym accSymTable)
    (if 
      (null? accSymTable)
      #f
      (let* (
          (nextSymEntry   (car accSymTable))
          (nextSymName    (cadr nextSymEntry))
          (restSyms     (cdr accSymTable))
          )
        (if 
          (equal? nextSymName sym)
          nextSymEntry
          (existInSymbolTable? sym restSyms)
        )
      ))))

; PreCond : entry exist.
(define getEntryFromSymbolTable
  (lambda (sym)
    (let ((accSymTable (g_symbolsTable 0)))
      (existInSymbolTable? sym accSymTable)
    )
))

(define getEntryBucketAddrFromSymbolTable
  (lambda (sym)
    (let ((accSymTable (g_symbolsTable 0)))
      (cadddr (existInSymbolTable? sym accSymTable))
    )
))

(define symbolTableCompiled
  (lambda ()
    (let (
        (symTable (g_symbolsTable 0))
       )
      (letrec (
            (recFunc
              (lambda (currTable symAddr)
                (if 
                  (null? currTable)
                  (string-append
                    "MOV(INDD(" (number->string symAddr) ", 2), 2);" nl
                  )
                  (let* (
                      (entry          (car currTable))
                      (symAddr          (car entry))
                      (sym          (cadr entry))
                      (symbolTag        (caddr entry))
                      (bucketAddr       (cadddr entry))
                      (nextNodeAddr       (cadddr (cdr entry)))
                      (pointerToString      (cadddr (cddr entry)))
                      (initValInR0        (putInitSymValueInR0 sym))
                     )
                    (string-append
                      "MOV(INDD(" (number->string symAddr) ", 0), IMM(" (number->string symbolTag)  "));" nl
                      "MOV(INDD(" (number->string symAddr) ", 1), IMM(" (number->string bucketAddr) "));" nl
                      "MOV(INDD(" (number->string symAddr) ", 2), IMM(" (number->string nextNodeAddr) "));" nl
                      "MOV(INDD(" (number->string symAddr) ", 3), IMM(" (number->string pointerToString) "));" nl
                      initValInR0
                      "MOV(INDD(" (number->string symAddr) ", 4), R0);" nl
                      (recFunc (cdr currTable) symAddr)
                      )))
                ))
          )
          (recFunc symTable (g_symbolsTableStartAddr 0))
      )
    )))

(define putInitSymValueInR0
  (lambda (sym)
    (string-append
      (cond
        ((eq? sym 'number? ) (createClosureCodeFromLableName "IS_NUMBER"))
        ((eq? sym 'integer? ) (createClosureCodeFromLableName "IS_INTEGER"))
        ((eq? sym 'boolean? ) (createClosureCodeFromLableName "IS_BOOLEAN"))
        ((eq? sym 'char? ) (createClosureCodeFromLableName "IS_CHAR"))
        ((eq? sym 'null? ) (createClosureCodeFromLableName "IS_NULL"))
        ((eq? sym 'pair? ) (createClosureCodeFromLableName "IS_PAIR"))
        ((eq? sym 'string? ) (createClosureCodeFromLableName "IS_STRING"))
        ((eq? sym 'symbol? ) (createClosureCodeFromLableName "IS_SYMBOL"))
        ((eq? sym 'vector? ) (createClosureCodeFromLableName "IS_VECTOR"))
        ((eq? sym 'procedure? ) (createClosureCodeFromLableName "IS_PROCEDURE"))
        ((eq? sym 'zero? ) (createClosureCodeFromLableName "IS_ZERO_MY"))
        ((eq? sym '+ ) (createClosureCodeFromLableName "VARIADIC_PLUS"))
        ((eq? sym '* ) (createClosureCodeFromLableName "VARIADIC_MUL"))
        ((eq? sym '/ ) (createClosureCodeFromLableName "VARIADIC_DIV"))
        ((eq? sym '- ) (createClosureCodeFromLableName "VARIADIC_MINUS"))
        ((eq? sym '= ) (createClosureCodeFromLableName "VARIADIC_EQUAL"))
        ((eq? sym '> ) (createClosureCodeFromLableName "VARIADIC_GT"))
        ((eq? sym '< ) (createClosureCodeFromLableName "VARIADIC_LT"))
        ((eq? sym 'char->integer ) (createClosureCodeFromLableName "CHAR_TO_INTEGER"))
        ((eq? sym 'integer->char ) (createClosureCodeFromLableName "INTEGER_TO_CHAR"))
        ((eq? sym 'remainder ) (createClosureCodeFromLableName "REMAINDER"))
        ((eq? sym 'string-length ) (createClosureCodeFromLableName "STRING_LENGTH"))
        ((eq? sym 'string-ref ) (createClosureCodeFromLableName "STRING_REF"))
        ((eq? sym 'string-set! ) (createClosureCodeFromLableName "STRING_SET"))
        ((eq? sym 'make-string ) (createClosureCodeFromLableName "MAKE_STRING"))
        ((eq? sym 'vector-length ) (createClosureCodeFromLableName "VECTOR_LENGTH"))
        ((eq? sym 'vector-ref ) (createClosureCodeFromLableName "VECTOR_REF"))
        ((eq? sym 'vector-set! ) (createClosureCodeFromLableName "VECTOR_SET"))
        ((eq? sym 'make-vector ) (createClosureCodeFromLableName "MAKE_VECTOR"))
        ((eq? sym 'cons ) (createClosureCodeFromLableName "CONS"))
        ((eq? sym 'car ) (createClosureCodeFromLableName "CAR"))
        ((eq? sym 'cdr ) (createClosureCodeFromLableName "CDR"))
        ((eq? sym 'set-car! ) (createClosureCodeFromLableName "SET_CAR"))
        ((eq? sym 'set-cdr! ) (createClosureCodeFromLableName "SET_CDR"))
        ;((eq? sym 'vector ) (createClosureCodeFromLableName "VECTOR"))
        ;((eq? sym 'list ) (createClosureCodeFromLableName "LIST"))
        ((eq? sym 'apply ) (createClosureCodeFromLableName "APPLY_TC"))
        ;((eq? sym 'length ) (createClosureCodeFromLableName "LENGTH"))
        ((eq? sym 'symbol->string ) (createClosureCodeFromLableName "SYMBOL_TO_STRING"))
        ((eq? sym 'string->symbol ) (createClosureCodeFromLableName "STRING_TO_SYMBOL"))
        ((eq? sym 'eq? ) (createClosureCodeFromLableName "EQ"))
        (else "MOV(R0, 0);")
      )
    )
))

(define createClosureCodeFromLableName
  (lambda (labelName)
    (string-append
      "PUSH(LABEL(" labelName "));" nl
      "PUSH(IMM(0));" nl 
      "CALL(MAKE_SOB_CLOSURE);" nl
      "DROP(IMM(2));" nl
  )))


(define codegen-define
  (lambda (sexp envL paramL)
    (let* (
        (freeVar          (cadr sexp))
        (freeVarSym         (cadr freeVar))
        (freeVarEntry           (getEntryFromSymbolTable freeVarSym))
        (freeVarBucketValueAddr   (+ 4 (car freeVarEntry)))
        (newValue           (caddr sexp))
        (newValueCompiled       (code-gen newValue envL paramL))
        
        )
      (string-append
        "/* In Define .. */" nl 
        newValueCompiled nl
        "MOV(ADDR(" (number->string freeVarBucketValueAddr) "), R0);" nl
        "MOV(R0, SOB_VOID);" nl
      )
  )))
;--------------------------End ToChange --------------------------
  ;---------------------------End SymbolTable



;################################################################
;--------------    Code Generator: -------------
;################################################################
(define makeLabel
  (lambda (labelName)
    (let ((num 0))
      (lambda ()
        (set! num (+ num 1))
        (string-append labelName
          (number->string num)
)))))

(define makeLabelOrExit (makeLabel "LabelOrExit"))
(define makeLabelClosureStart (makeLabel "LabelClosureStart"))
(define makeLabelClosureBody (makeLabel "LabelClosureBody"))
(define makeLabelClosureEnd (makeLabel "LabelClosureEnd"))
(define makeLLabalParamsLoop (makeLabel "LabalParamsLoop"))
(define makeLabelParamsLoopExit (makeLabel "LabelParamsLoopExit"))
(define makeLabelEnvLoop (makeLabel "LabelEnvLoop"))
(define makeLabelEnvLoopExit (makeLabel "LabelEnvLoopExit"))
(define makeLabelOptCopyLoop (makeLabel "LabelOptCopyLoop"))
(define makeLabelOptCopyLoopExit (makeLabel "LabelOptCopyLoopExit"))
(define makeLabelOptCopyLoop2 (makeLabel "LabelOptCopyLoop2"))
(define makeLabelOptCopyLoop2Exit (makeLabel "LabelOptCopyLoop2Exit"))
(define makeLabelVarCopyLoop (makeLabel "LabelVarCopyLoop"))
(define makeLabeVarCopyLoopExit (makeLabel "LabeVarCopyLoopExit"))
(define makeLabelVarCopyLoop2 (makeLabel "LabelVarCopyLoop2"))
(define makeLabelVarCopyLoop2Exit (makeLabel "LabelVarCopyLoop2Exit"))
(define makeLabelVarCopyLoop3 (makeLabel "LabelVarCopyLoop3"))
(define makeLabelVarCopyLoop3Exit (makeLabel "LabelVarCopyLoop3Exit"))
(define makeLabelTCCopyLoop (makeLabel "LabelTCCopyLoop"))
(define makeLabelTCCopyExit (makeLabel "LabelTCCopyExit"))
(define makeLabelIf3Else (makeLabel "LabelIf3Else"))
(define makeLabelIf3Exit (makeLabel "LabelIf3Exit"))

(define code-gen
  (lambda (exp env pars)
    (let ((tag (car exp)))
      (cond
      ((eq? tag 'applic) (code-gen-applic exp env pars))
      ((eq? tag 'const) (code-gen-const exp env pars))
      ((eq? tag 'fvar) (code-gen-fvar exp env pars))
      
      (else (error 'code-gen (format "Illegal exp: ~s" exp))

      )    
    ))))

(define code-gen-if3
  (lambda (exp env pars)
    (let* (
      (doIfTrue   (caddr exp))   
      (doIfFalse  (cadddr exp)) 
      (testExpression (cadr exp))  
 
      (testCode (code-gen testExpression env pars))
      (doIfTrueCode(code-gen doIfTrue env pars))
      (doIfFalseCode (code-gen doIfFalse env pars))
      (labelElse (makeLabelIf3Else))
      (labelExit (makeLabelIf3Exit))
      )
        (string-append
          "/* - if3 exp -*/" printNewLine
          testCode printNewLine ; test result -> R0
          "CMP(R0, SOB_FALSE);" printNewLine
          "JUMP_EQ(" labelElse ");" printNewLine
          doIfTrueCode printNewLine
          "JUMP(" labelExit ");" printNewLine
          labelExit ":" printNewLine
          doIfFalseCode printNewLine
          labelExit ":" printNewLine)
)))

(define code-gen-or
  (lambda (exp env pars)
    (let* (
          (originalList (cadr e))
          (compiledList (map (mapCodeGen env pars) originalList))
          (exitLabel (makeLabelOrExit)))
        (letrec ((loop
              (lambda (expression)
                (string-append
                  (car expression) nl
                  "CMP(R0, SOB_FALSE);" nl
                  "JUMP_NE(" labelExit ");" nl
                  (if 
                    (null? (cdr expression))
                    (string-append labelExit ":" nl)
                    (loop (cdr expression))
                  )
                ))))
          (loop compiledList)
        ))))

(define code-gen-seq
  (lambda (exp env pars)
    (let* (
          (originalList (cadr exp))
          (compiledList (map (map-code-gen env pars) oldList))
        )
        (letrec ((loop 
              (lambda (expression)
                (string-append
                  (car expression) printNewLine
                  (if 
                    (null? (cdr expression))
                    ""
                    (loop (cdr expression))
                  )))))
          (loop compList)
        ))))

(define callMalloc
  (lambda(size)
    (string-append
        "PUSH(IMM(" (number->string size) "));" printNewLine   
        "CALL(MALLOC);" printNewLine
        "DROP(IMM(1));" printNewLine
)))

;-------------- Applic: ---------------

(define pushApplicParameters 
  (lambda (reversedParametersList len)
    (if 
      (= len 0)
      ""
      (string-append
        (car reversedParametersList) printNewLine
        "PUSH(R0);" printNewLine
        (pushApplicParameters (cdr reversedParametersList) (- len 1))
      ))))

(define code-gen-applic 
  (lambda (exp env pars)
      (let* (   
            (func (cadr exp))
            (parametersList (caddr exp))
            (compiledParams (map (mapCodeGen env pars) parametersList))
            (compiledFunction (code-gen func env pars))
          )
          (string-append
            "/* pushing parameters in reverse order. */" printNewLine
            (pushApplicParameters (reverse compiledParams) (length parametersList))
            "/* pushing args count. */" printNewLine
            "PUSH(IMM(" (number->string (length parametersList)) "));" printNewLine
            (code-gen func env pars)
            "CMP(INDD(R0,0), IMM(T_CLOSURE));" printNewLine
            "JUMP_NE(ERROR);" printNewLine
            "PUSH(INDD(R0,IMM(1)));" printNewLine   ; push the closure environment
            "CALLA(INDD(R0,IMM(2)));" printNewLine      
            "/* Args Count -> R5. */" printNewLine
            "MOV(R5,STARG(IMM(0)));" printNewLine     
            "/* Add R5 (args count) to env */" printNewLine
            "ADD(R5, IMM(2));" printNewLine   
            "DROP(R5);"  printNewLine       
        ))))

(define code-gen-tc-applic
  (lambda (exp env pars)
    "--applic--"   
    ))

;----------ToChange------------
(define code-gen-const 
  (lambda (sexp envL paramL)
    (let* (
        (const      (cadr sexp))
        (constsAddr (if (symbol? const) (begin (car (getEntryFromSymbolTable const))) (getEntryAddrFromConstTable const)))
        )
      (string-append
        "/* In consts .. */" nl 
        "MOV(R0,IMM(" (number->string constsAddr)  "));"
      )
  )))
;----------End Tochange ----------------------
(define code-gen-pvar
  (lambda (exp env pars)
    "--fvar--"   
      )    
    )       
 
(define code-gen-bvar
  (lambda (exp env pars)
    "--bvar--"   
      )    
    ) 

(define code-gen-fvar
  (lambda (exp env pars)
    "--fvar--"   
      )    
    )        
  


(define getSexprsFromFile
   (lambda (inFile)
     (let ((inputStream 
             (open-input-file inFile)))
       (letrec ((loop
             (lambda ()
               (let ((exp (read inputStream)))
                 (if (eof-object? exp)
                     (begin (close-input-port inputStream)
                            '())
                     (cons exp (loop)))))))
         (loop)))))


;--------------------------- Symbol Table: -----------------------------------







  
  ; ------------------ Helper Functions: --------------------

(define void?
  (lambda(var)
    (eq? var (void))
  )
)

(define getArgumentList
  (lambda (e)
    (cond
      ((or (char? e) (number? e) (string? e) (void? e) (null? e) (boolean? e)) `(,e))
      ((pair? e)
        `(,e ,@(getArgumentList (car e)) ,@(getArgumentList (cdr e))))
      ((vector? e)
        `(,e ,@(apply append
              (map getArgumentList
                (vector->list e)))))
      ((symbol? e)
        `(,e ,@(getArgumentList (symbol->string e))))
 )))

(define printNewLine (list->string (list #\newline)))

(define prologue (string-append "-Prologue-"))
(define epilogue (string-append "-Epilogue-"))

(define mapCodeGen
  (lambda (env params)
    (lambda (exp)
      (code-gen exp env params)
)))

(define removeDuplicates
  (lambda (oldList listWithoutDuplicates)
    (if (null? oldList) listWithoutDuplicates
      (if (member (car oldList) listWithoutDuplicates)
        (removeDuplicates (cdr oldList) listWithoutDuplicates)
          (removeDuplicates (cdr oldList) (cons (car oldList) listWithoutDuplicates)))
)))

(define getValuesByKey
  (lambda (key expression)
    (map cadr 
      (filter (lambda (exp)
        (and (pair? exp)
          (eq? (car exp) key)))
            (apply append (map getArgumentList expression)))
)))


(define parseConstsAndFvars
  (lambda (exp)
      (cond 
        ((null? exp) #f)
        ((not (list? exp)) #f)
        ((equal? 'const (car exp))
          (addToConstTable (cadr exp)))
        (else 
          (map parseConstsAndFvars exp)))))

(define parseExpression
  (lambda (expression)
        (annotate-tc 
          (pe->lex-pe 
            (box-set 
              (remove-applic-lambda-nil 
                (eliminate-nested-defines 
                  (parse expression)))))))
)

(define compileAllCode
  (lambda (originalExpression)
    (let* (
        (parsedOriginalCode (parseExpression originalExpression))
        )
        (letrec ((loop
          (lambda (originalExpression)
            (if
              (null? originalExpression)
              printNewLine
              (string-append
                (code-gen (car originalExpression) 0 0) printNewLine
                "CALL(PRINT_R0);" printNewLine
                (loop (cdr originalExpression))
              )))))
            (loop parsedOriginalCode)
        ))))

    (define generateConstantsTable
  (lambda(x)
    x))

(define g_symbolsTableStartAddr
  (lambda(x)
    x))

(define createSymbolTable
  (lambda(x)
    x))

  (define createConstsTable
  (lambda(x)
    x))

(define freeMem
  (lambda(x)
    x))

(define writeToOutputFile
  (lambda (outFilename string)
    (let ((outputPort (open-output-file outFilename)))
      (begin 
        (display string outputPort)
        (close-output-port outputPort))
)))

  (define start-string
  (lambda()
    "start-string\n"))
(define end-string
  (lambda()
    "end-string\n"))

  (define constsTableCompiled
  (lambda()
    "consts\n"))
(define symbolTableCompiled
  (lambda()
    "symbols\n"))


(define compileCode
  (lambda (sexps)
    (let* (
        (parsedSexps      (map parse sexps))
        (lexParesedSexprs   (map pe->lex-pe parsedSexps))
        (at-lexParesedSexprs  (map annotate-tc lexParesedSexprs))
        )
        (letrec ( (recFunc
                (lambda (sexps)
                  (if
                    (null? sexps)
                    printNewLine
                    (string-append
                      (code-gen (car sexps) 0 0) printNewLine
                      "CALL(PRINT_R0);" printNewLine
                      (recFunc (cdr sexps))
                    )
                    )))


              )
            (recFunc at-lexParesedSexprs)
        )
    )
  ))



;(define compile-scheme-file
;  (lambda (inFile outFile)
;    (if (file-exists? outFile)
;        (delete-file outFile)
;        #t)
;    (initConstTable)
    
;    (initFvarTable)
;    (let* (
;        (inputCode (getSexprsFromFile inFile))
;        (parsedInCode (map parseExpression inputCode))
;        (ciscedCode (compileAllCode parsedInCode))
;        (outPort (open-output-file outFile))
;        )
;          (display constTable)
;          (newline)
;      (parseConstsAndFvars parsedInCode)
;          (display constTable)

;    (display 
;            (string-append
;               prologue printNewLine
;               (loadConstTable) printNewLine
;               (loadBuiltinProcedures) printNewLine
;               (getAllFreeVars
;                  parsedInCode) printNewLine
;               ciscedCode printNewLine
;               epilogue
;               )
;              outPort)
;    (close-output-port outPort))))

(define getAllSchemeExpressions
  (lambda (inputPort accumulator)
   (let ((nextExp (read inputPort)))
     (if (eof-object? nextExp)
       (begin 
        (close-input-port inputPort)
         accumulator)
       (getAllSchemeExpressions inputPort
        (append accumulator (list nextExp)))  
     ))))

(define readAllSchemeExpressions
  (lambda (inFile)
      (getAllSchemeExpressions (open-input-file inFile) '())     
       ))

(define readSexprsFromString
  (lambda (inString)
      (getAllSchemeExpressions (open-input-string inString) '())     
 ))

(define writeToFile
  (lambda (outputFileName stringToWrite)
    (let ((outputPort (open-output-file outputFileName)))
      (begin 
        (display stringToWrite outputPort)
        (close-output-port outputPort)
        )
)))

(define compile-scheme-file
  (lambda (inFile outFile)
        (if (file-exists? outFile)
        (delete-file outFile)
        #t)
    (let* (
          (allSexprs 
            (append 
             (readSexprsFromString meirsSchemeString)
             (readAllSchemeExpressions inFile)
             ))

          (parsedExpression (parseExpression allSexprs))
          (shouldBeInConsts (getValuesByKey 'const parsedExpression))
          (freeVariables (getValuesByKey 'fvar parsedExpression))
          (symbolsInConsts (filter symbol? shouldBeInConsts))
          (shouldBeinSymbols 
            (append builtInProcedures freeVariables symbolsInConsts 
            (filter symbol? 
              (apply append (map getArgumentList shouldBeInConsts)))))

          (shouldBeInSymbolsList
            (removeDuplicates shouldBeinSymbols '()))

          (shouldBeInConstsList (removeDuplicates shouldBeInConsts '()))
          (allSymbolStrings (map symbol->string shouldBeInSymbolsList))
        )
        
        (begin
          (generateConstantsTable allSymbolStrings)
          (g_symbolsTableStartAddr (freeMem 20))
          (createSymbolTable shouldBeInSymbolsList)
          (freeMem 20)
          (createConstsTable shouldBeInConstsList)
          (let* 
            (
              (endS (end-string))
            )
            (begin
              (writeToOutputFile outFile 
              (string-append
              (start-string)
              (constsTableCompiled)
              (symbolTableCompiled)
              (compileCode allSexprs)
              (end-string)
            ))
            )))))
            )


(compile-scheme-file "input.scm" "output6.c")


