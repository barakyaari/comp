(define isConst
 (lambda (exp)
    (or (null? exp)
        (not (list? exp))
      )))

(define contains
  (lambda (lst item)
    (if (member item lst)
      #t
      #f)))

(define isLambda
    (lambda (exp)
      (cond 
        ((null? exp) #f)
        ((not (list? exp)) #f)
        (else
    (or 
      (equal? (car exp) 'lambda-simple)
      (equal? (car exp) 'lambda-opt)
      (equal? (car exp) 'lambda-var))))))

(define lambdaDeclaration
  (lambda (exp)
  (car exp)))

(define getBody
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        (caddr proc))
        ((equal? (car proc) 'lambda-opt)
        (cadddr proc))
        ((equal? (car proc) 'lambda-var)
        (caddr proc))
        (else (error 'getBody "Wrong lambda structure given."))
    )))

(define getParamsList
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        `( ,(cadr proc)))
        ((equal? (car proc) 'lambda-opt)
        `(,(cadr proc) ,(caddr proc)))
        ((equal? (car proc) 'lambda-var)
        (cadr proc))
        (else (error 'getParams "Wrong lambda structure given."))

    )))

(define getParams
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        (cadr proc))
        ((equal? (car proc) 'lambda-opt)
        (append (cadr proc) (list (caddr proc))))
        ((equal? (car proc) 'lambda-var)
        (cadr proc))
        (else (error 'getParams "Wrong lambda structure given."))

    )))

(define processLexicalAddresses
  (lambda (exp)
    (annotateLexicalAddress exp '() '('()))))

(define annotateLexicalAddress
  (lambda (exp params env)
    (cond ((not (list? exp)) exp)
        ((null? exp) '())
        ((equal? 'var (car exp)) (getLexicalAddress (cadr exp) params env))
        ((isLambda exp)
          (let ((newParams (getParams exp))
              (body (getBody exp)))
            `(lambda-simple ,newParams ,(annotateLexicalAddress body newParams (extendEnv newParams env)))))
        (else (map annotateLexicalAddress exp (make-list (length exp) params) (make-list (length exp) env))))))


(define extendEnv
  (lambda (param environment)
    (append (list param) environment)))
    
(define getLexicalAddress
  (lambda (variable parameters environment)
    (if (contains parameters variable) 
      `(pvar ,variable ,(findLocation parameters variable 0))
      (lookup variable (cdr environment) 0))))
        
(define lookup
  (lambda (variable environment depth)
    (cond ((null? environment) `(fvar ,variable))
        ((contains (car environment) variable) `(bvar ,variable ,depth ,(findLocation (car environment) variable 0)))
        (else (lookup variable (cdr environment) (+ 1 depth))))))

(define findLocation
  (lambda (lista toFind depth)
    (cond ((null? lista) -1)
        ((equal? (car lista) toFind) depth)
        (else (findLocation (cdr lista) toFind (+ 1 depth))))))

(define pe->lex-pe processLexicalAddresses)

(define example 
'(applic
(lambda-simple
(a)
(seq ((set (var a) (box (var a)))
(applic
(var list)
((lambda-simple () (box-get (var a)))
(lambda-simple
()
(box-set
(var a)
(applic (var +) ((box-get (var a)) (const 1)))))
(lambda-simple (b) (box-set (var a) (var b))))))))
((const 0)))
)

(pe->lex-pe example)
