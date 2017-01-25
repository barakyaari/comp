(define equal
  (lambda(a b)
    (if (= a b)
        #t
        #f))
  )

(append (list (* (+ 1 2) (+ 3 4)) 'bob)

(if (equal 1 2)
    1
    2)