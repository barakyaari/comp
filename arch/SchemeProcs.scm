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

;(define appendBin
;	(lambda (lst1 lst2)
;		(if (not (null? lst1))
;			(cons 
;				(car lst1)
;			  	(appendBin (cdr lst1) lst2)))))
;			lst2

;(define appendVarHelper
;	(lambda (lst1 lst2)
;	      (if (null? lst2) lst1
;		  (appendBin lst1 (appendVarHelper  (car lst2) (cdr lst2))))))

(define append
	    (lambda s
	    	(letrec (
	    		(append2Lists
	    			(lambda (s1 s2)
	    				(if (null? s1) s2
	    					(cons (car s1) (append2Lists (cdr s1) s2)))))
	    		(append-helper 
	    			(lambda (s1 s)
	    				(if (null? s) s1
	    					(append2Lists s1 (append-helper  (car s) (cdr s))))))
	    		)
	    	(if (null? s) '()
	    		(append-helper (car s) (cdr s))))))

(define map
	((lambda (y) 
		((lambda (map1) 
			((lambda (maplist) 
				(lambda (f . s) 
					(maplist f s))) 
			(y (lambda (maplist) 
				(lambda (f s) 
					(if (null? (car s)) '() 
						(cons (apply f (map1 car s)) 
							(maplist f (map1 cdr s))))))))) 
		(y (lambda (map1) 
			(lambda (f s) 
				(if (null? s) '() 
					(cons (f (car s)) 
						(map1 f (cdr s))))))))) 
	(lambda (f) 
		((lambda (x) 
			(f (lambda (y z)
				((x x) y z))))
		(lambda (x) 
			(f (lambda (y z)
				((x x) y z))))))))
