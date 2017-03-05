(define cddddr (lambda (x) (cdr (cdr (cdr (cdr x))))))
(define caaadr (lambda (x) (car (car (car (cdr x))))))
(define cadr (lambda (x) (car (cdr x))))
(define cddr (lambda (x) (cdr (cdr x))))
(define cdddr (lambda (x) (cdr (cdr (cdr x))))) 
(define caadr (lambda (x) (car (car (cdr x))))) 
(define caar (lambda (x) (car (car x))))
(define caaar (lambda (x) (car (car (car x))))) 
(define caaddr (lambda (x) (car (car (cdr (cdr x))))))
(define caddr (lambda (x) (car (cdr (cdr x))))) 
(define cadddr (lambda (x) (car (cdr (cdr (cdr x))))))
(define caaaar (lambda (x) (car (car (car (car x))))))

(define appendHelper
	(lambda (lst1 lst2)
		(letrec(
				(helper (lambda (lst1 lst2)
		    				(if (null? lst1) lst2
		    					(cons (car lst1) (helper (cdr lst1) lst2)))))
				)
			(if (null? lst2) lst1
	    					(helper lst1 (appendHelper  (car lst2) (cdr lst2))))
				)))

(define append
	    (lambda args
	    	(if (null? args) '()
	    		(appendHelper (car args) (cdr args)))))

(define map
	(lambda (f lst)
		(if (null? lst)
			lst
			(cons
				(f (car lst))
				(map f (cdr lst))))))

