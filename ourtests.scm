(load "part5.scm")
;(load "part6.scm")
;(load "part7.scm")


(define input 
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

(display "box-set:\n")
 (box-set input)
 ;(display "pe->lex-pe:\n")
 ;(pe->lex-pe  (box-set input))
 ;(display "annotate-tc:\n")
 ;(annotate-tc (pe->lex-pe  (box-set input)))