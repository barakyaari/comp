
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


(define isConst
 (lambda (exp)
    (or (null? exp)
        (not (list? exp))
      )))

(define atp
  (lambda (exp)
      (annotateTail exp #t)))

(define annotateTail
        (lambda (expression isTail)
          (if (isConst expression)
                expression
                (let ((tag (car expression)))
                    (cond
                      ((equal? tag 'if3) 
                        (list 'if3 (annotateTail (cadr expression) #f) (annotateTail (caddr expression) isTail) (annotateTail (cadddr expression) isTail)))

                      ((isLambda expression) `(,(lambdaDeclaration expression) ,(getParamsList expression) ,(annotateTail (getBody expression) #t)))
                      ((equal? tag 'seq) `(seq 
                        ,@(map (lambda (sequence)
                          (annotateTail sequence #f)) (reverse (cdr (reverse (cadr expression))))) 
                          ,(annotateTail (car (reverse (cadr expression))) isTail)))
                      
                      ((equal? tag 'or) `(or ,@(map (lambda (orExp)
                          (annotateTail orExp #f)) (reverse (cdr (reverse (cdr expression))))) 
                            ,(annotateTail (car (reverse expression)) isTail)))

                      ((equal? tag 'applic) 
                        (if isTail
                          `(tc-applic ,(annotateTail (cadr expression) #f) ,(annotateTail (caddr expression) #f))
                          `(applic ,(annotateTail (cadr expression) #f) ,(annotateTail (caddr expression) #f))
                        )
                      )

                      (else (cons (annotateTail tag isTail) (annotateTail (cdr expression) isTail))) 
                    )
                    ))))

(atp '(applic
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