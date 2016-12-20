(define example
  (car '((applic
		(lambda-simple
			(a)
		(applic
	(var list)
	((lambda-simple () (var a))
	(lambda-simple
	()
	(set (var a) (applic (var +) ((var a) (const 1)))))
	(lambda-simple (b) (set (var a) (var b))))))
  ((const 0))))))



(define hasBoundOccurence
  (lambda (exp procedure)
    (display exp)
    #t))

(define hasSet
  (lambda (exp procedure)
    #t))

(define hasGet
  (lambda (exp procedure)
    #t))

(define shouldReplaceVaribale
  (lambda (param procedure)
    (and
      (hasBoundOccurence param procedure)
      (hasSet param procedure)
      (hasGet param procedure)
      )))

(shouldReplaceVaribale 'a example)

