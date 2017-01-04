; f == predicate? | new-item == the function to apply on the   
(define (dynamic-map-2 f new-item lst)
  (cond
    ((null? lst) lst)
    ((atom? lst) lst)    
    (else (if (and (list? lst) (f lst))
				(new-item (cons 
					(dynamic-map-2 f new-item (car lst))
					(dynamic-map-2 f new-item (cdr lst))))
	    		(cons (dynamic-map-2 f new-item (car lst))
	            	    (dynamic-map-2 f new-item (cdr lst)))))))

(define actual-eliminate-nested-defines
	(lambda (exp)
		(letrec(
				;Receives: a body of a lambda if it starts with seq	
				;Returns: list of sets			
				(find-sets
					(lambda(body sets) 
						(cond
							((atom? body) sets)
							((and 
								(list? (car body))
								(eq? 'def (caar body)))
								(find-sets
									 	(cdr body)
									 	(append
									 		sets
									 		(list 
									 			(list
									 			;(var <something>)
									 			(cadar body)
									 			;(the set exp)
									 			(caddar body))))))
							(else sets))))
				;Receives: a body of a lambda if it starts with seq	
				;Returns: body without defines					
				(find-body
					(lambda(body sets) 
						(cond
							((atom? body) body)
							((and 
								(list? (car body))
								(eq? 'def (caar body)))
								(find-body
									 	(cdr body)
									 	(append
									 		sets
									 		(list 
									 			(list
									 			;(var <something>)
									 			(cadar body)
									 			;(the set exp)
									 			(caddar body))))))
							(else body))))					
				(combine-into-letrec
					(lambda (sets body)
						(cond 
							((null? sets) body)
							(else
								(let*(
										(vars
											(map
												(lambda (x)
													(cadr (car x)))
												sets))
										(new-sets
											(map 
												(lambda (lst)
													`(set ,(car lst) ,(cadr lst)))
												sets))										
										(end-constf
											(map 
												(lambda (lst)
													`(const #f))
												sets))
										(actual-combine-into-letrec
											`(applic
												(lambda-simple
													,vars
													(seq ( ,@new-sets
														,@body )))
														,end-constf)))
									actual-combine-into-letrec)))))
				);letrec-end

			(combine-into-letrec 
				(find-sets exp '()) 
				(find-body exp '())
			))))

(define eliminate-nested-defines
	(lambda (exp)
		(dynamic-map-2
			;f
			(lambda (lst)
				(or
					(and 
						(or
							(eq? 'lambda-simple (car lst))
							(eq? 'lambda-var (car lst)))
						(eq? 'seq (caaddr lst)))
					(and
						(eq? 'lambda-opt (car lst))
						(eq? 'seq (caadddr lst)))))
			;new-item
			(lambda (lst)
				(if (eq? 'lambda-opt (car lst))
					`(,(car lst) ,(cadr lst) ,(caddr lst) ,(actual-eliminate-nested-defines (car (cdadddr lst))))
					`(,(car lst) ,(cadr lst) ,(actual-eliminate-nested-defines (car (cdaddr lst))))
					))
			exp)
		))