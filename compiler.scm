(load "compiler3.scm")

; -------------------- Scanner/Reader: ------------------

(define getAllExpressions
  (lambda (buffer accumulator)
   (let ((nextArg (read buffer)))
     (if (eof-object? nextArg)
       (begin (close-input-port buffer) accumulator)
       (getAllExpressions buffer 
       (append accumulator (list nextArg)))  
     ))))
(define readExpressions
  (lambda (inFile)
      (getAllExpressions (open-input-file inFile) '())     
       ))

(define readExpressionsFromString
  (lambda (inputString)
      (getAllExpressions (open-input-string inputString) '())     
 ))

(define writeStringToFile
  (lambda (outFile stringToWrite)
    (if (file-exists? outFile) 
      (delete-file outFile)
      1)
    (let ((buffer (open-output-file outFile)))
      (begin
        (display stringToWrite buffer)
        (close-output-port buffer))
)))

;-------------------- Code Generator: -----------------

(define makeLabel
  (lambda (labelName)
    (let ((num 0))
      (lambda ()
        (set! num(+ num 1))
        (string-append labelName
          (number->string num)
)))))

(define makeLabelClosureStart (makeLabel "LabelClosureStart"))
(define makeLabelClosureBody (makeLabel "LabelClosureBody"))
(define makeLabelClosureEnd (makeLabel "LabelClosureEnd"))
(define makeLabelOptCopyLoop (makeLabel "LabelOptCopy"))
(define makeLabelOptCopyLoopExit (makeLabel "LabelOptCopyExit"))
(define makeLabelOptCopyLoop2 (makeLabel "LabelOptCopy2"))
(define makeLabelOptCopyLoopExit2 (makeLabel "LabelOptCopy2Exit"))
(define makeLabelVarCopyLoop (makeLabel "LabelVarCopy"))
(define makeLabelVarCopyLoopExit (makeLabel "LabelVarCopyExit"))
(define makeLabelVarCopyLoop2 (makeLabel "LabelVar2Copy"))
(define makeLabelVarCopyLoopExit2 (makeLabel "LabelVar2CopyExit"))
(define makeLabelVarCopyLoop3 (makeLabel "LabelVar3Copy"))
(define makeLabelVarCopyLoopExit3 (makeLabel "LabelVar3CopyExit"))
(define makeLabelTailCopyLoop (makeLabel "LabelTailLoop"))
(define makeLabelTailCopyLoopExit (makeLabel "LabelTailExit"))
(define makeLabelparamsoop (makeLabel "Labelparamsoop"))
(define makeLabelparamsoopExit (makeLabel "LabelparamsoopExit"))
(define makeLabelEnvLoop (makeLabel "LabelEnvLoop"))
(define makeLabelEnvLoopExit (makeLabel "LabelEnvLoopExit"))
(define makeLabelOrExit (makeLabel "LabelOrExit"))
(define makeLabelIf3Else (makeLabel "LabelIf3Else"))
(define makeLabelIf3Exit (makeLabel "LabelIf3Exit"))

(define printNewLine (list->string (list #\newline)))

(define codeGenIf3
  (lambda (expression env params)
    (let* (
      (elseLabel (makeLabelIf3Else))
      (exitLabel (makeLabelIf3Exit))
      (condition (cadr expression))
      (doIfTrue (caddr expression))
      (doIfFalse (cadddr expression))  
      (conditionCode (codeGen condition env params))
      (doIfTrueCode (codeGen doIfTrue env params))
      (doIfFalseCode (codeGen doIfFalse env params))
      )
        (string-append
          "/* - If Expression - */" 
          printNewLine
          conditionCode printNewLine ;result condition -> R0
          "CMP(R0, SOB_FALSE);" printNewLine
          "JUMP_EQ(" elseLabel ");" printNewLine
          doIfTrueCode printNewLine
          "JUMP(" exitLabel ");" printNewLine
          elseLabel ":" printNewLine
          doIfFalseCode printNewLine
          exitLabel ":" printNewLine))))

(define codeGenOr
  (lambda (exp env params)
    (let* (
          (originalList (cadr exp))
          (compiledList (map (mapCodeGeneration env params) originalList))
          (LabelExit (makeLabelOrExit)))
        (letrec ((loop 
              (lambda (compiled)
                (string-append
                  (car compiled) printNewLine
                  "CMP(R0, SOB_FALSE);" printNewLine
                  "JUMP_NE(" LabelExit ");" printNewLine
                  (if 
                    (null? (cdr compiled))
                    (string-append LabelExit ":" printNewLine)
                    (loop (cdr compiled))
                  )
                ))))
          (loop compiledList)))))
          
(define codeGenSeq
  (lambda (exp env params)
    (let* (
        (originalList (cadr exp))
        (compiledList 
          (map (mapCodeGeneration env params) originalList))
        )
        (letrec ((loop 
              (lambda (compiled)
                (string-append 
                  (car compiled) printNewLine
                  (if 
                    (null? (cdr compiled))
                    ""
                    (loop (cdr compiled))
                  )
                ))))
          (loop compiledList)))))

(define codeGenMallocCall
  (lambda(size)
    (string-append
        "PUSH(IMM(" (number->string size) "));" printNewLine   
        "CALL(MALLOC);" printNewLine
        "DROP(IMM(1));" printNewLine
)))

(define codeGenlambda
  (lambda (exp env params)
    (let  (
          (startLabel (makeLabelClosureStart))
            (bodyLabel (makeLabelClosureBody))
            (endLabel (makeLabelClosureEnd))
            (paramsoopLabel (makeLabelparamsoop))
            (paramsoopLabel-exit (makeLabelparamsoopExit))
            (envLoopLabel (makeLabelEnvLoop))
            (envLoopExitLabel (makeLabelEnvLoopExit))
        )

      (string-append 
        printNewLine
        printNewLine
        "/* ---------------------------------------------- */" printNewLine
        "/*               Lambda Code: */" printNewLine
        "/* ---------------------------------------------- */" printNewLine
        
        "/* Malloc 3 for: closure, env and the body. */" printNewLine
        (codeGenMallocCall 3)
         printNewLine
        "MOV(R10,R0); /* R10 holds Addr of malloc */"  printNewLine
        "MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */" printNewLine
        "/* Malloc(env.size()+1): */"    printNewLine  
        (codeGenMallocCall (+ 1 env))
        "MOV(R2,R0); /* R2 -> new env addr */" printNewLine
        "MOV(R3, FPARG(0)); /* R3 = old env adress */" printNewLine

        
        "/*Clone the new environment:" printNewLine
        "for (i = 1, j = 0; j < " (number->string env) "; j++, i++) /* R4 = i, R5 = j" 
            "MOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;" printNewLine
        "MOV(R4, IMM(1));" printNewLine
        "MOV(R5, IMM(0));" printNewLine

        envLoopLabel ":" printNewLine
            "CMP(R5,IMM(" (number->string env) "));" printNewLine
            "JUMP_GE(" envLoopExitLabel ");" printNewLine
            "MOV(INDD(R2, R4), INDD(R3, R5));" printNewLine
            "INCR(R4);" printNewLine
            "INCR(R5);" printNewLine
            "JUMP(" envLoopLabel ");" printNewLine
        envLoopExitLabel ": " printNewLine
        "/* Clone the parameters (If needed) - Malloc(params.length): ... */" printNewLine
        (codeGenMallocCall params) printNewLine
        "MOV(R3, R0); // R3 -> params.addr.. " printNewLine
 
        "/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */" printNewLine
            "MOV(INDD(R2,0), R3);" printNewLine
            "MOV(R5, IMM(2));" printNewLine
            "MOV(R6, IMM(0));" printNewLine
            paramsoopLabel ":" printNewLine
                "CMP(R5,IMM(" (number->string (+ 2 params)) "));" printNewLine
                "JUMP_GE(" paramsoopLabel-exit ");" printNewLine
                "MOV(INDD(R3, R6), FPARG(R5));" printNewLine
                "//R2[0] -> new parameters" printNewLine
                "INCR(R5);" printNewLine
                "INCR(R6);" printNewLine
        "JUMP(" paramsoopLabel ");" printNewLine
        paramsoopLabel-exit ": " printNewLine
        "MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1." printNewLine
        "MOV(INDD(R10, IMM(2)), LABEL(" bodyLabel ")); // Append the body" printNewLine
        "MOV(R0, R10);" printNewLine
        "JUMP(" endLabel  ");" printNewLine
        bodyLabel ":" printNewLine
        "PUSH(FP);" printNewLine
        "MOV(FP, SP);" printNewLine
        (cond 
          
          ((eq? (car exp) 'lambda-opt) 
              (createLambdaOptBody exp env))
          ((eq? (car exp) 'lambda-variadic)
              (createLambdaVarBody exp env))
          ((eq? (car exp) 'lambda-simple)
              (createLambdaSimpleBody exp env))
          (else "Error: Lambda type is not recognized!")
        )
        printNewLine
        "POP(FP);" printNewLine
        "RETURN;" printNewLine
        endLabel ":" printNewLine
      )
    )
))  

(define createLambdaSimpleBody
  (lambda (exp env)
    (string-append
      "/* -- createLambdaSimpleBody -- */" printNewLine
          "MOV(R1, FPARG(1));" printNewLine
          "CMP(R1, IMM(" (number->string (length (cadr exp))) "));" printNewLine
          "JUMP_NE(ERROR);" printNewLine
        "/* CodeGen:*/" printNewLine

      (codeGen  (caddr exp) (+ 1 env) (length (cadr exp)))
      "/* CodeGen-End*/" printNewLine
))
)



(define createLambdaOptBody
  (lambda (exp env)
    (let* (
        (argumentsLength (length (cadr exp)))
        (body (cadddr exp))
        (LabelCopy (makeLabelOptCopyLoop))
        (LabelCopyExit (makeLabelOptCopyLoopExit))
        (LabelCopy2 (makeLabelOptCopyLoop2))
        (LabelCopyExit2 (makeLabelOptCopyLoopExit2)))
      
      
    (string-append
      "/* - LabmdaOpt-Body: -*/" printNewLine

      "POP(R1);  // Old FP" printNewLine ; Old Frame pointer
      "POP(R2);  // Return addr" printNewLine ; Return address
      "POP(R3);  // Env" printNewLine ; environment
      "POP(R4);  // args count" printNewLine ; number of grguments;

      (codeGenMallocCall argumentsLength)
      
      "MOV(R6,IMM(0));" printNewLine ;R6 = Index
      "MOV(R5,R0);" printNewLine ; R5 = Malloc(args)

      LabelCopy ":" printNewLine
        "CMP(R6, IMM(" (number->string argumentsLength) "));" printNewLine
        "JUMP_EQ(" LabelCopyExit ");" printNewLine
        "POP(R7);" printNewLine
        "MOV(INDD(R5,R6), R7);" printNewLine
        "ADD(R6, IMM(1));" printNewLine
        "JUMP(" LabelCopy ");" printNewLine
      LabelCopyExit ":" printNewLine

      "MOV(R7, R4);" printNewLine
      "SUB(R7, IMM(" (number->string argumentsLength) "));" printNewLine ; R7 is the number of optional args ...

      "PUSH(R7);" printNewLine
      "PUSH(IMM(0));" printNewLine
      "CALL(LIST);" printNewLine
      "DROP(IMM(1));" printNewLine
      "POP(R7);" printNewLine
      "DROP(R7);" printNewLine ; remove all the optional args from list ... 
      "MOV(R8, R0);" printNewLine ; R8 is the new optional arg list ...

      "/* - Inserting to stack - */" printNewLine
      "PUSH(R8);" printNewLine

      "MOV(R6, IMM(" (number->string (- argumentsLength 1)) "));" printNewLine ;R6 is the running index

      LabelCopy2 ":" printNewLine
      "CMP(R6, IMM(-1));" printNewLine
      "JUMP_EQ(" LabelCopyExit2 ");" printNewLine
      "PUSH(INDD(R5,R6));" printNewLine
      "SUB(R6, IMM(1));" printNewLine
      "JUMP(" LabelCopy2 ");" printNewLine
      LabelCopyExit2 ":" printNewLine

      "PUSH(IMM(" (number->string (+ argumentsLength 1))"));" printNewLine
      "PUSH(R3);" printNewLine
      "PUSH(R2);" printNewLine
      "PUSH(R1);" printNewLine
      "MOV(FP, SP);" printNewLine

      (codeGen body (+ env 1) (+ argumentsLength 1))      
))))



(define createLambdaVarBody
  (lambda (exp env)
    (let* (
        (body (caddr exp)) 
        )    
      
    (string-append
      "/* - Lambda Var Body -*/" printNewLine
      
      "POP(R1);  // Old FP" printNewLine ; Old Frame pointer
      "POP(R2);  // Return addr" printNewLine ; Return address
      "POP(R3);  // Env" printNewLine ; environment
      "POP(R4);  // args count" printNewLine ; number of grguments;
      
      "PUSH(R4);" printNewLine
      "PUSH(IMM(0));" printNewLine
      "CALL(LIST);" printNewLine
      "DROP(IMM(1));" printNewLine
      "POP(R4);" printNewLine
      "DROP(R4);" printNewLine

      "PUSH(R0);" printNewLine
      "PUSH(1);" printNewLine
      "PUSH(R3);" printNewLine
      "PUSH(R2);" printNewLine
      "PUSH(R1);" printNewLine
      "MOV(FP, SP);" printNewLine

      (codeGen body (+ env 1) 1)
))))



; ---------------- Applic CodeGen: ---------------------

(define pushApplicParams 
  (lambda (reversedParameterList length)
    (if 
      (= 0 length) ""
      (string-append
        ; Parameter List in reversed order:
        (car reversedParameterList) printNewLine
        "PUSH(R0);" printNewLine
        
        (pushApplicParams (cdr reversedParameterList) (- length 1))
      ))))


(define codeGenApplic 
  (lambda (exp env params)
      (let   ((paramsList (caddr exp)))
          (string-append
        printNewLine
        printNewLine
        "/* ---------------------------------------------- */" printNewLine
        "/*                  Applic Code: */"                  printNewLine
        "/* ---------------------------------------------- */" printNewLine
            
            "/* Compiled params, in reverse order: */" printNewLine
            ; Compile the params and push in reverse order:
            (pushApplicParams (reverse (map (mapCodeGeneration env params) paramsList)) (length paramsList))
            "PUSH(IMM(" (number->string (length paramsList)) ")) // Push Num of args;" printNewLine
            
            printNewLine
             "/* The Compiled Function: */" printNewLine
            (codeGen (cadr exp) env params)
            "CMP(INDD(R0,0), IMM(T_CLOSURE));" printNewLine
            "JUMP_NE(ERROR);" printNewLine
            "PUSH(INDD(R0, IMM(1)));" printNewLine   ; push the closure environment
            "CALLA(INDD(R0, IMM(2)));" printNewLine      
            "MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;" printNewLine     
            "ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;" printNewLine   
            "DROP(R5);"  printNewLine       
        ))))

(define codeGenTCApplic
  (lambda (exp env params)
      (let* (   
            (paramsList (caddr exp))
            (StargOffset (+ 1 (length paramsList))) ;; The first thing in SP->stack offset.
            (copyNumber (+ 3 (length paramsList))) ;(Need to copy Ret, Env and Args Count)
            (LoopLabel (makeLabelTailCopyLoop))
            (LoopExitLabel (makeLabelTailCopyLoopExit))
          )
          (string-append
            
                    printNewLine
        printNewLine
        "/* ---------------------------------------------- */" printNewLine
        "/*                  Tail Applic Code: */"                  printNewLine
        "/* ---------------------------------------------- */" printNewLine
                        
            (pushApplicParams (reverse (map (mapCodeGeneration env params) paramsList))
                               (length paramsList)) " // Compile params and push (in reverse)." printNewLine
            
            "/* push number of args. */" printNewLine
            "PUSH(IMM(" (number->string (length paramsList)) "));" printNewLine
            
            "/* Compile function and add it's code: */" printNewLine
            (codeGen (cadr exp) env params)
            "CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors" printNewLine
            "JUMP_NE(ERROR);" printNewLine
            "PUSH(INDD(R0,1)); // Push Environment" printNewLine        
            "PUSH(FPARG(-1)); // Push Ret addr (from current frame)" printNewLine
            "MOV(R4, IMM(0)); // R4 will be the index" printNewLine
            "MOV(R6, IMM(" (number->string StargOffset) ")); // R6 = Old STARG.offset" printNewLine
            "MOV(R8,FPARG(-2)); // R8 = old FP" printNewLine
            "MOV(R12,FPARG(1)); // R12 = Old argsCount" printNewLine 
            "MOV(R13,STARG(1)); // R13 = New argsCount" printNewLine 
            "MOV(R5, R12); // R5 = Old FPARG.offset" printNewLine
            "ADD(R5, IMM(1));" printNewLine
            LoopLabel ":" printNewLine
            "CMP(R4, IMM(" (number->string copyNumber) "));" printNewLine
            "JUMP_EQ(" LoopExitLabel ");" printNewLine
            "MOV(FPARG(R5), STARG(R6));" printNewLine
            "ADD(R4, IMM(1));" printNewLine
            "SUB(R5, IMM(1));" printNewLine
            "SUB(R6, IMM(1));" printNewLine
            "JUMP(" LoopLabel ");" printNewLine
            LoopExitLabel ":" printNewLine
            "MOV(R9, R13);" printNewLine                      
            "SUB(R9, IMM(1));" printNewLine
            "SUB(R9, R12);" printNewLine
            "MOV(SP, FP);" printNewLine
            "ADD(SP, R9);" printNewLine
            "MOV(FP, R8);" printNewLine
            "JUMPA(INDD(R0, 2));" printNewLine
             ))))

  
  
(define GetName
  (lambda (exp)
    (cadr exp)
))

(define GetMajor
  (lambda (exp)
    (caddr exp)
))

(define GetMinor
  (lambda (exp)
    (cadddr exp)
))


(define codeGenPVar
  (lambda (exp env params)
    (string-append
      "/* --- P-Var: --- */" printNewLine
      "MOV(R0, FPARG(" (number->string (+ 2 (GetMajor exp))) "));" printNewLine )
))

(define codeGenBVar
  (lambda (exp env params)
    (string-append
      "/* --- B-Var: --- */" printNewLine
      "MOV(R1,FPARG(LOC_ENV));" printNewLine
      "MOV(R2,INDD(R1,IMM(" (number->string (GetMajor exp)) ")));" printNewLine
      "MOV(R3,INDD(R2,IMM(" (number->string (GetMinor exp)) ")));" printNewLine
      "MOV(R0,R3);" printNewLine
)))

(define codeGenFVar
  (lambda (exp env params)
    (string-append
      "/* --- F-Var: --- */" printNewLine
      "MOV(R1, IMM(" (number->string (+ 4 (car (getEntryFromSymbolTable (cadr exp))))) ")); // Value of Free var bucket.Address" printNewLine
      "MOV(R2,INDD(R1,0));" printNewLine
      "MOV(R0,R2);" printNewLine
)))

(define mapCodeGeneration
  (lambda (env params)
    (lambda (exp)
        (codeGen exp env params)
)))



; ----------------------- constants Table: -----------------------

(define makeGlobalCounter
  (lambda (initialValue)
    (let ((val initialValue))
      (lambda (enum)
        (if (= 0 enum)
          val
          (begin (set! val (+ enum val)) val))))))

(define makeGlobalTable
  (lambda ()
    (let ((lista (list)))
      (lambda (newList)
        (if (eq? 0 newList)
          lista
          (begin
            (set! lista (append lista newList))
            lista
          ))))))

(define freeMemory   (makeGlobalCounter 10))
(define GlobalConstTable (makeGlobalTable))



(define StringToAsciiList
  (lambda (string)
    (map char->integer (string->list string))))

(define t_void    937610)
(define t_nil     722689)
(define t_bool    741553)
(define t_char    181048)
(define t_integer   945311)
(define t_string  799345)
(define t_symbol  368031)
(define t_pair    885397)
(define t_vector  335728)
(define t_closure   276405)

(define isSimpleType
  (lambda (exp)
    (or 
      (char? exp)
      (number? exp)
      (string? exp)
      (void? exp)
      (null? exp)
      (boolean? exp))))

(define GetValueOfSymbols
(lambda (exp)
   (cond
      ((isSimpleType exp) `(,exp))
      ((pair? exp)
        `(,exp ,@(GetValueOfSymbols (car exp)) ,@(GetValueOfSymbols (cdr exp))))
      ((vector? exp)
        `(,exp ,@(apply append
              (map GetValueOfSymbols
                (vector->list exp)))))
      ((symbol? exp)
        `(,exp ,@(GetValueOfSymbols (symbol->string exp))))
 )))

(define GetValuesByKey
  (lambda (givenKey expressions)
    (map cadr
         (filter 
           (lambda (exp)
             (and
               (pair? exp)
               (eq? givenKey (car exp))))
                    (apply append (map GetValueOfSymbols expressions))))
))

(define flattenList
  (lambda (variable)
      (cond ((null? variable) '())
          ((pair? variable) (append (flattenList (car variable)) (flattenList (cdr variable))))
          (else (list variable))
    )))

(define isInconstantsTable
  (lambda (constant table)
    (if (symbol? constant)
        (isInSymbolTable
          constant (globalSymbolTable 0))
    (if 
      (null? table) #f ; Need to decide what happends here..
          (if 
            (equal? (cadr (car table)) constant)
            (car table)
            (isInconstantsTable constant (cdr table))
          )))))

(define getAddrFromconstantsTable
  (lambda (constant)
      (car (isInconstantsTable constant (GlobalConstTable 0))
    )))

(define TryCreateconstantsTableEntry
  (lambda (exp)
      (if 
        (not (isInconstantsTable exp (GlobalConstTable 0)))
        (MakeConst exp)
      )))

(define createPairEntry
  (lambda (pair)
    (let* (
        (oldMemoryLocation (freeMemory 0))
        (newMemoryLocation (freeMemory 3)))
      (GlobalConstTable (list `(,oldMemoryLocation ,pair (,t_pair 
                      ,(car (isInconstantsTable (car pair) (GlobalConstTable 0)))
                      ,(car (isInconstantsTable (cdr pair) (GlobalConstTable 0))))))))))


(define createConstVectorEntry
  (lambda (vectorElement)
    (let* (
        (oldMemoryLocation (freeMemory 0))
        (newMemoryLocation (freeMemory (+ 2 (vector-length vectorElement))))
      )
      (begin 
        (GlobalConstTable (list `(,oldMemoryLocation ,vectorElement (,t_vector ,(vector-length vectorElement) 
                ,@(map (lambda (x) (getAddrFromconstantsTable x)) (vector->list vectorElement)))))))
)))

(define makeNumConst
 (lambda (ConstToMake)
   (let* (
            (oldMemoryLocation (freeMemory 0))
            (newMemoryLocation (freeMemory 2))
           )
          (GlobalConstTable (list `(,oldMemoryLocation ,ConstToMake (,t_integer ,ConstToMake))))
        ))
 )

(define makeCharConst
 (lambda (ConstToMake)
    (let* (
        (oldMemoryLocation (freeMemory 0))
        (newMemoryLocation (freeMemory 2))
        (EntryToMake (list `(,oldMemoryLocation ,ConstToMake (,t_char ,(char->integer ConstToMake)))))
       )
      (GlobalConstTable EntryToMake)
    )))

(define makeStringConst
 (lambda (ConstToMake)
        (let* (
            (oldMemoryLocation (freeMemory 0))
            (newMemoryLocation (freeMemory (+ 2 (string-length ConstToMake))))
            (EntryToMake (list `(,oldMemoryLocation ,ConstToMake
                                                    (,t_string ,(string-length ConstToMake)
                                                                            ,@(StringToAsciiList ConstToMake))))))
          (GlobalConstTable EntryToMake)
        )
   )
 )

(define makePairConst
 (lambda (ConstToMake)
          (begin 
            (map TryCreateconstantsTableEntry (flattenList (GetValueOfSymbols ConstToMake)))
            (map TryCreateconstantsTableEntry (filter (lambda (var) (not (pair? var))) (GetValueOfSymbols ConstToMake)))
            (map createPairEntry (filter pair? (GetValueOfSymbols ConstToMake)))
          )
  ))

(define makeVectorConst
 (lambda (ConstToMake)

          (begin
            (map TryCreateconstantsTableEntry (flattenList (filter (lambda (var) (not (vector? var))) (GetValueOfSymbols ConstToMake)))) 
            (map TryCreateconstantsTableEntry (filter (lambda (var) (not (vector? var))) (GetValueOfSymbols ConstToMake)))
            (map createConstVectorEntry (filter vector? (GetValueOfSymbols ConstToMake)))
            )
        )
   )

(define MakeConst
  (lambda (ConstToMake)
    (cond 
      ((number? ConstToMake) (makeNumConst ConstToMake))
      ((char? ConstToMake) (makeCharConst ConstToMake))
      ((string? ConstToMake) (makeStringConst ConstToMake))
      ((symbol? ConstToMake) '())
      ((pair? ConstToMake) (makePairConst ConstToMake))
      ((vector? ConstToMake) (makeVectorConst ConstToMake))
      (else (error 'createConstEntry "Cant recognize const type!."))
    )))



(define constTableCreationHelper 
  (lambda (constants)
    (if 
      (null? constants) 
        (GlobalConstTable 0)
        (cond
          ((isInconstantsTable (car constants) (GlobalConstTable 0)) (constTableCreationHelper (cdr constants)))
          (else
            (let* ((makeNewConstEntry (MakeConst (car constants))))
                (constTableCreationHelper (cdr constants)))
              ))))
)

(define PreDefConsts
  (lambda ()
    `((1 ,(void) (,t_void))
      (2 () (,t_nil))
      (3 #f (,t_bool 0))
      (5 #t (,t_bool 1))
)))

(define createconstantsTable 
  (lambda (constants)
    (let ((preDefinedConst (GlobalConstTable (PreDefConsts))))
      (constTableCreationHelper constants)
    )))


(define constantsTableCompiled
  (lambda ()
    (let (
        (constantsTable (GlobalConstTable 0))
       )
      (letrec ((writeloop
              (lambda (address lista)
                (if (null? lista)
                  ""
                  (string-append
                    "MOV(IND(IMM(" (number->string address) ")), IMM(" (number->string (car lista)) "));" printNewLine
                    (writeloop (+ 1 address) (cdr lista))
                ))))
            (loop
              (lambda (CurrentTable)
                (if 
                  (null? CurrentTable)
                  ""

                    (string-append
                      (writeloop (car (car CurrentTable)) (caddr (car CurrentTable)))
                      (loop (cdr CurrentTable))
                      ))
                ))
          )
          (loop constantsTable)
      )
    )))

  ;;;; ################ changed Bookmark.... #################

  
(define codegen-const 
  (lambda (expression env params)
    (let* (
        (const      (cadr expression))
        (constantsAddr (if (symbol? const) (begin (car (getEntryFromSymbolTable const))) (getAddrFromconstantsTable const)))
        )
      (string-append
        "/* In constants .. */" printNewLine 
        "MOV(R0,IMM(" (number->string constantsAddr)  "));"
      )
  )))

;;;;;; TILL HERE constants PART

;; SYMBOL TABLE PART ;;;;;

(define globalSymbolTable (makeGlobalTable))
(define globalSymbolTableStartAddr (makeGlobalCounter 0))

(define removeDup
  (lambda (chList newList)
    (cond
      ((null? chList) newList)
      ((member (car chList) newList) (removeDup (cdr chList) newList))
      (else (removeDup (cdr chList) (cons (car chList) newList)))
)))

(define buildInProcString
  (string-append
"
(define min
  (let ((binary-min (lambda (a b) (if (< a b) a b))))
    (lambda (a . s)
      (foldr binary-min a s))))

"))


(define buildInProcList
  '(number? integer? boolean? char? null? pair? string? symbol? zero? vector? procedure? 
      + - * / < > = char->integer integer->char string-length string-ref string-set! make-string 
      vector-length vector-ref vector-set! make-vector cons car cdr list vector apply length symbol->string
      string->symbol eq? set-cdr! set-car!)
)


(define createSymbolTable
  (lambda (symbols)
    (if 
      (null? symbols) 
      (globalSymbolTable 0)
      
      (let* (
          (nextArgSym  (car symbols))
          (restSyms (cdr symbols))
          (newEntry     (createNewSymbolTableEntry nextArgSym))
          )
        (begin 
          (globalSymbolTable newEntry)
          (createSymbolTable restSyms)              
        )
            
    ))))

(define createNewSymbolTableEntry
  (lambda (sym)
    (let* 
      (
        (oldMemoryLocation        (freeMemory 0))
        (newMemoryLocation        (freeMemory 5))
        (stringObjAddr    (getAddrFromconstantsTable (symbol->string sym)))
        (newEntry   (list `(,oldMemoryLocation ,sym ,t_symbol ,(+ 3 oldMemoryLocation) ,newMemoryLocation ,stringObjAddr)))
      )
      newEntry
  )))

;; always exist!!!
(define isInSymbolTable
  (lambda (sym accSymTable)
    (if 
      (null? accSymTable)
      #f
      (let* (
          (nextArgSymEntry   (car accSymTable))
          (nextArgSymName    (cadr nextArgSymEntry))
          (restSyms     (cdr accSymTable))
          )
        (if 
          (equal? nextArgSymName sym)
          nextArgSymEntry
          (isInSymbolTable sym restSyms)
        )
      ))))

; PreCond : entry exist.
(define getEntryFromSymbolTable
  (lambda (sym)
    (let ((accSymTable (globalSymbolTable 0)))
      (isInSymbolTable sym accSymTable)
    )
))

(define getEntryBucketAddrFromSymbolTable
  (lambda (sym)
    (let ((accSymTable (globalSymbolTable 0)))
      (cadddr (isInSymbolTable sym accSymTable))
    )
))

(define symbolTableCompiled
  (lambda ()
    (let (
        (symTable (globalSymbolTable 0))
       )
      (letrec (
            (loop
              (lambda (CurrentTable symAddr)
                (if 
                  (null? CurrentTable)
                  (string-append
                    "MOV(INDD(" (number->string symAddr) ", 2), 2);" printNewLine
                  )
                  (let* (
                      (entry          (car CurrentTable))
                      (symAddr          (car entry))
                      (sym          (cadr entry))
                      (symbolTag        (caddr entry))
                      (bucketAddr       (cadddr entry))
                      (nextArgNodeAddr       (cadddr (cdr entry)))
                      (pointerToString      (cadddr (cddr entry)))
                      (initialValueInR0        (putInitSymValueInR0 sym))
                     )
                    (string-append
                      "MOV(INDD(" (number->string symAddr) ", 0), IMM(" (number->string symbolTag)  "));" printNewLine
                      "MOV(INDD(" (number->string symAddr) ", 1), IMM(" (number->string bucketAddr) "));" printNewLine
                      "MOV(INDD(" (number->string symAddr) ", 2), IMM(" (number->string nextArgNodeAddr) "));" printNewLine
                      "MOV(INDD(" (number->string symAddr) ", 3), IMM(" (number->string pointerToString) "));" printNewLine
                      initialValueInR0
                      "MOV(INDD(" (number->string symAddr) ", 4), R0);" printNewLine
                      (loop (cdr CurrentTable) symAddr)
                      )))
                ))
          )
          (loop symTable (globalSymbolTableStartAddr 0))
      )
    )))

(define putInitSymValueInR0
  (lambda (sym)
    (string-append
      (cond
        ((eq? sym 'number? ) (createClosureCodeFromLableName "IS_NUMBER"))
        ((eq? sym 'integer? ) (createClosureCodeFromLableName "IS_INTEGER"))
        ((eq? sym 'boolean? ) (createClosureCodeFromLableName "IS_BOOLEAN"))
        ((eq? sym 'char? ) (createClosureCodeFromLableName "IS_CHAR"))
        ((eq? sym 'null? ) (createClosureCodeFromLableName "IS_NULL"))
        ((eq? sym 'pair? ) (createClosureCodeFromLableName "IS_PAIR"))
        ((eq? sym 'string? ) (createClosureCodeFromLableName "IS_STRING"))
        ((eq? sym 'symbol? ) (createClosureCodeFromLableName "IS_SYMBOL"))
        ((eq? sym 'vector? ) (createClosureCodeFromLableName "IS_VECTOR"))
        ((eq? sym 'procedure? ) (createClosureCodeFromLableName "IS_PROCEDURE"))
        ((eq? sym 'zero? ) (createClosureCodeFromLableName "IS_ZERO_MY"))
        ((eq? sym '+ ) (createClosureCodeFromLableName "VARIADIC_PLUS"))
        ((eq? sym '* ) (createClosureCodeFromLableName "VARIADIC_MUL"))
        ((eq? sym '/ ) (createClosureCodeFromLableName "VARIADIC_DIV"))
        ((eq? sym '- ) (createClosureCodeFromLableName "VARIADIC_MINUS"))
        ((eq? sym '= ) (createClosureCodeFromLableName "VARIADIC_EQUAL"))
        ((eq? sym '> ) (createClosureCodeFromLableName "VARIADIC_GT"))
        ((eq? sym '< ) (createClosureCodeFromLableName "VARIADIC_LT"))
        ((eq? sym 'char->integer ) (createClosureCodeFromLableName "CHAR_TO_INTEGER"))
        ((eq? sym 'integer->char ) (createClosureCodeFromLableName "INTEGER_TO_CHAR"))
        ((eq? sym 'remainder ) (createClosureCodeFromLableName "REMAINDER"))
        ((eq? sym 'string-length ) (createClosureCodeFromLableName "STRING_LENGTH"))
        ((eq? sym 'string-ref ) (createClosureCodeFromLableName "STRING_REF"))
        ((eq? sym 'string-set! ) (createClosureCodeFromLableName "STRING_SET"))
        ((eq? sym 'make-string ) (createClosureCodeFromLableName "MAKE_STRING"))
        ((eq? sym 'vector-length ) (createClosureCodeFromLableName "VECTOR_LENGTH"))
        ((eq? sym 'vector-ref ) (createClosureCodeFromLableName "VECTOR_REF"))
        ((eq? sym 'vector-set! ) (createClosureCodeFromLableName "VECTOR_SET"))
        ((eq? sym 'make-vector ) (createClosureCodeFromLableName "MAKE_VECTOR"))
        ((eq? sym 'cons ) (createClosureCodeFromLableName "CONS"))
        ((eq? sym 'car ) (createClosureCodeFromLableName "CAR"))
        ((eq? sym 'cdr ) (createClosureCodeFromLableName "CDR"))
        ((eq? sym 'set-car! ) (createClosureCodeFromLableName "SET_CAR"))
        ((eq? sym 'set-cdr! ) (createClosureCodeFromLableName "SET_CDR"))
        ;((eq? sym 'vector ) (createClosureCodeFromLableName "VECTOR"))
        ;((eq? sym 'list ) (createClosureCodeFromLableName "LIST"))
        ((eq? sym 'apply ) (createClosureCodeFromLableName "APPLY_TC"))
        ;((eq? sym 'length ) (createClosureCodeFromLableName "LENGTH"))
        ((eq? sym 'symbol->string ) (createClosureCodeFromLableName "SYMBOL_TO_STRING"))
        ((eq? sym 'string->symbol ) (createClosureCodeFromLableName "STRING_TO_SYMBOL"))
        ((eq? sym 'eq? ) (createClosureCodeFromLableName "EQ"))
        (else "MOV(R0, 0);")
      )
    )
))

(define createClosureCodeFromLableName
  (lambda (labelName)
    (string-append
      "PUSH(LABEL(" labelName "));" printNewLine
      "PUSH(IMM(0));" printNewLine 
      "CALL(MAKE_SOB_CLOSURE);" printNewLine
      "DROP(IMM(2));" printNewLine
  )))


(define codegen-define
  (lambda (expression env params)
    (let* (
        (freeVar          (cadr expression))
        (freeVarSym         (cadr freeVar))
        (freeVarEntry           (getEntryFromSymbolTable freeVarSym))
        (freeVarBucketValueAddr   (+ 4 (car freeVarEntry)))
        (newValue           (caddr expression))
        (newValueCompiled       (codeGen newValue env params))
        
        )
      (string-append
        "/* In Define .. */" printNewLine 
        newValueCompiled printNewLine
        "MOV(ADDR(" (number->string freeVarBucketValueAddr) "), R0);" printNewLine
        "MOV(R0, SOB_VOID);" printNewLine
      )
  )))

;; TILL HERE SYMNOL TABLE PART ;;;;;

(define getInputFileexpressionsCompiledCode
  (lambda (expressions)
    (let* (
        (parsedexpressions      (map parse expressions))
        (lexParesedexpressions   (map pe->lex-pe parsedexpressions))
        (at-lexParesedexpressions  (map annotate-tc lexParesedexpressions))
        )
        (letrec ( (loop
                (lambda (expressions)
                  (if
                    (null? expressions)
                    printNewLine
                    (string-append
                      (codeGen (car expressions) 0 0) printNewLine
                      "CALL(PRINT_R0);" printNewLine
                      (loop (cdr expressions))
                    )
                    )))


              )
            (loop at-lexParesedexpressions)
        )
    )


))

(define compile-scheme-file
  (lambda (inFile outFile)
    (let*   (
          (expressions              (readExpressions inFile))
          (buildInProcexpressions        (readExpressionsFromString buildInProcString))
          (allexpressions            (append buildInProcexpressions expressions))
          (parsedexpressions          (map parse allexpressions))
          (lexParesedexpressions       (map pe->lex-pe parsedexpressions))
          (at-lexParesedexpressions      (map annotate-tc lexParesedexpressions))
          (constants             (GetValuesByKey 'const at-lexParesedexpressions))
          (freeVars             (GetValuesByKey 'fvar at-lexParesedexpressions))
          (allSymbolsInconstants       (filter symbol? constants))
          (needToBeInconstantsTable      constants)
          (needToBeInSymbolTable      (append buildInProcList freeVars allSymbolsInconstants (filter symbol? (apply append (map GetValueOfSymbols constants)))))
          (needToBeInconstantsTableRDup    (removeDup needToBeInconstantsTable '()))
          (needToBeInSymbolTableRDup    (removeDup needToBeInSymbolTable '()))
          (allSymbolistaringsThatCanAppear  (map symbol->string needToBeInSymbolTableRDup))
        )
        
        (begin 
          (createconstantsTable allSymbolistaringsThatCanAppear)
          (globalSymbolTableStartAddr (freeMemory 20))
          (createSymbolTable needToBeInSymbolTableRDup)
          (freeMemory 20)
          (createconstantsTable needToBeInconstantsTableRDup)
          (let* 
            (
              (startS     (start-string))
              (consTableS   (constantsTableCompiled))
              (symbolTableS   (symbolTableCompiled))
              (codeS      (getInputFileexpressionsCompiledCode allexpressions))
            )
            (begin
              (writeStringToFile outFile (
              string-append
               startS
                consTableS

                 symbolTableS
                  codeS
                   end-string

                 ))
            )

          )

        )
)))

(define tag-pe? 
  (lambda (check real)
    (eq? check real)))

(define codeGen
  (lambda (expression env params)
    (let ((tag (if (null? expression) '() (car expression))))
      (cond
        ((tag-pe? 'if3 tag)       (codeGenIf3 expression env params))
        ((tag-pe? 'or tag)        (codeGenOr expression env params))
        ((tag-pe? 'seq tag)       (codeGenSeq expression env params))
        ((tag-pe? 'lambda-simple tag) (codeGenlambda expression env params))
        ((tag-pe? 'lambda-opt tag)    (codeGenlambda expression env params))
        ((tag-pe? 'lambda-variadic tag) (codeGenlambda expression env params))
        ((tag-pe? 'applic tag)      (codeGenApplic expression env params))
        ((tag-pe? 'tc-applic tag)   (codeGenTCApplic expression env params))
        ((tag-pe? 'pvar tag)      (codeGenPVar expression env params))
        ((tag-pe? 'bvar tag)      (codeGenBVar expression env params))
        ((tag-pe? 'fvar tag)      (codeGenFVar expression env params))
        ((tag-pe? 'const tag)     (codegen-const expression env params))
        ((tag-pe? 'def tag)      (codegen-define expression env params))


      ;  ((tag-pe? 'set tag)      (codegen-define expression env params))

        (else (error 'codegen "Code Geb Error!."))

  ))))


(define start-string 
  (lambda ()
  (string-append 
    "#include <stdio.h>" printNewLine
        "#include <stdlib.h>" printNewLine
        "#include \"arch/cisc.h\"" printNewLine
        "int main() {" printNewLine
            "#define SOB_TRUE 5" printNewLine
            "#define SOB_FALSE 3" printNewLine
            "#define SOB_NIL 2"   printNewLine
            "#define SOB_VOID 1"  printNewLine
            "#define LOC_ENV 0"   printNewLine
              "#define LOC_NUM_ARGS 1" printNewLine
              "#define SYM_TAB_START " (number->string (globalSymbolTableStartAddr 0)) " " printNewLine
              "START_MACHINE;" printNewLine
                "JUMP(LETS_START);" printNewLine
                "#include \"arch/char.lib\"" printNewLine
                "#include \"arch/io.lib\"" printNewLine
                "#include \"arch/scheme.lib\"" printNewLine
                "#include \"arch/math.lib\"" printNewLine
                "#include \"arch/string.lib\"" printNewLine
                "#include \"arch/system.lib\"" printNewLine
                "#include \"arch/project_proc.lib\"" printNewLine
                "ERROR:" printNewLine
                "HALT;" printNewLine
                "LETS_START:" printNewLine
                "PUSH(0);" printNewLine
                "PUSH(0);" printNewLine
                "PUSH(0);" printNewLine
                "PUSH(FP);"  printNewLine
                "MOV(FP, SP);" printNewLine
                "MOV(IND(0), IMM(" (number->string (freeMemory 20)) "));" printNewLine

    )))


(define end-string
  (string-append 
    "POP(FP);" printNewLine
    "DROP(IMM(3));" printNewLine
    "STOP_MACHINE;" printNewLine
         "HALT;" printNewLine
    "}" printNewLine
    ))


