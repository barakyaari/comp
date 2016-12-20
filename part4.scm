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


(define example
  '(applic
	(lambda-simple
		(a)
		(applic
		(var list)
		((lambda-simple () (var a))
		(lambda-simple
		()
		(set (var a) (applic (var +) ((var a) (const 1)))))
		(lambda-simple (b) (set (var a) (var b)))))
  	)
  ((const 0))))

(define deepContains
  (lambda (lista exp)
    (cond ((null? lista) #f)
          ((equal? exp lista) #t)
    	  ((equal? exp lista) #t)
    )))


(define hasBoundOccurence
  (lambda (exp body)
    (display body)
    	(let ((varExpression `(var ,exp)))
     (display varExpression)
     (deepContains body varExpression) 	
     )
    ))

(define hasSet
  (lambda (exp procedure)
    #t))

(define hasGet
  (lambda (exp procedure)
    #t))

(define shouldReplaceVaribale
  (lambda (param procedure)
    (let ((body (car (cddadr procedure))))
    (and
      (hasBoundOccurence param body)
      (hasSet param body)
      (hasGet param body)
      ))))

(getAllListsInExpression example)

