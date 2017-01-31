;---------------------Helper Functions----------------------;
(define printNewLine (list->string (list #\newline)))


(define file->string
	(lambda (in-file)
		(let ((in-port (open-input-file in-file)))
			(letrec ((run
				(lambda ()
					(let ((ch (read-char in-port)))
						(if (eof-object? ch)
							(begin
								(close-input-port in-port)
								'())
							(cons ch (run)))))))
			(list->string
				(run))))))

;TODO: Fill it
;A list of sexprs to be added before the others that has the basic procs
(define builtInProcsSexprs
	#f) 

;TODO: add in file read manipulation
;Return a list of sexprs
(define getInputSexps 
	#f)

;Returns the sexprs after parsing and optimizing it
(define getProcessedSexprs
	(lambda (sexpsList)
		(map
			(lambda (sexp)
				(annotate-tc 
					(pe->lex-pe 
						(box-set 
							(remove-applic-lambda-nil 
								(eliminate-nested-defines 
									(parse sexp)))))))
			sexpsList)))

;TODO: @Purpose: finds all values by a certain tag and returns a list of them
(define findItemsByTag
	#f)

;TODO: add in file read and manipulation
(define compile-scheme-file
	(lambda (inFile outFile)
		(let* (
			(prologue (makePrologue))
			(epilogue (makeEpilogue))
			(inputSexps (getInputSexps inFile))
			(inputSexpsAndProcsSexps (append builtInProcsSexprs inputSexps))
			(processedSexps (getProcessedSexprs inputSexpsAndProcsSexps))
			(constsList (findItemsByTag processedSexps 'const))
			(fvarsList (findItemsByTag processedSexps 'fvar))
			
			(compiledCiscString (string-append prologue epilogue)))
		(writeStringToFile outFile compiledCiscString))))

(define writeStringToFile
	(lambda (outputFileName strToWrite)
		(let ((port (open-output-file outputFileName)))
			(begin (display strToWrite port) (close-output-port port))
			)))

(define makePrologue
	(lambda ()
		(string-append 
"
#include <stdio.h>
#include <stdlib.h>
#include \"arch/cisc.h\"
int main() {
START_MACHINE;
JUMP(PROGRAM_START);
#include \"arch/char.lib\"
#include \"arch/io.lib\"
#include \"arch/scheme.lib\"
#include \"arch/math.lib\"
#include \"arch/string.lib\"
#include \"arch/system.lib\"
ERROR:
HALT;
PROGRAM_START:

"
			printNewLine)))

(define makeEpilogue
	(lambda ()
		(string-append 
"
STOP_MACHINE;
HALT;
}
"
			printNewLine)))
