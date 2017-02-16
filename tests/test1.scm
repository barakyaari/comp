(define make-counter
	(lambda ()
		(let ((n 0))
			(lambda ()
			(set! n (+ n 1))))))

(define c1 (make-counter))
(define c2 (make-counter))

(c1)
(c1)
(c1)
(c2)
(c1)

