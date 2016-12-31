(define contains
  (lambda (lst item)
    (if (member item lst)
      #t
      #f)))

(define isConst
 (lambda (exp)
    (or (null? exp)
        (not (list? exp))
      )))

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
        (list (cadr proc)))
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
        (list (cadr proc)))
        (else (error 'getParams "Wrong lambda structure given."))

    )))

(define getAllListsInExpression
  (lambda (expr)
    (if (not (list? expr))
        '()
        (if (null? expr)
            '()
            (if (const? expr)
                '()
      `( ,@(if (not (const? (car expr)))
            (list (car expr))
              '())
             ,@(getAllListsInExpression (car expr))
              ,@(getAllListsInExpression (cdr expr))
    )))
  )))

(define const?
  (lambda (x)
    (cond ((not (list? x)) #t)
          ((null? x) #t)
          ((equal? (car x) 'quote) #t)
          (else #f)
          )
   ))

(define isLambda
  (lambda (exp)
    (if (or (null? exp)
            (not (list? exp))
        )
        #f
    (or (equal? (car exp) 'lambda-simple)
        (equal? (car exp) 'lambda-opt)
        (equal? (car exp) 'lambda-var)
    ))))

(define hasBoundOccurence 
  (lambda (param expression)
        (cond
          ((isConst expression) #f)
          ((equal? `(var ,param) expression) #t)
          ((isLambda expression) 
             (if (member param (getParams expression))
                  #f
                (hasBoundOccurence param (getBody expression))))
          (else 
            (ormap (lambda (x) (hasBoundOccurence param x)) expression)
                            ))))

(define hasSet
  (lambda (param expression)
        (cond 
          ((isConst expression) #f)
          ((and 
            (equal? 'set (car expression))
            (equal? `(var ,param) (cadr expression))) #t)
          ((isLambda expression)
            (if (member param (getParams expression))
                  #f
                  (hasSet param (getBody expression))))
          (else 
            (ormap (lambda (x) (hasSet param x)) expression)))
                ))

(define hasGet
  (lambda (param expression)
        (cond 
          ((equal? `(var ,param) expression) #t)
          ((not (list? expression)) #f)
          ((null? expression) #f)
          ((equal? 'set (car expression))
              (hasGet param (cddr expression)))
          ((isLambda expression)
            (if (member param (getParams expression))
                #f
                (hasGet param (getBody expression))))
          (else 
            (ormap (lambda (x) (hasGet param x)) expression)))
                ))

(define shouldReplaceVarsInLambda
  (lambda (param exp)
    (and
      (hasBoundOccurence param exp)
      (hasGet param exp)
      (hasSet param exp))
      ))

(define handleLambda
  (lambda (exp)
    (shouldReplaceVarsInLambda (getParams exp) exp)))

(define iterateLambdas
  (lambda (exp)
   (cond 
    ((null? exp) exp)
    ((not (list? exp)) exp)
    ((isLambda exp) (handleLambda exp))
    (else (map iterateLambdas exp)))))



(define swapToBoxedParam
  (lambda (param exp)
      (cond 
        ((isConst exp) exp)

        ((isLambda exp)
          (if (member param (getParams exp))
                exp
                `(,(lambdaDeclaration exp)
                  ,(getParams exp)
                   ,(swapToBoxedParam param (getBody exp)))))

        ((and 
          (equal? 'set (car exp))
          (equal? `(var ,param) (cadr exp)))
           `(box-set (var ,param) ,@(swapToBoxedParam param (cddr exp))))

        ((equal? `(var ,param) exp)
          `(box-get ,exp))

        (else 
          (map (lambda (x) (swapToBoxedParam param x)) exp)))
              ))

(define getParametersToBoxInLambda
  (lambda (exp)
    (filter (lambda(x) (shouldReplaceVarsInLambda x (getBody exp))) (getParams exp))
  ))

(define handleBoxingInLambda
  (lambda (exp)
    (let ((toSwap (getParametersToBoxInLambda exp)))
      (if (null? toSwap)
      exp
    (handleBoxingInLambda
     `(,(lambdaDeclaration exp)
       ,@(getParamsList exp)
       ,(swapToBoxedParam (car toSwap) (getBody exp))))
  ))))

(define box-set
  (lambda (exp)
    (cond 
      ((isConst exp) exp)
      ((isLambda exp)
        (handleBoxingInLambda 
        `(,(lambdaDeclaration exp)
          ,@(getParamsList exp)
          ,(box-set (getBody exp)))))
      (else (map box-set exp))
  )))


(handleBoxingInLambda

 '(lambda-simple
  (f)
  (applic
    (lambda-simple
      (x)
      (applic
        (var f)
        ((lambda-var
           s
           (applic
             (var apply)
             ((applic (var x) ((var x))) (var s)))))))
    ((lambda-simple
       (x)
       (applic
         (var f)
         ((lambda-var
            s
            (applic
              (var apply)
              ((applic (var x) ((var x))) (var s))))))))))
)