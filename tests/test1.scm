(define make-counter
	(lambda ()
		(let ((n 0))
		(lambda ()
		(set! n (+ n 1))
  		n))))

(define c1 (make-counter))
(define c2 (make-counter))

(c1)
(c1)
(c1)
(c2)
(c1)
(define a 3)
(((lambda (a)
	(lambda()
		(set! a 2)
	a)
) 1))


;(define test
;  (lambda ()
;    (set! bob 13)
;    (+ 1 bob))
;  )
;(test)

;(cons 'a 'bob)
;(set! e 5)
;;e