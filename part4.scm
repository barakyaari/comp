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
  (lambda (list exp)
    ((cond (null? list) #f)
          (equal? exp list) #t)
    	  (equal? exp list) #t)
    )

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

(shouldReplaceVaribale 'a example)

