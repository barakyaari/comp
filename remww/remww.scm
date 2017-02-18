;***************Helper Functions**************
(define getInst car)
(define getReadRegs cadr)
(define getWriteRegs caddr)
(define getSet caddr)


(define removeEmptyInstsAndAddSets
	(lambda (instList)
		(let*
			(			
				(filteredEmptyWrites (filter (lambda (inst) (not (null? (getWriteRegs inst)))) instList))
			)
			(map (lambda (inst) (list (getInst inst) (getReadRegs inst) (getWriteRegs inst) '())) filteredEmptyWrites)
			)
		))

;TODO: Implement it
(define removeDup
	(lambda (instSet)
		instSet
		))

(define updateSet
	(lambda (inst readRegs writeRegs outSet)
		(
			(let*
				(
					(removeReadRegsFromSet (filter 
												(lambda (reg) 
													()))
					(combineSets ())
					(newSet (removeDup (appen)))
				)
					(list (getInst inst) (getReadRegs inst) (getWriteRegs inst) newSet)
				)
			)))

;Input: A vector of instructions and an index of the place to update the liveness from (works backword)
;Output: An updated list of instructions with liveness sets
(define updateLiveness
	(lambda (instVec index)
		(let*
			(				
				(readRegs (getReadRegs (vector-ref instVec index)))
				(writeRegs (getWriteRegs (vector-ref instVec index)))
				(outSet (getSet (vector-ref instVec index)))
			)
				(if (= index 0)
					(vector->list instVec)
					(begin 
						(set! instVec (- index 1) (updateSet readRegs writeRegs outSet))
						(updateLiveness instVec (- index 1)))
				)
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
			()			
		)))