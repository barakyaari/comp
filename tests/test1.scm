(define equal
  (lambda(a b)
    (if (= a b)
        #t
        #f))
  )


(cons (if (equal 1 2)
    1
    2)
      'bob)