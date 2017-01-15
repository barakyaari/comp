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
(define makeLabelParamsLoop (makeLabel "LabelParamsLoop"))
(define makeLabelParamsLoopExit (makeLabel "LabelParamsLoopExit"))
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

;;;; ################ changed Bookmark.... #################
          
(define codegen-seq
  (lambda (e env params)
    (let*   (
          (originalList    (cadr e))
          (compiledList   (map (mapCodeGeneration env params) originalList))
        )
        (letrec ((loop 
              (lambda (comp)
                ( string-append
                  (car comp) printNewLine
                  (if 
                    (null? (cdr comp))
                    ""
                    (loop (cdr comp))
                  )
                ))))
              
          (loop compiledList)
        ))))

(define malloc-call
  (lambda(num)
    (string-append
        "PUSH(IMM(" (number->string num) "));" printNewLine   
        "CALL(MALLOC);" printNewLine
        "DROP(IMM(1));" printNewLine
)))

(define codeGenlambda
  (lambda (exp env paramsL)
    (let  (
          (label-start      (makeLabelClosureStart))
            (label-body       (makeLabelClosureBody))
            (label-end        (makeLabelClosureEnd))
            (label-params-loop    (makeLabelParamsLoop))
            (label-params-loop-exit (makeLabelParamsLoopExit))
            (label-env-loop     (makeLabelEnvLoop))
            (label-env-loop-exit  (makeLabelEnvLoopExit))
        )

      (string-append 
        "/* Calling malloc with 3 for closure, env and body. */" printNewLine
        (malloc-call 3)     ;   3 for: T_CLOSURE, ENV, CLOSURE_CODE
        "/* R10 will hold the adress of the malloc */" printNewLine
        "MOV(R10,R0);"  printNewLine    ;   R10 hols the main adress.
        "/* putting T_Closure at place 0 */" printNewLine
        "MOV(INDD(R10,0), IMM(T_CLOSURE));" printNewLine
        "/* call malloc with |env| + 1 */"    printNewLine  
        (malloc-call (+ 1 env))
        "/* R2 will hold the new env adress */" printNewLine
        "MOV(R2,R0);" printNewLine    ;   R2 hols the env address.
        "/* R3 get the old env adress */"
        "MOV(R3, FPARG(0));" printNewLine   ; clone the env
        "/* cloning the env .. */" printNewLine
        "/* R4 is i, R5 is j" printNewLine
        "for(i=1,j=0; j<" (number->string env) "; j++, i++)" printNewLine
        "MOV(INDD(R2,IMM(i)), INDD(R3,IMM(j));" printNewLine
        "*/" printNewLine
        "MOV(R4, IMM(1));" printNewLine
        "MOV(R5, IMM(0));" printNewLine
        label-env-loop ":" printNewLine
        "CMP(R5,IMM(" (number->string env) "));" printNewLine
        "JUMP_GE(" label-env-loop-exit ");" printNewLine
        "MOV(INDD(R2,R4), INDD(R3,R5));" printNewLine
        "INCR(R4);" printNewLine
        "INCR(R5);" printNewLine
        "JUMP(" label-env-loop ");" printNewLine
        label-env-loop-exit ": " printNewLine
        "/* Now cloning the parameters if nedded ... */" printNewLine
        "/* calling malloc with params length ... */" printNewLine
        (malloc-call paramsL) printNewLine
        "/* R3 hold the new parametes adress .. */" printNewLine
        "MOV(R3, R0);" printNewLine 
        "/*for loop for clone ... */" printNewLine
        "/*" printNewLine
        "for(i=0; i<" (number->string paramsL) "; i++) {" printNewLine
        "MOV(INDD(R3,IMM(i)), FPARG(2 + i));" printNewLine
        "} */" printNewLine
        "/* R5 = 2*/" printNewLine
        "MOV(INDD(R2,0), R3);" printNewLine
        "MOV(R5, IMM(2));" printNewLine
        "MOV(R6, IMM(0));" printNewLine
        label-params-loop ":" printNewLine
        "CMP(R5,IMM(" (number->string (+ 2 paramsL)) "));" printNewLine
        "JUMP_GE(" label-params-loop-exit ");" printNewLine
        "MOV(INDD(R3,R6), FPARG(R5));" printNewLine
        "/* the new env R2[0] = new parameters */" printNewLine
        "INCR(R5);" printNewLine
        "INCR(R6);" printNewLine
        "JUMP(" label-params-loop ");" printNewLine
        label-params-loop-exit ": " printNewLine
        "/* finish copy parameters */" printNewLine
        "/* new struct at 1 = new env */" printNewLine
        "MOV(INDD(R10,1),R2);" printNewLine
        "/* appending body ...*/" printNewLine
        "MOV(INDD(R10,IMM(2)), LABEL(" label-body "));" printNewLine
        "MOV(R0,R10);" printNewLine
        "JUMP(" label-end  ");" printNewLine
        label-body ":" printNewLine
        "PUSH(FP);" printNewLine
        "MOV(FP,SP);" printNewLine
        (cond 
          ((eq? (car exp) 'lambda-simple) (create-lambda-simple-body exp env paramsL))
          ((eq? (car exp) 'lambda-opt) (create-lambda-opt-body exp env paramsL))
          ((eq? (car exp) 'lambda-variadic) (create-lambda-variadic-body exp env paramsL))
          (else "Error!")
        )
        printNewLine
        "POP(FP);" printNewLine
        "RETURN;" printNewLine
        "/* LABEL END LAMBDA */" printNewLine
        label-end ":" printNewLine

      )
    )


))  

(define create-lambda-simple-body
  (lambda (e env paramsL)
    (string-append
      "/* In lambda body ... */" printNewLine
      "MOV(R1, FPARG(1));" printNewLine
      "CMP(R1, IMM(" (number->string (length (cadr e))) "));" printNewLine
      "JUMP_NE(ERROR);" printNewLine
      "/* Call code gen ... */" printNewLine
      (codeGen  (caddr e) (+ 1 env) (length (cadr e)))
      "/* retrun from code gen .. */" printNewLine
)))




(define create-lambda-opt-body
  (lambda (e env paramsL)
    (let* (
        (argLength      (length (cadr e)))
        (body         (cadddr e))
        (label-copy     (makeLabelOptCopyLoop))
        (label-copy-exit  (makeLabelOptCopyLoopExit))
        (label-copy2    (makeLabelOptCopyLoop2))
        (label-copy-exit2   (makeLabelOptCopyLoopExit2))
        )
    (string-append
      "/* In lambda opt body ... */" printNewLine

      "POP(R1);" printNewLine ; old fp
      "POP(R2);" printNewLine ; ret addr
      "POP(R3);" printNewLine ; env
      "POP(R4);" printNewLine ; number of arg;

      (malloc-call argLength)

      "MOV(R5, R0);" printNewLine ; R5 is the new malloc for args ... 
      "MOV(R6, IMM(0));" printNewLine ;R6 is the running index

      label-copy ":" printNewLine
      "CMP(R6, IMM(" (number->string argLength) "));" printNewLine
      "JUMP_EQ(" label-copy-exit ");" printNewLine
      "POP(R7);" printNewLine
      "MOV(INDD(R5,R6), R7);" printNewLine
      "ADD(R6, IMM(1));" printNewLine
      "JUMP(" label-copy ");" printNewLine
      label-copy-exit ":" printNewLine

      "MOV(R7, R4);" printNewLine
      "SUB(R7, IMM(" (number->string argLength) "));" printNewLine ; R7 is the number of optional args ...

      "PUSH(R7);" printNewLine
      "PUSH(IMM(0));" printNewLine
      "CALL(LIST);" printNewLine
      "DROP(IMM(1));" printNewLine
      "POP(R7);" printNewLine
      "DROP(R7);" printNewLine ; remove all the optional args from list ... 
      "MOV(R8, R0);" printNewLine ; R8 is the new optional arg list ...

      ; starting insert to stack ... 
      "PUSH(R8);" printNewLine

      "MOV(R6, IMM(" (number->string (- argLength 1)) "));" printNewLine ;R6 is the running index

      label-copy2 ":" printNewLine
      "CMP(R6, IMM(-1));" printNewLine
      "JUMP_EQ(" label-copy-exit2 ");" printNewLine
      "PUSH(INDD(R5,R6));" printNewLine
      "SUB(R6, IMM(1));" printNewLine
      "JUMP(" label-copy2 ");" printNewLine
      label-copy-exit2 ":" printNewLine

      "PUSH(IMM(" (number->string (+ 1 argLength))  "));" printNewLine
      "PUSH(R3);" printNewLine
      "PUSH(R2);" printNewLine
      "PUSH(R1);" printNewLine
      "MOV(FP, SP);" printNewLine

      (codeGen  body (+ 1 env)  (+ 1 argLength))      
))))


(define create-lambda-variadic-body
  (lambda (e env paramsL)
    (let* (
        (body         (caddr e))
        (label-copy     (makeLabelVarCopyLoop))
        (label-copy-exit  (makeLabelVarCopyLoopExit))
        (label-copy2    (makeLabelVarCopyLoop2))
        (label-copy-exit2   (makeLabelVarCopyLoopExit2))
        (label-copy3    (makeLabelVarCopyLoop3))
        (label-copy-exit3   (makeLabelVarCopyLoopExit3))
        )
    (string-append
      "/* In lambda var body ... */" printNewLine
      
      "POP(R1);" printNewLine ; old fp
      "POP(R2);" printNewLine ; ret addr
      "POP(R3);" printNewLine ; env
      "POP(R4);" printNewLine ; number of arg;

      
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

      (codeGen  body (+ 1 env)  1)
))))


;;;;;;; APPLIC ;;;;;;;;;;;


(define push-applic-params 
  (lambda (reversedParamsList length)
    (if 
      (= length 0)
      ""
      (string-append
        (car reversedParamsList) printNewLine
        "PUSH(R0);" printNewLine
        (push-applic-params (cdr reversedParamsList) (- length 1))
      ))))


(define codegen-applic 
  (lambda (exp env paramsL)
      (let*   (   
            (func         (cadr exp))
            (paramsList     (caddr exp))
            (compParams     (map (mapCodeGeneration env paramsL) paramsList))
            (compFunction     (codeGen func env paramsL))
          )
          (string-append
            "/* push params reverse order. */" printNewLine
            (push-applic-params (reverse compParams) (length paramsList))
            "/* push number of args. */" printNewLine
            "PUSH(IMM(" (number->string (length paramsList)) "));" printNewLine
            compFunction
            "CMP(INDD(R0,0), IMM(T_CLOSURE));" printNewLine
            "JUMP_NE(ERROR);" printNewLine
            "PUSH(INDD(R0,IMM(1)));" printNewLine   ; push the closure environment
            "CALLA(INDD(R0,IMM(2)));" printNewLine      
            "/* move to R5 number of args .. to know how to drop from stack. */" printNewLine
            "MOV(R5,STARG(IMM(0)));" printNewLine     
            "/* add r5 env, numOfArg */" printNewLine
            "ADD(R5, IMM(2));" printNewLine   
            "DROP(R5);"  printNewLine       
        ))))


(define codegen-tc-applic
  (lambda (exp env paramsL)
      (let*   (   
            (func         (cadr exp))
            (paramsList     (caddr exp))
            (compParams     (map (mapCodeGeneration env paramsL) paramsList))
            (compFunction     (codeGen func env paramsL))
            (starg_off      (+ 1 (length paramsList))) ;; first object in the sp stack offset.
            (number_of_copy   (+ 3 (length paramsList))) ;ret env number of args
            (loop-label     (makeLabelTailCopyLoop))
            (loop-exitLabel  (makeLabelTailCopyLoopExit))
          )
          (string-append
            "/* In codegen-tc-applis */" printNewLine
            
            "/* push params reverse order. */" printNewLine
            (push-applic-params (reverse compParams) (length paramsList))
            
            "/* push number of args. */" printNewLine
            "PUSH(IMM(" (number->string (length paramsList)) "));" printNewLine
            
            "/* add function code ... */" printNewLine
            compFunction
            "CMP(INDD(R0,0),IMM(T_CLOSURE));" printNewLine
            "JUMP_NE(ERROR);" printNewLine
            
            "/* push env ... */" printNewLine
            "PUSH(INDD(R0,1));" printNewLine        
            
            "/*  Push the return address from current frame */" printNewLine
            "PUSH(FPARG(-1));" printNewLine
            
            "/* R8 hold the old fp */" printNewLine
            "MOV(R8,FPARG(-2));" printNewLine
            "/* R12 hold the old num of arg */" printNewLine
            "MOV(R12,FPARG(1));" printNewLine 
            "/* R13 hold the new num of arg */" printNewLine
            "MOV(R13,STARG(1));" printNewLine 
            
            "/* R6 will old the STARG offset */" printNewLine
            "MOV(R6, IMM(" (number->string starg_off) "));" printNewLine
            
            "/* R5 will old the FPARG offset */" printNewLine
            "MOV(R5, R12);" printNewLine
            "ADD(R5, IMM(1));" printNewLine

            "/* R4 is the running index */" printNewLine
            "MOV(R4, IMM(0));" printNewLine
            
            loop-label ":" printNewLine
            "CMP(R4, IMM(" (number->string number_of_copy) "));" printNewLine
            "JUMP_EQ(" loop-exitLabel ");" printNewLine
            "MOV(FPARG(R5), STARG(R6));" printNewLine
            "SUB(R6, IMM(1));" printNewLine
            "SUB(R5, IMM(1));" printNewLine
            "ADD(R4, IMM(1));" printNewLine
            "JUMP(" loop-label ");" printNewLine
            loop-exitLabel ":" printNewLine
            "MOV(R9, R13);" printNewLine                      
            "SUB(R9, IMM(1));" printNewLine
            "SUB(R9, R12);" printNewLine
            "MOV(SP, FP);" printNewLine
            "ADD(SP, R9);" printNewLine
            "MOV(FP, R8);" printNewLine
            "JUMPA(INDD(R0, 2));" printNewLine          
            
  ))))

;;;;;;; END OF APPLIC ;;;;;;;;;;


;;;;;; VARS 
(define codegen-pvar
  (lambda (e env paramsL)
    
    (string-append
      "/* in pvar */" printNewLine
      "MOV(R0, FPARG(" (number->string (+ 2 (get-major e))) "));" printNewLine )
))

(define codegen-bvar
  (lambda (e env paramsL)
    (string-append
      "/* in bvar */" printNewLine
      "MOV(R1,FPARG(LOC_ENV));" printNewLine
      "MOV(R2,INDD(R1,IMM(" (number->string (get-major e)) ")));" printNewLine
      "MOV(R3,INDD(R2,IMM(" (number->string (get-minor e)) ")));" printNewLine
      "MOV(R0,R3);" printNewLine
)))

(define codegen-fvar
  (lambda (e env paramsL)
    (let*  (
        (freeVarSym         (cadr e))
        (freeVarEntry           (getEntryFromSymbolTable freeVarSym))
        (freeVarBucketValueAddr   (+ 4 (car freeVarEntry)))
           )
    (string-append
      "/* in fvar */" printNewLine
      "MOV(R1, IMM(" (number->string freeVarBucketValueAddr) "));" printNewLine
      "MOV(R2,INDD(R1,0));" printNewLine
      "MOV(R0,R2);" printNewLine
))))

(define get-name
  (lambda (v)
    (cadr v)
))
(define get-major
  (lambda (v)
    (caddr v)
))
(define get-minor
  (lambda (v)
    (cadddr v)
))

(define mapCodeGeneration
  (lambda (env paramsL)
    (lambda (e)
      (codeGen e env paramsL)
)))




;;;;; CONSTS PART ;;;;;;;;;

(define makeGlobalCounter
  (lambda (initval)
    (let ((n initval))
      (lambda (enum)
        (if (= enum 0)
          n
          (begin
            (set! n (+ n enum))
            n
          )
)))))

(define makeGlobalTable
  (lambda ()
    (let ((lst (list)))
      (lambda (newL)
        (if (eq? newL 0)
          lst
          (begin
            (set! lst (append lst newL))
            lst
          )
)))))

(define freeMem   (makeGlobalCounter 10))
(define g_consTable (makeGlobalTable))


(define string->listOfAscii
  (lambda (str)
    (let* (
        (listOfChars  (string->list str))
        (listOfAscii  (map char->integer listOfChars))
        )
      listOfAscii
)))

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


(define foo
  (lambda (e)
    (cond
      ((or (char? e) (number? e) (string? e) (void? e) (null? e) (boolean? e)) `(,e))
      ((pair? e)
        `(,e ,@(foo (car e)) ,@(foo (cdr e))))
      ((vector? e)
        `(,e ,@(apply append
              (map foo
                (vector->list e)))))
      ((symbol? e)
        `(,e ,@(foo (symbol->string e))))
 )))

(define getAllValuesByKey
  (lambda (key expressionrs)
    (map cadr (filter (lambda (element) (and (pair? element) (eq? key (car element)))) (apply append (map foo expressionrs))))
))

(define flatten
  (lambda (var)
      (cond ((null? var) '())
          ((pair? var) (append (flatten (car var)) (flatten (cdr var))))
          (else (list var))
    )))


(define existInConstTable? 
  (lambda (const accConstTable)
    (if (symbol? const) (existInSymbolTable? const (g_symbolsTable 0))
    (if 
      (null? accConstTable)
      #f
      (let* (
          (nextArgConst    (car accConstTable))
          (nextArgConstVal   (cadr nextArgConst))
          (restConsts   (cdr accConstTable))
          )

          (if 
            (equal? nextArgConstVal const)
            nextArgConst
            (existInConstTable? const restConsts)
          )
        )
      ))))
; PreCond : entry exist.
(define getEntryFromConstTable
  (lambda (const)
    (let ((accConstTable (g_consTable 0)))
      (existInConstTable? const accConstTable)
    )
))

(define getEntryAddrFromConstTable
  (lambda (const)
    (let ((accConstTable (g_consTable 0)))
      (car (existInConstTable? const accConstTable))
    )
))

(define getEntryValuesFromConstTable
  (lambda (const)
    (let ((accConstTable (g_consTable 0)))
      (caddr (existInConstTable? const accConstTable))
    )
))

(define createNewTableEntryIfNotAlreadyExist
  (lambda (element)
    (let ((constTable (g_consTable 0)))
      (if 
        (not (existInConstTable? element constTable))
        (createNewTableEntry element)
      )
    )
))

(define createPairEntry
  (lambda (pairElement)
    (let* (
        (carEntry     (existInConstTable? (car pairElement) (g_consTable 0)))
        (cdrEntry     (existInConstTable? (cdr pairElement) (g_consTable 0)))
        (carEntryAddr (car carEntry))
        (cdrEntryAddr (car cdrEntry))
        (oldFM      (freeMem 0))
        (newFM      (freeMem 3))
        (newConstsEntry (list `(,oldFM ,pairElement (,t_pair ,carEntryAddr ,cdrEntryAddr))))
      )
      (g_consTable newConstsEntry)
)))


(define createVectorEntry
  (lambda (vecElement)
    (let* (
        (vecLength        (vector-length vecElement))
        (vecConstsElements    (map (lambda (x) (getEntryAddrFromConstTable x)) (vector->list vecElement)))
        (oldFM          (freeMem 0))
        (newFM          (freeMem (+ 2 vecLength)))
        (newConstsEntry (list `(,oldFM ,vecElement (,t_vector ,vecLength ,@vecConstsElements))))
      )
      (begin 
        (g_consTable newConstsEntry)
      )
)))


(define createNewTableEntry
  (lambda (newConst)
    (cond 
      ((number? newConst)
        (let* (
            (oldFM      (freeMem 0))
            (newFM      (freeMem 2))
            (newConstsEntry (list `(,oldFM ,newConst (,t_integer ,newConst))))
           )
          (g_consTable newConstsEntry)
        )
      )
      ((char? newConst)
        (let* (
            (oldFM      (freeMem 0))
            (newFM      (freeMem 2))
            (newConstsEntry (list `(,oldFM ,newConst (,t_char ,(char->integer newConst)))))
           )
          (g_consTable newConstsEntry)
        )
      )
      ((string? newConst)
        (let* (
            (newConstLength (string-length newConst))
            (oldFM      (freeMem 0))
            (newFM      (freeMem (+ 2 newConstLength)))
            (listOfChars  (string->listOfAscii newConst))
            (newConstsEntry (list `(,oldFM ,newConst (,t_string ,newConstLength ,@listOfChars))))
           )
          (g_consTable newConstsEntry)
        )
      )
      ((symbol? newConst) '())
      
      ((pair? newConst)
        (let* (
            (afterFoo         (foo newConst))
            (afterFooRemovePairs    (filter (lambda (var) (not (pair? var))) afterFoo))
            (flattenVars        (flatten afterFoo))
            (pairsList          (filter pair? afterFoo))
           )
          (begin 
            (map createNewTableEntryIfNotAlreadyExist flattenVars)
            (map createNewTableEntryIfNotAlreadyExist afterFooRemovePairs)
            (map createPairEntry pairsList)
          )
        )
      )
      ((vector? newConst)
        (let* (
            (afterFoo         (foo newConst))
            (afterFooRemoveVectors    (filter (lambda (var) (not (vector? var))) afterFoo))
            (flattenVars        (flatten afterFooRemoveVectors))
            (vectorList         (filter vector? afterFoo))
           )
          (begin
            (map createNewTableEntryIfNotAlreadyExist flattenVars) 
            (map createNewTableEntryIfNotAlreadyExist afterFooRemoveVectors)
            (map createVectorEntry vectorList)
            )
        )
      )
      (else (error 'createConstEntry "Cant recognize const type!."))
    )
))



(define createConstsTableHelper 
  (lambda (consts)
    (if 
      (null? consts) 
      (g_consTable 0)
      
      (let(
          (nextArgConst  (car consts))
          (restConsts (cdr consts))
        )
        (cond
          ((existInConstTable? nextArgConst (g_consTable 0)) (createConstsTableHelper restConsts))
          (else   (let* (
                  (newEntry     (createNewTableEntry nextArgConst))
                  )
                (createConstsTableHelper restConsts)
              )
          )))

)))

(define preDefinedConstsTable
  (lambda ()
    `(
      (1 ,(void) (,t_void))
      (2 () (,t_nil))
      (3 #f (,t_bool 0))
      (5 #t (,t_bool 1))
)))

(define createConstsTable 
  (lambda (consts)
    (let ((preDefinedConst (g_consTable (preDefinedConstsTable))))
      (createConstsTableHelper consts)
    )
))


(define constsTableCompiled
  (lambda ()
    (let (
        (constsTable (g_consTable 0))
       )
      (letrec (   (writeloop
              (lambda (addr lst)
                (if (null? lst)
                  ""
                  (string-append
                    "MOV(IND(IMM(" (number->string addr) ")), IMM(" (number->string (car lst)) "));" printNewLine
                    (writeloop (+ 1 addr) (cdr lst))
                ))))

            (loop
              (lambda (currTable)
                (if 
                  (null? currTable)
                  ""
                  (let* (
                      (entry    (car currTable))
                      (entryAddr  (car entry))
                      (entrylst   (caddr entry))
                     )
                    (string-append
                      (writeloop entryAddr entrylst)
                      (loop (cdr currTable))
                      )))
                ))
          )
          (loop constsTable)
      )
    )))


(define codegen-const 
  (lambda (expression env params)
    (let* (
        (const      (cadr expression))
        (constsAddr (if (symbol? const) (begin (car (getEntryFromSymbolTable const))) (getEntryAddrFromConstTable const)))
        )
      (string-append
        "/* In consts .. */" printNewLine 
        "MOV(R0,IMM(" (number->string constsAddr)  "));"
      )
  )))

;;;;;; TILL HERE CONSTS PART

;; SYMBOL TABLE PART ;;;;;

(define g_symbolsTable (makeGlobalTable))
(define g_symbolsTableStartAddr (makeGlobalCounter 0))

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
      (g_symbolsTable 0)
      
      (let* (
          (nextArgSym  (car symbols))
          (restSyms (cdr symbols))
          (newEntry     (createNewSymbolTableEntry nextArgSym))
          )
        (begin 
          (g_symbolsTable newEntry)
          (createSymbolTable restSyms)              
        )
            
    ))))

(define createNewSymbolTableEntry
  (lambda (sym)
    (let* 
      (
        (oldFm        (freeMem 0))
        (newFm        (freeMem 5))
        (stringObjAddr    (getEntryAddrFromConstTable (symbol->string sym)))
        (newEntry   (list `(,oldFm ,sym ,t_symbol ,(+ 3 oldFm) ,newFm ,stringObjAddr)))
      )
      newEntry
  )))

;; always exist!!!
(define existInSymbolTable? 
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
          (existInSymbolTable? sym restSyms)
        )
      ))))

; PreCond : entry exist.
(define getEntryFromSymbolTable
  (lambda (sym)
    (let ((accSymTable (g_symbolsTable 0)))
      (existInSymbolTable? sym accSymTable)
    )
))

(define getEntryBucketAddrFromSymbolTable
  (lambda (sym)
    (let ((accSymTable (g_symbolsTable 0)))
      (cadddr (existInSymbolTable? sym accSymTable))
    )
))

(define symbolTableCompiled
  (lambda ()
    (let (
        (symTable (g_symbolsTable 0))
       )
      (letrec (
            (loop
              (lambda (currTable symAddr)
                (if 
                  (null? currTable)
                  (string-append
                    "MOV(INDD(" (number->string symAddr) ", 2), 2);" printNewLine
                  )
                  (let* (
                      (entry          (car currTable))
                      (symAddr          (car entry))
                      (sym          (cadr entry))
                      (symbolTag        (caddr entry))
                      (bucketAddr       (cadddr entry))
                      (nextArgNodeAddr       (cadddr (cdr entry)))
                      (pointerToString      (cadddr (cddr entry)))
                      (initValInR0        (putInitSymValueInR0 sym))
                     )
                    (string-append
                      "MOV(INDD(" (number->string symAddr) ", 0), IMM(" (number->string symbolTag)  "));" printNewLine
                      "MOV(INDD(" (number->string symAddr) ", 1), IMM(" (number->string bucketAddr) "));" printNewLine
                      "MOV(INDD(" (number->string symAddr) ", 2), IMM(" (number->string nextArgNodeAddr) "));" printNewLine
                      "MOV(INDD(" (number->string symAddr) ", 3), IMM(" (number->string pointerToString) "));" printNewLine
                      initValInR0
                      "MOV(INDD(" (number->string symAddr) ", 4), R0);" printNewLine
                      (loop (cdr currTable) symAddr)
                      )))
                ))
          )
          (loop symTable (g_symbolsTableStartAddr 0))
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
        (lexParesedexpressionrs   (map pe->lex-pe parsedexpressions))
        (at-lexParesedexpressionrs  (map annotate-tc lexParesedexpressionrs))
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
            (loop at-lexParesedexpressionrs)
        )
    )


))

(define compile-scheme-file
  (lambda (inFile outFile)
    (let*   (
          (expressions              (readExpressions inFile))
          (buildInProcexpressionrs        (readExpressionsFromString buildInProcString))
          (allexpressionrs            (append buildInProcexpressionrs expressions))
          (parsedexpressions          (map parse allexpressionrs))
          (lexParesedexpressionrs       (map pe->lex-pe parsedexpressions))
          (at-lexParesedexpressionrs      (map annotate-tc lexParesedexpressionrs))
          (consts             (getAllValuesByKey 'const at-lexParesedexpressionrs))
          (freeVars             (getAllValuesByKey 'fvar at-lexParesedexpressionrs))
          (allSymbolsInConsts       (filter symbol? consts))
          (needToBeInConstsTable      consts)
          (needToBeInSymbolTable      (append buildInProcList freeVars allSymbolsInConsts (filter symbol? (apply append (map foo consts)))))
          (needToBeInConstsTableRDup    (removeDup needToBeInConstsTable '()))
          (needToBeInSymbolTableRDup    (removeDup needToBeInSymbolTable '()))
          (allSymbolStringsThatCanAppear  (map symbol->string needToBeInSymbolTableRDup))
        )
        
        (begin 
          (createConstsTable allSymbolStringsThatCanAppear)
          (g_symbolsTableStartAddr (freeMem 20))
          (createSymbolTable needToBeInSymbolTableRDup)
          (freeMem 20)
          (createConstsTable needToBeInConstsTableRDup)
          (let* 
            (
              (startS     (start-string))
              (consTableS   (constsTableCompiled))
              (symbolTableS   (symbolTableCompiled))
              (codeS      (getInputFileexpressionsCompiledCode allexpressionrs))
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
        ((tag-pe? 'seq tag)       (codegen-seq expression env params))
        ((tag-pe? 'lambda-simple tag) (codeGenlambda expression env params))
        ((tag-pe? 'lambda-opt tag)    (codeGenlambda expression env params))
        ((tag-pe? 'lambda-variadic tag) (codeGenlambda expression env params))
        ((tag-pe? 'applic tag)      (codegen-applic expression env params))
        ((tag-pe? 'tc-applic tag)   (codegen-tc-applic expression env params))
        ((tag-pe? 'pvar tag)      (codegen-pvar expression env params))
        ((tag-pe? 'bvar tag)      (codegen-bvar expression env params))
        ((tag-pe? 'fvar tag)      (codegen-fvar expression env params))
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
              "#define SYM_TAB_START " (number->string (g_symbolsTableStartAddr 0)) " " printNewLine
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
                "MOV(IND(0), IMM(" (number->string (freeMem 20)) "));" printNewLine

    )))


(define end-string
  (string-append 
    "POP(FP);" printNewLine
    "DROP(IMM(3));" printNewLine
    "STOP_MACHINE;" printNewLine
         "HALT;" printNewLine
    "}" printNewLine
    ))



(compile-scheme-file "input.scm" "output6.c")


