  (define labelNum 0)
(define labelNumberInString 
  (lambda ()
        (set! labelNum (+ labelNum 1))
          (number->string labelNum)
  ))
  
  (define push-params-reverse-order
  (lambda (reversedLst length)
    (if 
      (= length 0)
      ""
      (string-append
        (car reversedLst) printNewLine
        "PUSH(R0);" printNewLine
        (push-params-reverse-order (cdr reversedLst) (- length 1))
      ))))
  
(define codeGenTCApplic 
  (lambda (applicExp envLevel paramsLevel)
      (let*   (   
            (paramsList     (caddr applicExp))
            (compParams     (map (lambda (exp) (codeGen exp envLevel paramsLevel)) paramsList))
            (compFunction     (codeGen (cadr applicExp) envLevel paramsLevel))
            (parameterLoopLabel (string-append "closureParameterLoopLabel" (labelNumberInString)))
            (parameterLoopEndLabel (string-append "closureParameterLoopEndLabel" (labelNumberInString)))
            (endLabel (string-append "endLabel" (labelNumberInString)))
            (greaterLabel (string-append "greaterLabel" (labelNumberInString)))

            (equalLabel (string-append "equalLabel" (labelNumberInString)))
          )
      ;(display (cadr applicExp))
          (string-append
            "/* tc-applic */"printNewLine printNewLine
            "/* push T_NIL for empty lambda var and opt */"printNewLine
            "MOV(R0,IMM("(number->string (getAddrFromconstantsTable '()))"));"printNewLine
            "PUSH(R0);"printNewLine
            "/* push params in reverse order. */"printNewLine
            (push-params-reverse-order (reverse compParams) (length paramsList))
            "/* push number of arguments */"printNewLine
            "PUSH(IMM(" (number->string (length paramsList)) "));"printNewLine
            compFunction
            "CMP(INDD(R0,IMM(0)), IMM(T_CLOSURE));"printNewLine
            "JUMP_NE(ERROR);"printNewLine
            "PUSH(INDD(R0,IMM(1)));"printNewLine   ; push the closure environment

           printNewLine 
            "/*tc-applic specific code starts here */"printNewLine
            
            "PUSH(FPARG(-1));"printNewLine ; push old ret   
            "MOV(R1,FPARG(-2));"printNewLine ;R1 <- old fp
            "PUSH(R1);"printNewLine ; push old fp
            "MOV(R2, FPARG(1));"printNewLine ;R2 <- old num of arguments
            "INCR(R2);"printNewLine ; increase since we also have a null arg

            "MOV(R3, R2);"printNewLine ;R3 <- old num of arguments with T_NIL
            "INCR(R3);"printNewLine
            "ADD(R2,IMM(4));"printNewLine ;R2 <- number of old frame boxes
            "MOV(R4,STARG(2));"printNewLine ;R4 <- hold new num of arguments
            "ADD(R4,IMM(3));"printNewLine ;increase since we also have a null arg
            "MOV(R5, R4);"printNewLine ;R5 <-will hold size of new frame
            "ADD(R5,IMM(2));"printNewLine

           
            "/* loop over frame, R6 <- running indx */"printNewLine
            "MOV(R6, IMM(0));"printNewLine
            parameterLoopLabel ":"printNewLine
            "CMP(R6, R5);"printNewLine
            "JUMP_EQ(" parameterLoopEndLabel ");"printNewLine
            "MOV(FPARG(R3), STARG(R4));"printNewLine
            "DECR(R4);"printNewLine
            "DECR(R3);"printNewLine
            "INCR(R6);"printNewLine
            "JUMP(" parameterLoopLabel ");"printNewLine
            parameterLoopEndLabel ":"printNewLine
            "CMP(R5,R2);"printNewLine
            "JUMP_GE("greaterLabel");"printNewLine
            "DROP(R5);"printNewLine
            "SUB(R2,R5);"printNewLine
            "DROP(R2);"printNewLine
            "DROP(1);"
            "JUMP("endLabel");"printNewLine
            greaterLabel ":"printNewLine
            "CMP(R5,R2);"printNewLine
            "JUMP_EQ("equalLabel");"printNewLine
            "MOV(R7,R5);"printNewLine
            "SUB(R5,R2);"printNewLine
            "SUB(R7,R5);"printNewLine
            "DROP(R7);"printNewLine
            "DROP(1);"
            "JUMP("endLabel");"printNewLine
            equalLabel ":"printNewLine
            "DROP(R5);"printNewLine
            "DROP(1);"
            endLabel ":"printNewLine
            "MOV(FP, R1);"printNewLine
            "JUMPA(INDD(R0, 2));"printNewLine printNewLine
        ))))