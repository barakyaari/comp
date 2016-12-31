(define eliminate-nested-defines
	(lambda (x) x))

(define eliminate-nested-defines-and-parse
	(lambda (exp)
		(letrec (
				(helper
					(lambda(lst sets) 
						(cond
							((atom? lst) (cons sets '()))
							((and
								(list? (car lst))
								(eq? 'define (caar lst)))
								(helper 
									(cdr lst)
									(append 
										sets 
										(list 
											(list (cadar lst) (caddar lst)))))
								)
							(else (cons sets (cdr lst)))
						))))
		(if (< 1 (length exp))
			(parse `(letrec ,(car (helper exp '())) ,(cdr (helper exp '()))))
			(parse exp)))))


(eliminate-nested-defines-and-parse '((define a 2)(define b 3)))