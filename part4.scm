(define contains
  (lambda (lst item)
    (if (member item lst)
      #t
      #f)))

(define hasBoundOccurence 
  (lambda (param expression)
    (display expression)
    (display param)
    (newline)
        (cond 
          ((equal? param expression) #t)
          ((not (list? expression)) #f)
          ((null? expression) #f)

          ((equal? (car expression) 'lambda-simple)
             (if (member param (cadr expression))
                  #f
                (hasBoundOccurence param (caddr expression))))

          ((equal? (car expression) 'lambda-opt)
             (if ((member param (append (cadr expression)
                                        (list (caddr expression)))))
                  #f
                (hasBoundOccurence param (cadddr expression))))

          ((equal? (car expression) 'lambda-var)
             (if (member param (cadr expression))
                  #f
                (hasBoundOccurence param (caddr expression))))
          (else 
            (ormap (lambda (x) (hasBoundOccurence param x)) expression)))
                ))

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

(define getBodyOfLambda
  (lambda (exp)
    (car (cddadr exp))
  ))

(define getParametersOfLambda
  (lambda (exp)
    (cadr (cadr exp))
  ))

(define getParametersOfLambda
  (lambda (exp)
    (cadr (cadr exp))
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

(define example
  '(applic
	(lambda-simple
		(a b c)
		(applic
		(var list)
		((lambda-simple (e) (var a))
		(lambda-simple
		(a)
		(set (var a) (applic (var +) ((var a) (const 1)))))
		(lambda-simple (b) (set (var a) (var b)))))
  	)
  ((const 0))))

(define deepContains
  (lambda (lista exp)
    (cond ((null? lista) #f)
          ((equal? exp lista) #t)
          ((not (list? lista)) #f)
          (else (or 
            (if (list? (car lista))
              (deepContains (car lista) exp)
            #f)
            (ormap (lambda (x)
                    (deepContains x exp)) (cdr lista))))
    )))

(define hasSet
  (lambda (param expression)
        (cond 
          ((not (list? expression)) #f)
          ((null? expression) #f)
          ((and 
            (equal? 'set (car expression))
            (equal? `(var ,param) (cadr expression))) #t)

          ((equal? (car expression) 'lambda-simple)
             (if (member param (cadr expression))
                  #f
                (hasSet param (caddr expression))))

          ((equal? (car expression) 'lambda-opt)
             (if ((member param (append (cadr expression)
                                        (list (caddr expression)))))
                  #f
                (hasSet param (cadddr expression))))

          ((equal? (car expression) 'lambda-var)
             (if (member param (cadr expression))
                  #f
                (hasSet param (caddr expression))))
          (else 
            (ormap (lambda (x) (hasSet param x)) expression)))
                ))

(define hasGet
  (lambda (param expression)
        (cond 
          ((equal? param expression) #t)
          ((not (list? expression)) #f)
          ((null? expression) #f)
          ((and 
            (equal? 'set (car expression))
              (hasGet param (cddr expression))))

          ((equal? (car expression) 'lambda-simple)
             (if (member param (cadr expression))
                  #f
                (hasGet param (caddr expression))))

          ((equal? (car expression) 'lambda-opt)
             (if ((member param (append (cadr expression)
                                        (list (caddr expression)))))
                  #f
                (hasGet param (cadddr expression))))

          ((equal? (car expression) 'lambda-var)
             (if (member param (cadr expression))
                  #f
                (hasGet param (caddr expression))))
          (else 
            (ormap (lambda (x) (hasGet param x)) expression)))
                ))

(define shouldReplaceVaribale
  (lambda (param procedure)
    (let ((body '())
          (param '()))
    (let ((body (car (cddadr procedure))))
    (and
      (hasBoundOccurence param body)
      (hasSet param body)
      (hasGet param body)
      )))))

(define replaceVarsIfNeeded
  (lambda (params body)
    (display params)
    (newline)
    #f))

(define iterateLambdas
  (lambda (exp)
   (cond 
    ((null? exp) (void))
    ((not (list? exp)) (void))
    ((equal? (car exp) 'lambda-simple)
        (let ((params (cadr exp))
              (body (caddr exp)))
              (begin (replaceVarsIfNeeded params body)
              (iterateLambdas body))))

    ((equal? (car exp) 'lambda-opt)
        (let ((params (cadr exp))
              (body (cadddr exp)))
              (begin (replaceVarsIfNeeded exp)
              (iterateLambdas body))))

    ((equal? (car exp) 'lambda-var)
        (let ((params (cadr exp))
              (body (caddr exp)))
              (begin (replaceVarsIfNeeded exp)
              (iterateLambdas body))))
  (else (map iterateLambdas exp)))))

(iterateLambdas example)
