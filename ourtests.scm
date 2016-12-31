(load "part5.scm")
(load "part6.scm")
(load "part7.scm")


(define input 
        '
(def (var fact)
     (lambda-simple
       (n)
       (if3 (applic (var zero?) ((var n)))
            (const 1)
            (applic
              (var *)
              ((var n)
                (applic
                  (var fact)
                  ((applic (var -) ((var n) (const 1)))))))))))

(display "box-set:\n")
 (box-set input)
 (display "pe->lex-pe:\n")
 (pe->lex-pe  (box-set input))
 (display "annotate-tc:\n")
 (annotate-tc (pe->lex-pe  (box-set input)))