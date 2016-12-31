; f == predicate? | new-item == the function to apply on the   
(define (dynamic-map f new-item lst)
  (cond
    ((null? lst) lst)
    ((atom? lst) lst)    
    (else (if (and (list? lst) (f lst))
    		(dynamic-map f new-item (new-item lst))
    		(cons (dynamic-map f new-item (car lst))
            	    (dynamic-map f new-item (cdr lst)))))))

(define remove-applic-lambda-nil
	(lambda(exp)
		(let* (
				(no-pars-simple-lambda?
					(lambda (lst)
						(and 
							(list? lst)
							(eq? 'lambda-simple (car lst))
							(null? (cadr lst))
							)))
				(helper-pred
					(lambda (lst)
						(and 
								(list? lst)
								(eq? 'applic (car lst))
								(no-pars-simple-lambda? (cadr lst))
								(null? (caddr lst)))
							))
				(helper-new-item
					(lambda (lst)
						(caddr (cadr lst))
						))
				)
			(dynamic-map helper-pred helper-new-item exp)
		)))
