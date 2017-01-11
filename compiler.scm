(load "compiler3.scm")

(define T_VOID    937610)
(define T_NIL     722689)
(define T_BOOL    741553)
(define T_CHAR    181048)
(define T_INTEGER 945311)
(define T_STRING  799345)
(define T_SYMBOL  368031)
(define T_PAIR    885397)
(define T_VECTOR  335728)
(define T_CLOSURE 276405)
(define addressPtr 20)
(define constTable '())
(define initConstTable
  (lambda ()
    (set! constTable 
          (append constTable (list (list addressPtr (void) `(,T_VOID)))))
    (set! addressPtr (+ addressPtr 1))
    
    (set! constTable 
          (append constTable (list (list addressPtr '() `(,T_NIL)))))
    (set! addressPtr (+ addressPtr 1))
    
    (set! constTable 
          (append constTable (list (list addressPtr #f `(,T_BOOL 0)))))
    (set! addressPtr (+ addressPtr 2))
    
    (set! constTable 
          (append constTable (list (list addressPtr #t `(,T_BOOL 1)))))
    (set! addressPtr (+ addressPtr 2))
    
    ""))

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


(define buildInProcedures
  '(apply boolean? car cdr char->integer char? cons eq? integer?
          integer->char make-string make-vector null? number? pair? procedure?
          remainder set-car! set-cdr! string-length string-ref string-set! 
          string->symbol string? symbol? symbol->string vector-length 
          vector-ref vector-set! vector? zero? + - * / < > = ))

(define buildInProceduresLabels
  '((apply "APPLY") (boolean? "IS_BOOLEAN") (car "CAR") (cdr "CDR") (char->integer "CHAR_TO_INT") (char? "IS_CHAR") (cons "CONS") (eq? "IS_EQ") (integer? "IS_INT")
          (integer->char "INT_TO_CHAR")  (make-string "MAKE_STRING") (make-vector "MAKE_VECTOR") (null? "IS_NULL") (number? "IS_NUMBER") (pair? "IS_PAIR") (procedure? "IS_PROC")
          (remainder "REMAINDER") (set-car! "SET_CAR") (set-cdr! "SET_CDR") (string-length "STRING_LENGTH") (string-ref "STRING_REF") (string-set! "STRING_SET") 
          (string->symbol "STRING_TO_SYMBOL") (string? "IS_STRING") (symbol? "IS_SYMBOL") (symbol->string "SYMBOL_TO_STRING") (vector-length "VECTOR_LENGTH") 
          (vector-ref "VECTOR_REF") (vector-set! "VECTOR_SET") (vector? "IS_VECTOR") (zero? "IS_ZERO") (+ "OP_PLUS") (- "OP_MINUS") (* "OP_MUL") (/ "OP_DIV") (< "OP_SMALLER")
          (> "OP_BIGGER") (= "OP_EQUAL")))



;################################################################
;--------------    Code Generator: -------------
;################################################################


(define code-gen
  (lambda (exp env pars)
    (let ((tag (car exp)))
      (cond
      ((eq? tag 'applic) (code-gen-applic exp env pars))
      ((eq? tag 'const) (code-gen-const (cadr exp)))
      ((eq? tag 'fvar) (code-gen-fvar exp env pars))
      
      (else (error 'code-gen (format "Illegal exp: ~s" exp))

            
      )    
    ))))

(define code-gen-applic
  (lambda (exp env pars)
    "--applic--"   
    ))

(define code-gen-const
  (lambda (constant)
    "--const--"   
    ))

(define code-gen-fvar
  (lambda (exp env pars)
    "--fvar--"   
      )    
    )        
  
(define parseExpression
  (lambda (expression)
        (annotate-tc 
          (pe->lex-pe 
            (box-set 
              (remove-applic-lambda-nil 
                (eliminate-nested-defines 
                  (parse expression)))))))
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

  
  ; ------------------ Helper Functions: --------------------
  
(define printNewLine (list->string (list #\newline)))

(define prologue (string-append "-Prologue-"))
(define epilogue (string-append "-Epilogue-"))

(define mapCodeGen
  (lambda (parsedCode)    
    (if (null? parsedCode) ""
      (let 
        ((curParsedExpression (car parsedCode)))
        (string-append (code-gen curParsedExpression 0 0)
          (mapCodeGen (cdr parsedCode)) )))))


; 

(define parseConstsAndFvars
  (lambda (exp)
      (cond 
        ((null? exp) #f)
        ((not (list? exp)) #f)
        ((equal? 'const (car exp))
          (addToConstTable (cadr exp)))
        (else 
          (map parseConstsAndFvars exp)))))

(define compile-scheme-file
  (lambda (inFile outFile)
    (if (file-exists? outFile)
        (delete-file outFile)
        #t)
    (initConstTable)
    
    (initFvarTable)
    (let* (
        (inputCode (getSexprsFromFile inFile))
        (parsedInCode (map parseExpression inputCode))
        (ciscedCode (mapCodeGen parsedInCode))
        (outPort (open-output-file outFile))
        )
          (display constTable)
          (newline)
      (parseConstsAndFvars parsedInCode)
          (display constTable)

    (display 
            (string-append
               prologue printNewLine
               (loadConstTable) printNewLine
               (loadBuiltinProcedures) printNewLine
               (getAllFreeVars
                  parsedInCode) printNewLine
               ciscedCode printNewLine
               epilogue
               )
              outPort)
    (close-output-port outPort))))

(compile-scheme-file "input.scm" "output.c")