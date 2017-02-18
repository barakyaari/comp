(define removeEmptyInstsAndAddSets
	(lambda (instList)
		(let*
			(
				(getInst car)
				(getReadRegs cadr)
				(getWriteRegs caddr)				
				(filteredEmptyWrites (filter (lambda (inst) (not (null? (getWriteRegs inst)))) instList))
			)
			(map (lambda (inst) (list (getInst inst) (getReadRegs inst) (getWriteRegs inst) '())) filteredEmptyWrites)
			)
		))

(define remww 
	(lambda (instList)
		(let*
			(
				(getInst car)
				(getReadRegs cadr)
				(getWriteRegs caddr)
				(getSet caddr)	
				(processedInstList (removeEmptyInstsAndAddSets instList))
			)
			processedInstList
		)))