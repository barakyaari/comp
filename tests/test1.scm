;(define equal
;  (lambda(a b)
;    (if (= a b)
;        #t
;        #f))
;  )


;(cons (if (equal 1 2)
;    1
;    2)
;      'bob)

;(define a 5)
;a
;;(define b 5)

;(set! e 11)

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

(define test
  (lambda ()
    (set! bob 13)
    (+ 1 bob))
  )
(test)

(cons 'a 'bob)
(set! e 5)
;e