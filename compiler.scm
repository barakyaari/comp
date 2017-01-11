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
(define addressPtrPtr 20)
(define constTable '())
(define initConstTable
  (lambda ()
    (set! constTable 
          (append constTable (list (list addressPtr *void-object* `(,T_VOID)))))
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
  
(define newline (list->string (list #\newline)))

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
    (display 
            (string-append
               prologue newline
               (loadConstTable) newline
               (loadBuiltinProcedures) newline
               (getAllFreeVars
                  parsedInCode) newline
               ciscedCode newline
               epilogue)
              outPort)
    (close-output-port outPort))))

(compile-scheme-file "input.scm" "output.c")