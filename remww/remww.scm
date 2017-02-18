(define remww 
	(lambda (instList)
		(let*(
				(inst car)
				(readRegs cadr)
				(writeRegs caddr)
			)
			(map (lambda (x) (writeRegs x)) instList)
		)))