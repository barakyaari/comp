(define caar (lambda (x) (car (car x))))
(define cadr (lambda (x) (car (cdr x))))
(define cddr (lambda (x) (cdr (cdr x))))
(define caadr (lambda (x) (car (car (cdr x))))) 
(define caddr (lambda (x) (car (cdr (cdr x))))) 
(define cdddr (lambda (x) (cdr (cdr (cdr x))))) 
(define caaar (lambda (x) (car (car (car x))))) 
(define caaadr (lambda (x) (car (car (car (cdr x))))))
(define caaddr (lambda (x) (car (car (cdr (cdr x))))))
(define cadddr (lambda (x) (car (cdr (cdr (cdr x))))))
(define cddddr (lambda (x) (cdr (cdr (cdr (cdr x))))))
(define caaaar (lambda (x) (car (car (car (car x))))))

(define appendBin
	(lambda (lst1 lst2)
		(if (not (null? lst1))
			(cons 
				(car lst1)
			  	(appendBin (cdr lst1) lst2)))))
			lst2

(define appendVarHelper
	(lambda (lst1 lst2)
	      (if (null? lst2) lst1
		  (appendBin lst1 (appendVarHelper  (car lst2) (cdr lst2))))))

(define append
    (lambda lst
      (if (null? lst)
      	'()
		(appendVarHelper (car lst) (cdr lst)))))
