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


;TODO: add in file read and manipulation
(define compile-scheme-file
	(lambda (inFile outFile)
		(let* ((prologue (makePrologue))
			(epilogue (makeEpilogue))
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
			"Prologue"
			printNewLine)))

(define makeEpilogue
	(lambda ()
		(string-append 
			"Epilogue"
			printNewLine)))
