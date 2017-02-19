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
				(combineSets (append outSet writeRegs))
				(removeReadRegsFromSet (filter 
											(lambda (reg) 
												(not (contains? readRegs reg))) combineSets))
				(newSet (removeDup removeReadRegsFromSet))
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

(define isRedundant
	(lambda (inst)
		(let* 
			(
				(counter 0)
			)
				(for-each
					(lambda (item)
						(if (contains? (getSet inst) item)
							(set! counter (+ counter 1))
							#f))
					(getWriteRegs inst))
				(eq? counter (length (getWriteRegs inst)))
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
				(instListLength (length processedInstList))
				(instVec (list->vector processedInstList))
			)
			(set! instVec (updateLiveness instVec (- instListLength 1)))
			(letrec
				(
					(findAndRemoveRedundantInstructions 
						(lambda (index hasChanged)
							(if (< index (length instVec))
								(if (isRedundant inst)
									(begin
										(removeInst index)
										(findAndRemoveRedundantInstructions (+ index 1) index))
									(findAndRemoveRedundantInstructions (+ index 1) hasChanged))
								hasChanged)
						))
					(iterateUntilNoRedundantInstructions
						(lambda ()
							(let ((highestChangedIndex (findAndRemoveRedundantInstructions 0 #f)))
								(if highestChangedIndex
									(begin
										(set! instVec (updateLiveness instVec highestChangedIndex))
										(iterateUntilNoRedundantInstructions))
									instVec
									))
							))
				)
				(iterateUntilNoRedundantInstructions)
				)
		)))