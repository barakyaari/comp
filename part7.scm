
(define annotateLexicalAddress
  (lambda (exp parameters environment)
    (cond 
        ((null? exp) '())
        ((not (list? exp)) exp)
        ((equal? 'var (car exp)) (getLexicalAddress (cadr exp) parameters environment))
        ((equal? 'lambda-simple (car exp))
          (let (
            (newParams (cadr exp))
            (body (caddr exp)))
            `(lambda-simple ,newParams ,(annotateLexicalAddress body newParams (extendEnv newParams environment)))))
        ((equal? 'lambda-opt (car exp))
          (let ((newParams (append (cadr exp) (list (caddr exp))))
              (body (cadddr exp)))
            `(lambda-opt ,(cadr exp) ,(caddr exp) ,(annotateLexicalAddress body newParams (extendEnv newParams environment)))))
        ((equal? 'lambda-variadic (car exp))
          (let ((newParams (list (cadr exp)))
              (body (caddr exp)))
            `(lambda-variadic ,(cadr exp) ,(annotateLexicalAddress body newParams (extendEnv newParams environment)))))
        (else (map annotateLexicalAddress exp (make-list (length exp) parameters) (make-list (length exp) environment))))))

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