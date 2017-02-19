;***************Helper Functions**************
(define getInst car)
(define getReadRegs cadr)
(define getWriteRegs caddr)
(define getSet cadddr)


(define removeEmptyInstsAndAddSets
	(lambda (instList)
		(let*
			(			
				(filteredEmptyWrites (filter (lambda (inst) (not (null? (getWriteRegs inst)))) instList))
			)
			(map (lambda (inst) (list (getInst inst) (getReadRegs inst) (getWriteRegs inst) '())) filteredEmptyWrites)
			)
		))

(define contains?
	(lambda (lst item)
		(if (null? lst)
			#f
			(or
				(eq? item (car lst))
				(contains? (cdr lst) item)))
		))

(define removeDup
	(lambda (lst)
		(let* 
			(
				(newSet '())
			)
		(begin
			(for-each
				(lambda (item)
					(if (not (contains? newSet item))
						(set! newSet (append newSet (list item)))
						#f
						))
					lst))
			newSet)
		))

(define updateSet
	(lambda (inst readRegs writeRegs outSet)
		(let*
			(
				(removeReadRegsFromSet (filter 
											(lambda (reg) 
												(not (contains? writeRegs reg))) outSet))
				(combineSets (append removeReadRegsFromSet readRegs))
				(newSet (removeDup combineSets))
			)
				(list
					(getInst inst)
					(getReadRegs inst)
					(getWriteRegs inst)
					newSet)
			)
		))

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
				(if (< index 1)
						(vector->list instVec)
					(begin 
						(vector-set! instVec (- index 1)  (updateSet (vector-ref instVec (- index 1)) readRegs writeRegs outSet))
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
				(instListLength (length instList))
				(instVec (list->vector processedInstList))
			)
			(set! instVec (updateLiveness instVec (- instListLength 1))
			(letrec
				(
					(findAndRemoveRedundantInstructions 
						(lambda (index hasChanged)
							(if (< index (length instVec))
								(if ()
									
								)
								hasChanged
							)
						))
				)

				)
		)))