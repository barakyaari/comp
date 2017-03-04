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


;(define appendBinary
;	(lambda (lista1 lst2) // need to fix this ?
;		(if (not (null? lst1))
;			(cond 
;				(car lista1)
;			  			(appendBin (cdr lista1) lst2)))))
;			lst2

;(define appendVarHelper22 (TODO)
;	(lambda (lst1 lst2)
;	      (if (null? lst2) lst1 // Delete this function, old and not working.
	
;		  		(appendBin lst1 (appendVar22Helper  (car lst2) (cdr lst2))))))

(define append
	    (lambda args
	    	(letrec (
	    		(appendLoop2
	    			(lambda (args1 args2)
	    				(if (null? args1) args2
             
                  		; Might need to check for null here?

	    					(cons (car args1) (appendLoop2 (cdr args1) args2)))))
	    		(appendLoop1 
	    			(lambda (args1 args)
          					
	    				(if (null? args) args1
	    					(appendLoop2 args1 (appendLoop1  (car args) (cdr args))))))
	    		)
	    	(if (null? args) '()
	    		(appendLoop1 (car args) (cdr args))))))

(define map
	((lambda (expression) 
		((lambda (map1) 
          		; Might need to check for null here also?
			((lambda (maplist) 
				(lambda (first . second) 
					(maplist first second))) 
			(expression (lambda (maplist) 
				(lambda (first second) 
					(if (null? (car second)) '() 
						(cons (apply first (map1 car second)) 
							(maplist first (map1 cdr second))))))))) 
		(expression (lambda (map1) 
			(lambda (first second) 
				(if (null? second) '() 
					(cons (first (car second)) 
						(map1 first (cdr second))))))))) 
	(lambda (first) 
		((lambda (arg) 
     		; Might need to check for null here?
			(first  
     (lambda (expression exp2)
					((arg arg) expression exp2))))
		(lambda (arg) 
         		; Might need to check for null here2?

			(first (lambda (expression exp2)
				((arg arg) expression exp2))))))))

