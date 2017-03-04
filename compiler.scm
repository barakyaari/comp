;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; part 1:
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(load "pc.scm")


(define void?
  (lambda(var)
    (eq? var (void))
  )
)




(define <EmptyParser>
  (new (*parser (range 
                  (integer->char 1)
                  
                  (integer->char 32)))
       *star
       done))

;; --------------------------------
;;           Comments:
;; --------------------------------

(define <whitespace>
  (const
   (lambda (ch)
     (char<=? ch #\space))))

(define <line-comment>
  (let ((<end-of-line-comment>
   (new (*parser (char #\newline))
        (*parser <end-of-input>)
        (*disj 2)
        done)))
    (new (*parser (char #\;))
   
   (*parser <any-char>)
   (*parser <end-of-line-comment>)
   *diff *star

   (*parser <end-of-line-comment>)
   (*caten 3)
   done)))

(define <sexpr-comment>
  (new (*parser (word "#;"))
       (*delayed (lambda () <sexpr>))
       (*caten 2)
       done))

(define <comment>
  (disj <line-comment>
  <sexpr-comment>))

(define <skip>
  (disj <comment>
  <whitespace>))

(define ^^<wrapped>
  (lambda (<wrapper>)
    (lambda (<p>)
      (new (*parser <wrapper>)
     (*parser <p>)
     (*parser <wrapper>)
     (*caten 3)
     (*pack-with
      (lambda (_left e _right) e))
     done))))

(define ^<CommentOutPrefix*> (^^<wrapped> (star <skip>)))


;; --------------------------------
;;           Boolean:
;; --------------------------------
(define <Boolean>
  (new 
    ;; True:
    (*parser (char #\#))
    (*parser (char-ci #\t))
    
    (*caten 2)
    (*pack-with
      (lambda (a b)
        #t))
    ;; False:
    (*parser (char #\#))
    (*parser (char-ci #\f))
    
    (*caten 2)
    (*pack-with
      (lambda (a b)
        #f))
    (*disj 2)
    
    done))


;; --------------------------------
;;           Char:
;; --------------------------------

(define <CharPrefix>
  (new 
    (*parser (char #\#))
    (*parser (char #\\))
    (*caten 2)
    (*pack-with
      (lambda(a b)
        `(#\#  #\\)))
    done))

(define <VisibleSimpleChar>
  (new 
     (*parser (range #\! #\~))
    done))

(define <NamedChar>
  (new 
    (*parser (word "lambda"))
    (*pack (lambda (_) (integer->char 955)))
    
    (*parser (word "newline"))
    (*pack (lambda (_) (integer->char 10)))
    
    (*parser (word "nul"))
    (*pack (lambda (_) (integer->char 0)))
    
    (*parser (word "page"))
    (*pack (lambda (_) (integer->char 12)))
    
    (*parser (word "return"))
    (*pack (lambda (_) (integer->char 13)))
    
    (*parser (word "space"))
    (*pack (lambda (_) (integer->char 32)))
    
    (*parser (word "tab"))
    (*pack (lambda (_) (integer->char 9)))
    
    (*disj 7)
    done))

(define <HexChar>
  (new
    (*parser (range #\0 #\9))
    (*parser (range-ci #\a #\f))
    (*disj 2)
    done))

(define <EmptyHexChar>
  (new 
    (*parser (char-ci #\x))
    (*parser <HexChar>)
    *not-followed-by
        done))

(define <HexUnicodeChar>
  (new 
    (*parser (char-ci #\x))
    (*parser <HexChar>) *plus
        (*caten 2)
    (*pack-with (lambda(x lista)
                  
                    (string->number 
                      (list->string lista) 16)))
    (*guard (lambda (x) (< x 110000)))
    (*pack 
    (lambda(x) (integer->char x)))
    done))

(define <Char>
  (new 
    (*parser <CharPrefix>)
    (*parser <NamedChar>)
    (*parser <EmptyHexChar>)
    (*parser <HexUnicodeChar>)
    (*parser <VisibleSimpleChar>)
    (*parser <VisibleSimpleChar>)
    *not-followed-by
    (*disj 4)
    (*caten 2)
    (*pack-with
      (lambda(a b)
        b))
    done))

;; --------------------------------
;;           Number:
;; --------------------------------

(define <digit-0-9>
  (range #\0 #\9))


(define <digit-1-9>
  (range #\1 #\9))

(define <Zero>
  (new
    (*parser (char #\0))
    (*pack (lambda (_) 0))
    
    done))

(define <Natural>
  (new 
    (*parser (char #\0)) *star
    (*pack (lambda (_) 0))
    (*parser <digit-1-9>)
    (*parser <digit-0-9>) *star
    (*caten 2)
    (*pack-with
      (lambda (a s)
        (string->number
          (list->string
            `(,a ,@s)))))
    
    
    (*caten 2)
    (*pack-with
      (lambda (leadingzeros number)
        number))
    done))

(define <Integer>
  (new 
       (*parser (char #\-))
       (*parser <Natural>)
       (*parser <Zero>)
       (*disj 2)
       (*caten 2)
       (*pack-with

         (lambda (minus n) 
           (- n)))

    (*parser (char #\+))
       (*parser <EmptyParser>)
       (*parser <Natural>)
       (*parser <Zero>)
       (*disj 2)
       (*caten 3)
       (*pack-with
         (lambda (plus space n)
          n))
    
       (*parser <Natural>)
       (*parser <Zero>)
       
       (*disj 4)
       done))

(define <Fraction>
  (new (*parser <Integer>)
       (*parser (char #\/))
       (*parser <Natural>)
       (*guard (lambda (n) (not (zero? n))))
       (*caten 3)
       (*pack-with
         (lambda (num div den)
           (/ num den)))
       done))

(define <Number>
  (new 
    (*parser <Fraction>)
    (*parser <Integer>)
    (*disj 2)
    (*delayed (lambda () <SymbolChar>))
    *not-followed-by 
    done))

;; --------------------------------
;;           String:
;; --------------------------------


(define <StringLiteralChar>
  (new 
    (*parser (range (integer->char (string->number "1"))  (integer->char (string->number "1114111"))))
    (*parser (char #\\))  
    *diff  
       done))

(define <StringMetaChar>
  (new 
    (*parser (word "\\\\"))
    (*pack (lambda(_) #\\))
    (*parser (word "\\\""))
    (*pack (lambda(_) #\"))
    (*parser (word "\\t"))
    (*pack (lambda(_) #\tab))
    (*parser (word "\\f"))
    (*pack (lambda(_) #\page))
    (*parser (word "\\n"))
    (*pack (lambda(_) #\newline))
    (*parser (word "\\r"))
    (*pack (lambda(_) #\return))
    (*disj 6)
    done))

(define <StringHexChar>
  (new 
    (*parser (char #\\))
    (*parser (char-ci #\x))
    (*parser <HexChar>) *star

    (*parser (char #\;))

    (*caten 4)
    (*pack-with (lambda (slash x charlist semicolun)
       
                    (string->number 
                      (list->string charlist) 16)))

    (*guard (lambda (x) (< x 110000)))
    (*pack 
    (lambda(x) (integer->char x)))
    
    done))


(define <StringChar>
  (new 
    
    (*parser <StringMetaChar>)
    (*parser <StringLiteralChar>)
    (*parser <StringHexChar>)
    (*disj 3)
    done))


(define <String>
  (new 
    (*parser (word "\""))
    
    (*parser <StringChar>)
    (*parser (word "\""))
    *diff
    *star
    (*parser (word "\""))
    
    
    (*caten 3)
    
    (*pack-with
      (lambda(intro word outro)
        (list->string word)))
    done))

;; --------------------------------
;;           Symbol:
;; --------------------------------

(define <SymbolChar>
  (new 
    
    (*parser (range #\0 #\9))
    (*parser (range #\a #\z))
    (*parser (range #\A #\Z))
    (*pack (lambda (capital)
        (integer->char  (+ (char->integer capital) 32))))
    (*parser (char #\!))
    (*parser (char #\$))
    (*parser (char #\^))
    (*parser (char #\*))
    (*parser (char #\-))
    (*parser (char #\_))
    (*parser (char #\=))
    (*parser (char #\+))
    (*parser (char #\<))
    (*parser (char #\>))
    (*parser (char #\?))
    (*parser (char #\/))
    (*disj 15)
    
    done))

(define <Symbol>
  (new 
    (*parser <SymbolChar>) *plus
    (*pack (lambda(_)
                  (string->symbol
                    (list->string _))))
    done))

;; --------------------------------
;;           Lists:
;; --------------------------------

(define <ProperList>
  (new 
    (*parser (char #\())
    (*parser <EmptyParser>)
    (*delayed (lambda () <sexpr>))
    *star
    (*parser (char #\)))
    (*caten 4)
    (*pack-with
      (lambda(open emptyparser expr1 close)
        `(,@expr1 )))
    done))

(define <ImproperList>
  (new 
        (*parser (char #\())
        (*delayed (lambda () <sexpr>))
         *plus

        (*parser (char #\.))
        (*delayed (lambda () <sexpr>))
        (*parser (char #\)))
        (*caten 5)
        (*pack-with
          (lambda(open expr1 point expr2 close)
          `(,@expr1  . ,expr2 )))

       done))

(define <Vector>
  (new 
    (*parser (char #\#))
    (*parser (char #\())
    (*delayed (lambda () <sexpr>))
    *star
             
    (*parser (char #\)))
    (*caten 4)
    (*pack-with
      (lambda (a b lista d)
        (list->vector lista )))
    done))

(define <Quoted>
  (new 
    (*parser (char #\'))
    (*delayed (lambda () <sexpr>))
    (*caten 2)
    (*pack-with
      (lambda(sign e)
         (list 'quote  e)))
    done))

(define <QuasiQuoted>
  (new 
    (*parser (char #\`))
    (*delayed (lambda () <sexpr>))
    (*caten 2)
    (*pack-with
      (lambda(sign e)

         (list 'quasiquote  e)))
    done))

(define <Unquoted>
  (new 
    (*parser (char #\,))
    (*delayed (lambda () <sexpr>))
    (*caten 2)
    (*pack-with
      (lambda(sign e)
        (list 'unquote  e)))
    done))

(define <UnquoteAndSpliced>
  (new 
    (*parser (char #\,))
    (*parser (char #\@))
    (*delayed (lambda () <sexpr>))
    (*caten 3)
    (*pack-with
      (lambda(sign strudel e)
        (list 'unquote-splicing e)))
    done))

;; --------------------------------
;;           Infix:
;; --------------------------------

(define <InfixCommentExpression>
  (new 
        (*parser (word "#;"))
        (*parser <EmptyParser>)
       (*delayed (lambda () <InfixExpression>))
       (*parser <EmptyParser>)
       (*caten 4)
       done))

(define <InfixComment>
  (new 
    (*parser <line-comment>)
    (*parser <InfixCommentExpression>)
    (*disj 2)

    done))


(define <InfixNumber>
  (new 
    (*parser <Fraction>)
    (*parser <Integer>)
    (*disj 2)
    (*delayed (lambda () <InfixSymbolChar>))
    *not-followed-by 

    done))

(define <InfixSymbolChar>
  (new 
    
    (*parser (range #\0 #\9))
    (*parser (range #\a #\z))
    (*parser (range #\A #\Z))
    (*pack (lambda (capital)
        (integer->char  (+ (char->integer capital) 32))))
    (*parser (char #\!))
    (*parser (char #\$))
    (*parser (char #\_))
    (*parser (char #\=))
    (*parser (char #\<))
    (*parser (char #\>))
    (*parser (char #\?))
    (*disj 10)
    done))

(define <InfixSymbol>
  (new
    (*parser <InfixNumber>) 
    (*parser <InfixSymbolChar>) *plus
    *not-followed-by
    
    (*parser <digit-0-9>) *star
    (*parser <InfixSymbolChar>) *plus
    (*parser <digit-0-9>) *star
    (*caten 3)
        (*pack-with 
          (lambda (numbers1 chars numbers2)
            `(,@numbers1
              ,@chars
               ,@numbers2)))
        (*pack 
          (lambda (_)
            (string->symbol
                    (list->string _))))        
    (*disj 2)

    done))

(define <InfixFinal>
  (new
    (*parser <EmptyParser>) 
    (*parser <InfixSymbol>)
    (*parser <InfixNumber>)
    (*delayed (lambda () <InfixSexprEscape>))

    (*disj 3)
    
    (*parser <EmptyParser>)
    
    (*caten 3)
    (*pack-with (lambda (space1 expression space2)
      expression))
    done))

(define <InfixParen>
    (new
    (*parser <EmptyParser>)
    (*parser (char #\())
    (*parser <EmptyParser>)
    (*delayed (lambda () <InfixAddOrSub>))
    (*parser <EmptyParser>)
    (*parser (char #\)))
    (*parser <EmptyParser>)
    (*caten 7)
    
    (*pack-with
        (lambda (space open space1 expression space2 close space3)
           expression))
    done))

(define <PowerSymbol>
    (new
    (*parser (word "**"))
    (*parser (char #\^))
    (*disj 2)
    done))

(define <InfixArrayGet>
  
    (new
    (*parser <EmptyParser>)
    (*delayed (lambda () <InfixFuncall>))

    (*parser <InfixFinal>)
    (*disj 2)
    (*parser (char #\())
     *not-followed-by       
    (*parser <InfixParen>)
    (*disj 2)
    
    (*parser <EmptyParser>)
    (*parser (char #\[))
          
    (*parser <EmptyParser>)
    (*delayed (lambda () <InfixExpression>))
    (*parser <EmptyParser>)
    (*parser (char #\]))
    (*parser <EmptyParser>)
    (*caten 7)
    (*pack-with
      (lambda (space1 open space2 Expression space3 close space4)
        Expression
        ))
    *plus
    (*caten 2)
       (*pack-with 
         (lambda (array lista1)
            (if (equal? 1 (length lista1))
                 `(vector-ref ,array ,(car lista1))
              (if (equal? 0 (length lista1))
                  array
                    (letrec 
                      ((loopPrint
                          (lambda (expression lista2)
                            (if (equal? 1 (length lista2)) 
                                `(vector-ref ,expression ,(car lista2))
                                (loopPrint
                                  `(vector-ref ,expression ,(car lista2)) (cdr lista2))
                              ))))
                      
                    (loopPrint `(vector-ref ,array ,(car lista1)) (cdr lista1)))))))
    (*parser <EmptyParser>)
    (*caten 3)
    (*pack-with (lambda (space expression space2)
                  expression))
    done))
        
(define <InfixNonArithmetics>
  (new
        (*parser <InfixArrayGet>)
    (*parser <InfixParen>)
    (*delayed (lambda () <InfixFuncall>))
    (*disj 3)
    done))
        
(define <InfixPow>
    (new
    (*parser <EmptyParser>)
       
            (*parser <InfixNonArithmetics>)
        (*parser (word "-"))
           (*parser <InfixNonArithmetics>)
            (*caten 2)
         (*pack-with (lambda (minus expression)
            `(- ,expression)))
        (*disj 2)
    
    (*parser <EmptyParser>)
    (*parser <PowerSymbol>)
    (*parser <EmptyParser>)
       
            (*parser <InfixNonArithmetics>)
        (*parser (word "-"))
           (*parser <InfixNonArithmetics>)
            (*caten 2)
         (*pack-with (lambda (minus expression)
            `(- ,expression)))
        (*disj 2)
    
    (*parser <EmptyParser>)

    (*caten 5) ;(Power + number remain)
    (*pack-with
        (lambda (space pow space2 num2 space3)
           num2))
    *star ;( (power+rest)*)
    (*caten 2) ;(number (power+rest)*)
    
    (*pack-with (lambda (num2 lista)
                  (letrec 
                    ((loopPrint
                      (lambda (num1 lista1)
                        (if (equal? (length lista1) 0) num1
                        (if (equal? (length lista1) 1) `(expt ,num1 ,@lista1)
                        (if (equal? (length lista1) 2)
                            `(expt ,num1 (expt ,(car lista1) ,(cadr lista1)))
                            ;Longer that 2:
                            `(expt ,num1 ,(loopPrint (car lista1) (cdr lista1)))))))))
                              (loopPrint num2 lista)
                            )))
    (*parser <EmptyParser>)
    (*caten 3)
    (*pack-with 
      (lambda (space1 expression space2)
        expression))
    done))

(define <InfixMulOrDiv>
    (new
    (*parser <EmptyParser>)

        (*parser <InfixPow>)
        (*parser (word "-"))
           (*parser <InfixPow>)
            (*caten 2)
         (*pack-with (lambda (minus expression)
            `(- ,expression)))
        (*disj 2)
    (*parser <EmptyParser>)
    (*parser (word "*"))
    (*parser (word "/"))
    (*disj 2)
    (*parser <EmptyParser>)
        (*parser <InfixPow>)
        (*parser (word "-"))
           (*parser <InfixPow>)
            (*caten 2)
         (*pack-with (lambda (minus expression)
            `(- ,expression)))
        (*disj 2)    (*parser <EmptyParser>)

    (*caten 5) ;(Sign + number remain)
    (*pack-with
        (lambda (space mulOrDiv space2 num2 space3)
            `(,(string->symbol
                  (list->string mulOrDiv)) ,num2)))
    *star ;( (Sign+number)*)
    (*caten 2) ;(number (Sign+number)*)
    
    (*pack-with (lambda (num2 lista)
                  (letrec 
                    ((loopPrint
                      (lambda (num1 lista1)
                        (if (equal? (length lista1) 0) num1
                        (if (equal? (length lista1) 1) `(,(caar lista1) ,num1 ,(cadar lista1))
                            ;Longer that 1:
                            (loopPrint `(,(caar lista1) ,num1 ,(cadar lista1)) (cdr lista1)))))))
                              (loopPrint num2 lista)
                            )))
    (*parser <EmptyParser>)
    (*caten 3)
    (*pack-with (lambda (space1 expression space2)
            expression))
    done))

(define <InfixAddOrSub>
    (new
    (*parser <InfixComment>) *star
    (*parser <EmptyParser>)
    (*disj 2)
    (*parser <InfixMulOrDiv>)
        (*parser (word "-"))
           (*parser <InfixMulOrDiv>)
            (*caten 2)
         (*pack-with (lambda (minus expression)
            `(- ,expression)))
        (*disj 2)
        
    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star
    (*parser (word "-"))
    (*parser (word "+"))
    (*disj 2)

    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star
    (*parser <InfixMulOrDiv>)
        (*parser (word "-"))
           (*parser <InfixMulOrDiv>)
            (*caten 2)
         (*pack-with (lambda (minus expression)
            `(- ,expression)))
        (*disj 2)
    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star
    (*caten 8)
    (*pack-with
        (lambda (space1 comment1 addOrSub space2 comment2 num2 space3 comment3)
           `(,(string->symbol (list->string addOrSub))
             ,num2)))
    *star
    (*caten 2)
    
    (*pack-with (lambda (num2 lista)
                  (letrec 
                    ((loopPrint
                      (lambda (num1 lista1)
                        (if (equal? (length lista1) 0) num1
                        (if (equal? (length lista1) 1) `(,(caar lista1) ,num1 ,(cadar lista1))
                            ;Longer that 1:
                            (loopPrint `(,(caar lista1) ,num1 ,(cadar lista1)) (cdr lista1)))))))
                              (loopPrint num2 lista)
                            )))
    (*parser <EmptyParser>)
    (*caten 3)

    (*pack-with 
      (lambda (space1 expression space2)
          expression))
    done))

(define <InfixArgList>
  
  (new
    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star

 (*delayed (lambda () <InfixExpression>)) 
   
    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star

    (*parser (char #\,))
    (*parser <EmptyParser>)
 (*delayed (lambda () <InfixExpression>))    

    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star

    (*caten 7)
    (*pack-with 
      (lambda (space1 comment0 psik space2 addOrSub comment1 space3)
                  addOrSub
                  ))
    *star
    (*parser <EmptyParser>)
    (*caten 5)
    (*pack-with 
      (lambda (space1 comment1 addOrSub1 list space2)
        `(,addOrSub1 ,@list)))
    (*parser <epsilon>) ;In Meir's parsers
    (*disj 2)
    done))
    
(define <InfixFuncall>
  (new
     
    (*parser <EmptyParser>)
    (*parser <InfixFinal>)

    (*parser <EmptyParser>)
    (*parser (char #\())
    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star
    (*parser <InfixArgList>)
    (*parser <EmptyParser>)
    (*parser <InfixComment>) *star
    (*parser (char #\)))
    (*parser <EmptyParser>)
    (*caten 9)
    (*pack-with 
      (lambda (space open space1 comment1 arglist space2 comment2 close space3)
                  arglist))
    *star
    (*caten 2)
      (*pack-with 
            (lambda (function expression)
                 ; only final:
                (if (equal? 0 (length expression))
                    function
                    ; Length of 1:
                    (if (equal? 1 (length expression))
                        `(,function ,@(car expression))
                        
                     (letrec ((loopPrint
                      (lambda (expression1 lst1)
                         (if (equal? (length lst1) 1) `(,expression1 ,@(car lst1))
                             (loopPrint `(,expression1 ,@(car lst1)) (cdr lst1))))))
                             (loopPrint `(,function ,@(car expression)) (cdr expression)))))))
    
    (*parser <EmptyParser>)
    (*caten 3)
    (*pack-with 
      (lambda (space1 functionOrExpression space2)
                  functionOrExpression))
        done))

(define <InfixPrefixExtensionPrefix>
  (new 
    (*parser <EmptyParser>)
    (*parser (word "##"))
    (*parser (word "#%"))
    (*disj 2)
    (*parser <EmptyParser>)
    (*caten 3)
    done))

(define <InfixSexprEscape>
    (new
    (*parser <EmptyParser>)
    (*parser <InfixPrefixExtensionPrefix>)
    (*parser <EmptyParser>)
    (*delayed (lambda () <sexpr>))
    (*parser <EmptyParser>)
    (*caten 5)
    (*pack-with 
      (lambda (space pre space2 sexpr space3)
          sexpr))
    done))

(define <InfixExpression>

    (new
      (*parser <EmptyParser>)
      (*parser <InfixAddOrSub>)
      
      
      (*parser <EmptyParser>)

      (*caten 3)
      (*pack-with (lambda (space expression space2)
                    expression ))
      done))

(define <InfixExtension>
  (new 
    (*parser <InfixComment>) *star

    (*parser <InfixPrefixExtensionPrefix>) 
    (*parser <InfixExpression>)
    (*caten 3) 
    (*pack-with (lambda (comment1 prefix expre)
                  expre))
    done))

; ====================================================
; ====================================================

(define <sexpr>
  (^<CommentOutPrefix*>
  (new 
    (*parser <EmptyParser>)
    (*parser <Boolean>)
    (*parser <Char>)
    (*parser <Number>)
    (*parser <String>)
    (*parser <Symbol>)
    (*parser <ProperList>)
    (*parser <ImproperList>)
    (*parser <Vector>)
    (*parser <Quoted>)
    (*parser <QuasiQuoted>)
    (*parser <UnquoteAndSpliced>)
    (*parser <Unquoted>)
    (*parser <InfixExtension>)
    (*disj 13)     
    (*parser <EmptyParser>)
    (*caten 3)
    (*pack-with
      (lambda (space expr space2)
        expr))
    done)))

(define <Sexpr> <sexpr>)



; ====================================================
; ====================================================
; ==============     Part 2:  ========================
; ====================================================
; ====================================================
; ====================================================


(load "pattern-matcher.scm")
; --------------------------- Helpers ------------------------------

(define makeBegin
  (lambda (exp)
    (cond
      ((null? exp) (void))
      ((null? (cdr exp)) (car exp))
      (else `(begin ,@exp)))))

; ---------------Meirs Expand-qq-------------------
(define ^quote?
  (lambda (tag)
    (lambda (e)
      (and (pair? e)
     (eq? (car e) tag)
     (pair? (cdr e))
     (null? (cddr e))))))

(define quote? (^quote? 'quote))
(define unquote? (^quote? 'unquote))
(define unquote-splicing? (^quote? 'unquote-splicing))

(define const?
  (let ((simple-sexprs-predicates
   (list boolean? char? number? string?)))
    (lambda (e)
      (or (ormap (lambda (p?) (p? e))
     simple-sexprs-predicates)
    (quote? e)))))

(define ^quote?
  (lambda (tag)
    (lambda (e)
      (and (pair? e)
     (eq? (car e) tag)
     (pair? (cdr e))
     (null? (cddr e))))))

(define quote? (^quote? 'quote))
(define unquote? (^quote? 'unquote))
(define unquote-splicing? (^quote? 'unquote-splicing))

(define const-quasi?
  (let ((simple-sexprs-predicates
   (list boolean? char? number? string?)))
    (lambda (e)
      (or (ormap (lambda (p?) (p? e))
     simple-sexprs-predicates)
    (quote? e)))))

(define quotify
  (lambda (e)
    (if (or (null? e)
      (pair? e)
      (symbol? e)
      (vector? e))
  `',e
  e)))

(define unquotify
  (lambda (e)
    (if (quote? e)
  (cadr e)
  e)))

(define const-pair?
  (lambda (e)
    (and (quote? e)
   (pair? (cadr e)))))


(define expand-qq
  (letrec ((expand-qq
      (lambda (e)
        (cond ((unquote? e) (cadr e))
        ((unquote-splicing? e)
         (error 'expand-qq
           "unquote-splicing here makes no sense!"))
        ((pair? e)
         (let ((a (car e))
         (b (cdr e)))
           (cond ((unquote-splicing? a)
            `(append ,(cadr a) ,(expand-qq b)))
           ((unquote-splicing? b)
            `(cons ,(expand-qq a) ,(cadr b)))
           (else `(cons ,(expand-qq a) ,(expand-qq b))))))
        ((vector? e) `(list->vector ,(expand-qq (vector->list e))))
        ((or (null? e) (symbol? e)) `',e)
        (else e))))
     (optimize-qq-expansion (lambda (e) (optimizer e (lambda () e))))
     (optimizer
      (compose-patterns
       (pattern-rule
        `(append ,(? 'e) '())
        (lambda (e) (optimize-qq-expansion e)))
       (pattern-rule
        `(append ,(? 'c1 const-pair?) (cons ,(? 'c2 const-quasi?) ,(? 'e)))
        (lambda (c1 c2 e)
    (let ((c (quotify `(,@(unquotify c1) ,(unquotify c2))))
          (e (optimize-qq-expansion e)))
      (optimize-qq-expansion `(append ,c ,e)))))
       (pattern-rule
        `(append ,(? 'c1 const-pair?) ,(? 'c2 const-pair?))
        (lambda (c1 c2)
    (let ((c (quotify (append (unquotify c1) (unquotify c2)))))
      c)))
       (pattern-rule
        `(append ,(? 'e1) ,(? 'e2))
        (lambda (e1 e2)
    (let ((e1 (optimize-qq-expansion e1))
          (e2 (optimize-qq-expansion e2)))
      `(append ,e1 ,e2))))
       (pattern-rule
        `(cons ,(? 'c1 const-quasi?) (cons ,(? 'c2 const-quasi?) ,(? 'e)))
        (lambda (c1 c2 e)
    (let ((c (quotify (list (unquotify c1) (unquotify c2))))
          (e (optimize-qq-expansion e)))
      (optimize-qq-expansion `(append ,c ,e)))))
       (pattern-rule
        `(cons ,(? 'e1) ,(? 'e2))
        (lambda (e1 e2)
    (let ((e1 (optimize-qq-expansion e1))
          (e2 (optimize-qq-expansion e2)))
      (if (and (const-quasi? e1) (const-quasi? e2))
          (quotify (cons (unquotify e1) (unquotify e2)))
          `(cons ,e1 ,e2))))))))
    (lambda (e)
      (optimize-qq-expansion
       (expand-qq e)))))

(define makeBegin
  (lambda (exp)
    (cond
      ((null? (cdr exp)) (car exp))
      ((null? exp) *void-object*)
      (else 
        `(begin ,@exp)))))

(define simpleConstant?
  (lambda (sexpr)
    (or 
          (char? sexpr)
          (string? sexpr)
          (number? sexpr)
          (boolean? sexpr))
        ))

(define *reserved-words*
'(and begin cond define do else if lambda
    let let* letrec or quasiquote unquote
      unquote-splicing quote set!))


(define notReserved?
  (lambda (sexpr)
    (not (member sexpr *reserved-words*))))

(define variable?
  (lambda (sexpr)
    (and (not (member sexpr *reserved-words*))
         (symbol? sexpr)
         )))

(define createVoid
  (lambda ()
    (if #f #f)))

(define getRestOfParameters
  (lambda (params)
    (if       
      (and 
        (not (null? params)) (pair? params))
      (getRestOfParameters (cdr params))
      params)))

(define getRequiredParameters
  (lambda (params)
    (if 
      (and 
        (not (null? params)) (pair? params))
        
      (append (list (car params)) (getRequiredParameters (cdr params)))
      '())))

(define begin?
  (lambda (expression)
    (eq? expression 'begin)))
      
      
(define isValidList?
  (lambda (lista)
    (if(null? lista) 
        #t
        (if (not (list? lista))
            #t
      (and (not (member (car lista) (cdr lista)))
         (isValidList? (cdr lista)))))))

(define getValues
  (lambda (lista)
    (map cadr lista)))

(define getVariables
  (lambda (variable lista)
    (let ((variables (cons variable (map car lista))))
      (if (not (isValidList? variables))
         (error 'let "Variables must all be different")
        variables))))

(define isLetVariableList?
  (lambda (lista)
    (and (list? lista) (andmap 
      (lambda (values) (and (equal? (length values) 2) (pair? values)))
       lista))))

(define swapListItem
  (lambda (exp old new)
    (if (list? exp)
        (if (null? exp)
            '()
            (append (list (swapListItem (car exp) old new))
                    (swapListItem (cdr exp) old new)
                    )
            )
        (if (equal? exp old)
            new
            exp)
          )))

(define contains?
  (lambda (exp arg)
    (if (list? exp)
      (ormap (lambda (x)
             (equal? x arg))
           exp
             )
      #f)))
          
  (define parseInnerBegin
    (lambda (expressions)
      (let ((exp (substq 'innerBegin 'begin expressions))
            (applier (lambda (x)
                (tag-parse x))))
         (map applier exp)
     )))
  
  (define expressionWithoutSeq
    (lambda (expression)
      (if (null? expression)
        '()
        (if
          (and (list? (car expression))
                 (equal? 'seq (car (car expression))))
          `(,@(car (cdr(car expression)))
               ,@(expressionWithoutSeq (cdr expression)))
          `(,(car expression) ,@(expressionWithoutSeq (cdr expression))))
          )
      ))

; ------------------------ Tag parser --------------------------------

(define tag-parse
 (let 
    ((run
 (compose-patterns

   ;Null:
   (pattern-rule
     (? 'sexpr null?)
     (lambda (sexpr) '()))
; Number, Boolean, String, Char:   
      (pattern-rule
     (? 'sexpr simpleConstant?)
     (lambda (sexpr) `(const ,sexpr)))
; empty begin:
  (pattern-rule
    `(,(? 'exp begin?))
    (lambda (exp) `(const ,(createVoid))))
;Quotes sexpr:

   (pattern-rule
     `(quote ,(? 'sexpr))
     (lambda (sexpr) `(const ,sexpr)))
    
;Vector:
   (pattern-rule
      (? 'v vector?)
     (lambda (sexpr) `(const ,sexpr)))
      
; -------------- Variables: --------------
   (pattern-rule
      (? 'v variable?)
     (lambda (sexpr) `(var ,sexpr)))
   
; -------------- Conditionals: --------------

; If with no Do if false:
   (pattern-rule
      `(if ,(? 'test) ,(? 'doIfTrue))
     (lambda (test doIfTrue)
       `(if3 ,(tag-parse test) ,(tag-parse doIfTrue)
         (const ,(createVoid))))) 

   ; If with Do if false:
      (pattern-rule
      `(if ,(? 'test) ,(? 'doIfTrue) ,(? 'doIfFalse))
     (lambda (test doIfTrue doIfFalse)
       `(if3 ,(tag-parse test) ,(tag-parse doIfTrue)
         ,(tag-parse doIfFalse)))) 
      
        ; -------------- Sequences: --------------
    ;begin:
    (pattern-rule
    `(innerBegin ,(? 'sexpr) . ,(? 'otherSexpr))
    (lambda (sexpr otherSexpr)
      (if (null? otherSexpr)
      (tag-parse sexpr)
          (let* (
                 (expression (tag-parse sexpr))
                 (others (map tag-parse otherSexpr))
                 )
        (cons expression others))
                   )))
    
  (pattern-rule
    `(begin . ,(? 'others))
    (lambda (others) 
      (cond ((null? others) 
             `(const ,*void-object*))
          ((equal? 1 (length others)) 
           (tag-parse (car others)))
          (else 
            (let ((othersFixed others))
                `(seq ,(expressionWithoutSeq (map tag-parse othersFixed))))))))

  ;set:
  (pattern-rule
    `(set! ,(? 'sexpr) . ,(? 'otherSexpr))
    (lambda (sexpr otherSexpr)
      `(set ,(tag-parse sexpr) ,@(map tag-parse otherSexpr))))
   
; -------------- Disjunctions: --------------

; Or:
   (pattern-rule
      `(or . ,(? 'orExpressions))
     (lambda (orExpressions)
       (if (null? orExpressions)
           `(const #f)
           (if(= (length orExpressions) 1)
           `,(tag-parse (car orExpressions))
       `(or ,(map tag-parse orExpressions)))))) 
   
; -------------- Lambda: --------------

; Lambda:
  (pattern-rule
    `(lambda 
       ,(? 'parameters isValidList?)
       ,(? 'expression) . ,(? 'more-expressions))
    (lambda (parameters expression more-expressions)
      (let ((newExpressions '()))
        (if (null? more-expressions)
                
          (set! newExpressions expression)
          (set! newExpressions
                (append (list 'begin)
                   (list expression) more-expressions)))
        (cond ((list? parameters)
                   `(lambda-simple ,parameters
              ,(tag-parse newExpressions)))
            ((pair? parameters)
            `(lambda-opt ,(getRequiredParameters parameters) ,(getRestOfParameters parameters)
              ,(tag-parse newExpressions)))
            (else
            `(lambda-var ,parameters
              ,(tag-parse newExpressions)))))))
  
  ; -------------- Define: --------------
  (pattern-rule
    `(define ,(? 'variables)  ,(? 'expressions) . ,(? 'others))
    (lambda (variables expressions others) 
    
    (if 
      (and (pair? variables) 
           #t)
       (tag-parse (expandMitDefine variables (makeBegin (cons expressions others))))
       
      `(def ,(tag-parse variables) ,(tag-parse (makeBegin (cons expressions others))))))
  )
  
  ; application
  (pattern-rule
    `(,(? 'function 
          (lambda (reserved?)
               (not (member reserved? *reserved-words*))))
          . ,(? 'arguments))
    (lambda (function arguments)
      `(applic ,(tag-parse function) (,@(map tag-parse arguments)))))



; -------------------------- Macro-Expanding-Special-Forms ----------------------
;let:
  (pattern-rule
    `(let ,(? 'pairs) ,(? 'expressions) . ,(? 'moreExpressions))
    (lambda (pairs expressions moreExpressions)
      (tag-parse (expandLet pairs expressions moreExpressions))
      ))
  
    ; let*:
  (pattern-rule
    `(let* () ,(? 'expression)
        . ,(? 'expressions list?))
    (lambda (expression expressions)
      (tag-parse (expandEmptyLet* (cons expression expressions)))))
  (pattern-rule
    `(let* ((,(? 'variable variable?)
                ,(? 'value)) . ,(? 'others)) . ,(? 'expressions))
    (lambda (variable value others expressions)
      (tag-parse (expandLet* variable value others expressions))))
  
  ;Letrec:
  (pattern-rule
    `(letrec ((,(? 'variable variable?) ,(? 'value)) . ,(? 'others isLetVariableList?)) . ,(? 'expressions))
    (lambda (variable value others expressions)
      (let* (
         (emptyList (list))
          (variables (getVariables variable others))
          (values (cons value (getValues others)))
          (pairs (map (lambda (variable2 value2)
                    `(set! ,variable2 ,value2))
                     variables values))
          (nonVars (map (lambda (value) '#f) values)))
        (tag-parse
          `((lambda (,@variables)
            ,(makeBegin 
              `(,@pairs ((lambda () ,@expressions) ,@emptyList))  
            )) 
            ,@nonVars
          )))))
  
;Letrec empty:
  (pattern-rule
    `(letrec ,(? 'vars list? null?) ,(? 'expression) . ,(? 'expressions list?))
      (lambda (variables expression expressions) 
        (tag-parse
          `((lambda ()
              ((lambda () ,(makeBegin (cons expression expressions)))
               ,@variables)) 
            ,@variables)
          )))
  
; And:
  (pattern-rule
    `(and . ,(? 'expressions))
       (lambda (expressions)
         (if (null? expressions)
             `(const #t)
             (tag-parse (expandAnd expressions)))))

; Cond:
(pattern-rule
  `(cond ,(? 'first) . ,(? 'others))
  (lambda (first others)
    (tag-parse (expandCond first others))))

; Quasiquote:
(pattern-rule
  `(quasiquote . ,(? 'expression))
  (lambda (expression)
    `,(tag-parse (expand-qq (car expression)))))

; Un-quote:
(pattern-rule
  `(unquote . ,(? 'expression))
  (lambda (expression) (tag-parse
      (expand-qq expression))))

; Unquote-splicing
(pattern-rule
  `(unquote-splicing ,(? 'expression))
  (lambda (expression) (tag-parse
      (expand-qq expression))))

;Final:
    )))
 (lambda (sexpr)
 (run sexpr (lambda ()
                (error 'tag-parse 
                       (format "Failed to parse input: ~s" sexpr)))))))

; -------------------------- Macro-Expansions ----------------------
(define expandLetrec
  (lambda (lista . expressions)
    (let* ((first (map car lista))
         (lambdaExpressions (map cdr lista))
         (newFirst `(,@first))
         (bodyFunction `(lambda ,newFirst ,@expressions))
         (afterApplies (map (lambda (lambdaExpressions) `(lambda ,newFirst ,@lambdaExpressions)) lambdaExpressions)))
      (if (isValidList? first)
        `(seq (,bodyFunction ,@afterApplies))
        (error 'letrec "All variables must be different.")))))

(define expandLetrec2
  (lambda (lista . expressions)
    (let* ((first (map car lista))
         (lambdaExpressions (map cdr lista))
         (newFirst `(,@first))
         (bodyFunction `(lambda ,newFirst ,@expressions)))
      (if (isValidList? first)
        `(letrecFunction ,bodyFunction)
        (error 'letrec "Test - for debugging.")))))

(define expandLet*
  (lambda (variable value others expressions)
    (if (null? others) 
      `(let ((,variable ,value)) . ,expressions)
      `(let ((,variable ,value)) (let* ,others . ,expressions)))))
        
(define expandEmptyLet*
  (lambda (expressions)
    `((lambda () ,@expressions))))

  (define expandCond
  (lambda (firstExp restExp)
    (let ((variable1 (car firstExp))
        (expression1 (cdr firstExp)))
      (if (and (> (length expression1) 1) (not (null? expression1)))
        (set! expression1 
              (append (list 'begin) (cdr firstExp)))
        (set! expression1 
              (car expression1)))
      (if (null? restExp)
        (if (eq? variable1 'else)
          expression1
          `(if ,variable1 ,expression1))
        `(if ,variable1 ,expression1 ,(expandCond (car restExp) (cdr restExp)))))))

;Expand and:
(define expandAnd
  (lambda (exressions)
    (cond ((and (null? exressions) (not (list? expressions)))
            '#t)
        ((eq? (length exressions) 1) (car exressions))
        (else `(if ,(car exressions) (and ,@(cdr exressions)) #f)))))

(define expandLet
  (lambda (pairs expressions moreExpressions)
    (let ((variables (map car pairs))
        (values (map cadr pairs))
        (expressions (append (list expressions) moreExpressions))
        )
        
      (if (isValidList? variables)
        `((lambda ,variables ,@expressions) ,@values)
        (error 'let "All variables must be different.")))))

  (define expandMitDefine
    (lambda (variables expressions)
    `(define ,(car variables) 
       (lambda ,(cdr variables) ,expressions))))

  (define parse tag-parse)

; #########################################################
;                        Ass 3:
; #########################################################

;;;;;;;;;;;;   part3: Eliminate nested defines: ;;;;;;;;;;;;;;;

; f == predicate? | new-item == the function to apply on the   
(define (dynamic-map-2 f new-item lst)
  (cond
    ((null? lst) lst)
    ((atom? lst) lst)    
    (else (if (and (list? lst) (f lst))
        (new-item (cons 
          (dynamic-map-2 f new-item (car lst))
          (dynamic-map-2 f new-item (cdr lst))))
          (cons (dynamic-map-2 f new-item (car lst))
                    (dynamic-map-2 f new-item (cdr lst)))))))

(define actual-eliminate-nested-defines
  (lambda (exp)
    (letrec(
        ;Receives: a body of a lambda if it starts with seq 
        ;Returns: list of sets      
        (find-sets
          (lambda(body sets) 
            (cond
              ((atom? body) sets)
              ((and 
                (list? (car body))
                (eq? 'def (caar body)))
                (find-sets
                    (cdr body)
                    (append
                      sets
                      (list 
                        (list
                        ;(var <something>)
                        (cadar body)
                        ;(the set exp)
                        (caddar body))))))
              (else sets))))
        ;Receives: a body of a lambda if it starts with seq 
        ;Returns: body without defines          
        (find-body
          (lambda(body sets) 
            (cond
              ((atom? body) body)
              ((and 
                (list? (car body))
                (eq? 'def (caar body)))
                (find-body
                    (cdr body)
                    (append
                      sets
                      (list 
                        (list
                        ;(var <something>)
                        (cadar body)
                        ;(the set exp)
                        (caddar body))))))
              (else body))))          
        (combine-into-letrec
          (lambda (sets body)
            (cond 
              ((null? sets) body)
              (else
                (let*(
                    (vars
                      (map
                        (lambda (x)
                          (cadr (car x)))
                        sets))
                    (new-sets
                      (map 
                        (lambda (lst)
                          `(set ,(car lst) ,(cadr lst)))
                        sets))                    
                    (end-constf
                      (map 
                        (lambda (lst)
                          `(const #f))
                        sets))
                    (actual-combine-into-letrec
                      `(applic
                        (lambda-simple
                          ,vars
                          (seq ( ,@new-sets
                            ,@body )))
                            ,end-constf)))
                  actual-combine-into-letrec)))))
        );letrec-end

      (combine-into-letrec 
        (find-sets exp '()) 
        (find-body exp '())
      ))))

(define eliminate-nested-defines
  (lambda (exp)
    (dynamic-map-2
      ;f
      (lambda (lst)
        (or
          (and 
            (or
              (eq? 'lambda-simple (car lst))
              (eq? 'lambda-var (car lst)))
            (eq? 'seq (caaddr lst))
            (eq? 'def (caaadr (caddr lst))))
          (and
            (eq? 'lambda-opt (car lst))
            (eq? 'seq (car (cadddr lst)))
            (eq? 'def (caaadr (cadddr lst))))))
      ;new-item
      (lambda (lst)
        (if (eq? 'lambda-opt (car lst))
          `(,(car lst) ,(cadr lst) ,(caddr lst) ,(actual-eliminate-nested-defines (car (cdr (cadddr lst)))))
          `(,(car lst) ,(cadr lst) ,(actual-eliminate-nested-defines (car (cdaddr lst))))
          ))
      exp)
    ))


;;;;;;;;;;;;   part4: Remove redundant applications: ;;;;;;;;;;;;;;;

; f == predicate? | new-item == the function to apply on the   
(define (dynamic-map f new-item lst)
  (cond
    ((null? lst) lst)
    ((atom? lst) lst)    
    (else (if (and (list? lst) (f lst))
        (dynamic-map f new-item (new-item lst))
        (cons (dynamic-map f new-item (car lst))
                  (dynamic-map f new-item (cdr lst)))))))

(define remove-applic-lambda-nil
  (lambda(exp)
    (let* (
        (no-pars-simple-lambda?
          (lambda (lst)
            (and 
              (list? lst)
              (eq? 'lambda-simple (car lst))
              (null? (cadr lst))
              )))
        (helper-pred
          (lambda (lst)
            (and 
                (list? lst)
                (eq? 'applic (car lst))
                (no-pars-simple-lambda? (cadr lst))
                (null? (caddr lst)))
              ))
        (helper-new-item
          (lambda (lst)
            (caddr (cadr lst))
            ))
        )
      (dynamic-map helper-pred helper-new-item exp)
    )))

;;;;;;;;;;;;   part5: Box parameters: ;;;;;;;;;;;;;;;

(define contains
  (lambda (lst item)
    (if (member item lst)
      #t
      #f)))

(define isConst
 (lambda (exp)
    (or (null? exp)
        (not (list? exp))
      )))

(define isLambda
    (lambda (exp)
      (cond 
        ((null? exp) #f)
        ((not (list? exp)) #f)
        (else
    (or 
      (equal? (car exp) 'lambda-simple)
      (equal? (car exp) 'lambda-opt)
      (equal? (car exp) 'lambda-var))))))

(define lambdaDeclaration
  (lambda (exp)
  (car exp)))

(define getBody
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        (caddr proc))
        ((equal? (car proc) 'lambda-opt)
        (cadddr proc))
        ((equal? (car proc) 'lambda-var)
        (caddr proc))
        (else (error 'getBody "Wrong lambda structure given."))
    )))

(define getBodyWithoutSeq
    (lambda (proc)
      (let ((originalBody (getBody proc)))
      (if (equal? (car originalBody) 'seq)
          (cadr originalBody)
        (list originalBody)))))

(define getParamsList
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        `( ,(cadr proc)))
        ((equal? (car proc) 'lambda-opt)
        `(,(cadr proc) ,(caddr proc)))
        ((equal? (car proc) 'lambda-var)
        (list (cadr proc)))
        (else (error 'getParams "Wrong lambda structure given."))

    )))

(define getParams
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        (cadr proc))
        ((equal? (car proc) 'lambda-opt)
        (append (cadr proc) (list (caddr proc))))
        ((equal? (car proc) 'lambda-var)
        (list (cadr proc)))
        (else (error 'getParams "Wrong lambda structure given."))

    )))

(define getAllListsInExpression
  (lambda (expr)
    (if (not (list? expr))
        '()
        (if (null? expr)
            '()
            (if (const? expr)
                '()
      `( ,@(if (not (const? (car expr)))
            (list (car expr))
              '())
             ,@(getAllListsInExpression (car expr))
              ,@(getAllListsInExpression (cdr expr))
    )))
  )))

(define const?
  (lambda (x)
    (cond ((not (list? x)) #t)
          ((null? x) #t)
          ((equal? (car x) 'quote) #t)
          (else #f)
          )
   ))

(define isLambda
  (lambda (exp)
    (if (or (null? exp)
            (not (list? exp))
        )
        #f
    (or (equal? (car exp) 'lambda-simple)
        (equal? (car exp) 'lambda-opt)
        (equal? (car exp) 'lambda-var)
    ))))

(define hasBoundOccurence 
  (lambda (param expression depth)
        (cond
          ((isConst expression) #f)
          ((and (> depth 1) (equal? `(var ,param) expression)) #t)
          ((and (> depth 0) (isLambda expression))
              (if (member param (getParams expression))
                 #f
               (hasBoundOccurence param (getBody expression) (+ depth 1)))
          )
          ((and (= depth 0) (isLambda expression))
               (hasBoundOccurence param (getBody expression) (+ depth 1)))
          (else 
            (ormap (lambda (x) (hasBoundOccurence param x depth)) expression)
                            ))))


(define hasSet
  (lambda (param expression depth)
        (cond 
          ((isConst expression) #f)
          ((and 
            (equal? 'set (car expression))
            (equal? `(var ,param) (cadr expression))) #t)
          ((isLambda expression)
            (if (and (> depth 0) (member param (getParams expression)))
                  #f
                  (hasSet param (getBody expression) (+ depth 1))))
          (else 
            (ormap (lambda (x) (hasSet param x depth)) expression)))
                ))

(define hasGet
  (lambda (param expression depth)
        (cond
          ((equal? `(var ,param) expression) #t)
          ((not (list? expression)) #f)
          ((null? expression) #f)
          ((equal? 'set (car expression))
              (hasGet param (cddr expression) depth))
          ((isLambda expression)
            (if (and (> depth 0) (member param (getParams expression)))
                #f
                (hasGet param (getBody expression) (+ depth 1))))
          (else 
            (ormap (lambda (x) (hasGet param x depth) ) expression)))
                ))

(define shouldReplaceVarsInLambda
  (lambda (param exp)

    (and
      (hasBoundOccurence param exp 0)
      (hasGet param exp 0)
      (hasSet param exp 0)
    )
      ))

(define swapToBoxedParam
  (lambda (param exp)
      (cond 
        ((isConst exp) exp)

        ((isLambda exp)
          (if (member param (getParams exp))
                exp
                `(,(lambdaDeclaration exp)
                  ,@(getParamsList exp)
                   ,(swapToBoxedParam param (getBody exp)))))

        ((and 
          (equal? 'set (car exp))
          (equal? `(var ,param) (cadr exp)))
           `(box-set (var ,param) ,@(swapToBoxedParam param (cddr exp))))

        ((equal? `(var ,param) exp)
          `(box-get ,exp))

        (else 
          (map (lambda (x) (swapToBoxedParam param x)) exp)))
              ))

(define getParametersToBoxInLambda
  (lambda (exp)
    (filter (lambda(x) (shouldReplaceVarsInLambda x  exp)) (getParams exp))
  ))

(define handleBoxingInLambda
  (lambda (exp toSwap)
      (if (null? toSwap)
      exp
    (handleBoxingInLambda
     `(,(lambdaDeclaration exp)
          ,@(getParamsList exp)
            ,(swapToBoxedParam (car toSwap) (getBody exp)))

     (cdr toSwap)
  ))))

(define parameterSetList
(lambda (listOfParams)
  `,(map (lambda (param)
      `(set (var ,param) (box (var ,param)))) listOfParams)))

(define addSettingParamsToBoxes2
  (lambda (exp paramsToChange)
    `(,(lambdaDeclaration exp)
          ,@(getParamsList exp)
      ,(if (null? paramsToChange)
        `(,@(getBody exp))
        `(seq (,@(parameterSetList paramsToChange)
                  ,(if (equal? (car (getBodyWithoutSeq exp)) 'applic)
                     `(,@(getBodyWithoutSeq exp))
                     `(,@(getBodyWithoutSeq exp)))))))))

(define addSettingParamsToBoxes
  (lambda (exp paramsToChange)
    `(,(lambdaDeclaration exp)
          ,@(getParamsList exp)
      ,(if (null? paramsToChange)
        `(,@(getBody exp))
        `(seq (,@(parameterSetList paramsToChange)
      ,@(getBodyWithoutSeq exp)))))))

(define box-set
  (lambda (exp)
        (cond 
      ((isConst exp) exp)
      ((isLambda exp)
        (addSettingParamsToBoxes
        (handleBoxingInLambda 
        `(,(lambdaDeclaration exp)
              ,@(getParamsList exp)
          ,(box-set (getBody exp))) (getParametersToBoxInLambda exp))
             (getParametersToBoxInLambda exp)))
      (else (map box-set exp))
  )))

;;;;;;;;;;;;   part6: Annotate lexical addresses: ;;;;;;;;;;;;;;;

(define getParamsAsOriginal6
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
         (list (cadr proc)))
        ((equal? (car proc) 'lambda-opt)
        (list (cadr proc) (caddr proc)))
        ((equal? (car proc) 'lambda-var)
        (list (cadr proc)))
        (else (error 'getParams "Wrong lambda structure given."))

    )))


(define processLexicalAddresses
  (lambda (exp)
    (annotateLexicalAddress exp '() '('()))))

(define annotateLexicalAddress
  (lambda (exp params env)
    (cond ((not (list? exp)) exp)
        ((null? exp) '())
        ((equal? 'var (car exp)) (getLexicalAddress (cadr exp) params env))
        ((isLambda exp)
          (let ((newParams (getParamsAsOriginal6 exp))
            (paramsList (getParams exp))
              (body (getBody exp)))
            `(,(lambdaDeclaration exp)

             ,@newParams 


           ,(annotateLexicalAddress body paramsList (extendEnv paramsList env)))))
        (else (map annotateLexicalAddress exp (make-list (length exp) params) (make-list (length exp) env))))))


(define extendEnv
  (lambda (param environment)
    (append (list param) environment)))
    
(define getLexicalAddress
  (lambda (variable parameters environment)
    (if (contains parameters variable) 
      `(pvar ,variable ,(findLocation parameters variable 0))
      (lookup variable (cdr environment) 0))))
        
(define lookup
  (lambda (variable environment depth)
    (cond ((null? environment) `(fvar ,variable))
        ((contains (car environment) variable) `(bvar ,variable ,depth ,(findLocation (car environment) variable 0)))
        (else (lookup variable (cdr environment) (+ 1 depth))))))

(define findLocation
  (lambda (lista toFind depth)
    (cond ((null? lista) -1)
        ((equal? (car lista) toFind) depth)
        (else (findLocation (cdr lista) toFind (+ 1 depth))))))

(define pe->lex-pe processLexicalAddresses)

;;;;;;;;;;;;   part7: Annotate tail calls: ;;;;;;;;;;;;;;;

(define atp
  (lambda (exp)
      (annotateTail exp #f)))

; =========================================================== ;


(define annotateTail
        (lambda (expression isTail)
          (if (isConst expression)
                expression
                (let ((tag (car expression)))
                    (cond
                      ((equal? tag 'if3) 
                        (list 'if3 (annotateTail (cadr expression) #f) (annotateTail (caddr expression) isTail) (annotateTail (cadddr expression) isTail)))

                      ((isLambda expression) `(,(lambdaDeclaration expression) ,@(getParamsList expression) ,(annotateTail (getBody expression) #t)))
                      ((equal? tag 'seq) `(seq 
                        (,@(map (lambda (sequence)
                          (annotateTail sequence #f)) (reverse (cdr (reverse (cadr expression))))) 
                          ,(annotateTail (car (reverse (cadr expression))) isTail))))
                      

                      ((equal? tag 'or) `(or (,@(map (lambda (orExp)
                          (annotateTail orExp #f)) (reverse (cdr (reverse (cadr expression))))) 
                            ,(annotateTail (car (reverse (cadr expression))) isTail))))
                    
                     ((and (equal? 'applic (car expression)) (equal? '(fvar set) (cadr expression))) 
                            `(,(if isTail 'tc-applic 'applic) ,(cadr expression)
                                ,(list (caaddr expression) (annotateTail (cadr (caddr expression)) #f))))
                     
                      ((and (equal? 'applic (car expression)) (equal? (cadr expression) '(fvar box-set))) 
                            `(,(if isTail 'tc-applic 'applic) ,(cadr expression)
                                ,(list (caaddr expression) (annotateTail (cadr (caddr expression)) #f))))

                      ((equal? tag 'applic) 
                        (if isTail
                          `(tc-applic ,(annotateTail (cadr expression) #f) ,(annotateTail (caddr expression) #f))
                          `(applic ,(annotateTail (cadr expression) #f) ,(annotateTail (caddr expression) #f))
                        )
                      )
                    ((or  (equal? (car expression) 'set) (equal? (car expression) 'box-set))

                    `(,(car expression) ,(cadr expression)
                     ,(annotateTail (caddr expression) #f)))

                      (else (cons (annotateTail tag isTail) (annotateTail (cdr expression) isTail))) 
                    )
                    ))))

(define annotate-tc atp)


;------------------------------------------------;

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

; =========================================================== ;


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


; =========================================================== ;


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



; =========================================================== ;

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
          "CMP(R0, FALSE);" printNewLine
          "JUMP_EQ(" elseLabel ");" printNewLine
          doIfTrueCode printNewLine
          "JUMP(" exitLabel ");" printNewLine
          elseLabel ":" printNewLine
          doIfFalseCode printNewLine
          exitLabel ":" printNewLine))))

; =========================================================== ;



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
                  "CMP(R0, FALSE);" printNewLine
                  "JUMP_NE(" LabelExit ");" printNewLine
                  (if 
                    (null? (cdr compiled))
                    (string-append LabelExit ":" printNewLine)
                    (loop (cdr compiled))
                  )
                ))))
          (loop compiledList)))))
          
          
; =========================================================== ;
 
          
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


; =========================================================== ;


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
          ((eq? (car exp) 'lambda-var)
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


; =========================================================== ;


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

; =========================================================== ;


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
      "MOV(R1, IMM(" (number->string (+ 4 (car (getFromSymTable (cadr exp))))) ")); // Value of Free var bucket.Address" printNewLine
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
(define t_fraction 123456)
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

(define makeIntConst
 (lambda (ConstToMake)
   (let* (
            (oldMemoryLocation (freeMemory 0))
            (newMemoryLocation (freeMemory 2))
           )
          (GlobalConstTable (list `(,oldMemoryLocation ,ConstToMake (,t_integer ,ConstToMake))))
        ))
 )

(define makeFracConst
 (lambda (ConstToMake)
   (let* (
            (oldMemoryLocation (freeMemory 0))
            (newMemoryLocation (freeMemory 3))
           )
          (GlobalConstTable (list `(,oldMemoryLocation ,ConstToMake (,t_fraction ,(numerator ConstToMake) ,(denominator ConstToMake)))))
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
      ((integer? ConstToMake) (makeIntConst ConstToMake))
      ((number? ConstToMake) (makeFracConst ConstToMake))      
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

; =========================================================== ;

  
(define codeGenConst 
  (lambda (expression env params)
      (string-append
        "/* In constants .. */" printNewLine 
        "MOV(R0,IMM(" (number->string (if (symbol? (cadr expression))
                            (begin (car (getFromSymTable (cadr expression))))
                             (getAddrFromconstantsTable (cadr expression))))  "));"
  )))

; =========================================================== ;
; =========================================================== ;
; =========================================================== ;

; -------------------  Symbol Table: --------------------


(define globalSymbolTable (makeGlobalTable))
(define globalSymbolTableStartAddr (makeGlobalCounter 0))

(define removeDuplicates
  (lambda (toChange listWithoutDuplicates)
    (cond
      ((null? toChange) listWithoutDuplicates)
      ((member (car toChange) listWithoutDuplicates) (removeDuplicates (cdr toChange) listWithoutDuplicates))
      (else (removeDuplicates (cdr toChange) (cons (car toChange) listWithoutDuplicates)))
)))

; =========================================================== ;


(define buildInProcList
  '(+ - * / < > = number? integer? boolean? symbol? char? null? pair? string? zero? vector? procedure? 
      char->integer integer->char string-length string-ref string-set! make-string 
      vector-length vector-ref vector-set! make-vector cons car cdr set-cdr! set-car! list vector apply length symbol->string
      string->symbol eq?)
)

; =========================================================== ;


(define makeNewSymbolTable
  (lambda (symbols)
    (if 
      (null? symbols) 
      (globalSymbolTable 0)
        (begin 
          (globalSymbolTable (createNewSymbolTableEntry (car symbols)))
          (makeNewSymbolTable (cdr symbols))              
        )     
    )))

; =========================================================== ;


(define createNewSymbolTableEntry
  (lambda (symbol)
    (let* 
      (
        (oldMemoryLocation        (freeMemory 0))
        (newMemoryLocation        (freeMemory 5))
      )
      (list `(,oldMemoryLocation ,symbol ,t_symbol 
                                               ,(+ 3 oldMemoryLocation) 
                                               ,newMemoryLocation 
                                               ,(getAddrFromconstantsTable (symbol->string symbol))))
  )))

; =========================================================== ;


(define isInSymbolTable
  (lambda (symbol accumulatedSymbolTable)
    (if 
      (null? accumulatedSymbolTable)
      #f
        (if 
          (equal? (cadr (car accumulatedSymbolTable)) symbol)
          (car accumulatedSymbolTable)
          (isInSymbolTable symbol (cdr accumulatedSymbolTable))
        )
      )))

(define getFromSymTable
  (lambda (symbol)
    (let ((accumulatedSymbolTable (globalSymbolTable 0)))
      (isInSymbolTable symbol accumulatedSymbolTable)
    )
))

; =========================================================== ;


(define testProc11 ; Delete this
  (lambda(x)
    (if (eq? x symbolTableCompiled)
        #t
        #f
             )))

(define symbolTableCompiled
  (lambda ()
    (let (
        (symbolTable (globalSymbolTable 0)))
      (letrec (
            (loop
              (lambda (CurrentTable symbolAddr)
                (if 
                  (null? CurrentTable)
                  (string-append
                    "MOV(INDD(" (number->string symbolAddr) ", 2), 2);" printNewLine
                  )
                    (string-append
                      "MOV(INDD(" (number->string (car (car CurrentTable))) ", 0), IMM(" 
                          (number->string (caddr (car CurrentTable)))  "));" printNewLine
                      "MOV(INDD(" (number->string (car (car CurrentTable))) ", 1), IMM(" 
                          (number->string (cadddr (car CurrentTable))) "));" printNewLine
                      "MOV(INDD(" (number->string (car (car CurrentTable))) ", 2), IMM(" 
                          (number->string  (cadddr (cdr (car CurrentTable)))) "));" printNewLine
                      "MOV(INDD(" (number->string (car (car CurrentTable))) ", 3), IMM(" 
                          (number->string (cadddr (cddr (car CurrentTable)))) "));" printNewLine
                      (initializeSymbols (cadr (car CurrentTable)))
                      "MOV(INDD(" (number->string (car (car CurrentTable))) ", 4), R0);" printNewLine
                      (loop (cdr CurrentTable) (car (car CurrentTable)))
                      ))
                ))
          )
          (loop symbolTable (globalSymbolTableStartAddr 0))
      )
    )))

; =========================================================== ;


(define initializeSymbols
  (lambda (symbol)
    (string-append
      (cond
        ((eq? symbol 'number? ) (codeNameFromName "ISNUMBER"))
        ((eq? symbol 'rational? ) (codeNameFromName "ISRATIONAL"))
        ((eq? symbol 'integer? ) (codeNameFromName "ISINTEGER"))
        ((eq? symbol 'boolean? ) (codeNameFromName "ISBOOLEAN"))
        ((eq? symbol 'char? ) (codeNameFromName "ISCHAR"))
        ((eq? symbol 'null? ) (codeNameFromName "ISNULL"))
        ((eq? symbol 'pair? ) (codeNameFromName "ISPAIR"))
        ((eq? symbol 'string? ) (codeNameFromName "ISSTRING"))
        ((eq? symbol 'symbol? ) (codeNameFromName "ISSYMBOL"))
        ((eq? symbol 'vector? ) (codeNameFromName "ISVECTOR"))
        ((eq? symbol 'procedure? ) (codeNameFromName "ISPROCEDURE"))
        ((eq? symbol 'zero? ) (codeNameFromName "ISZERO"))
        ((eq? symbol '/ ) (codeNameFromName "VAR_DIV"))
        ((eq? symbol '- ) (codeNameFromName "VAR_MIN"))        
        ((eq? symbol '+ ) (codeNameFromName "VAR_PLUS"))
        ((eq? symbol '* ) (codeNameFromName "VAR_MUL"))
        ((eq? symbol '= ) (codeNameFromName "VAR_EQUAL"))
        ((eq? symbol '> ) (codeNameFromName "VAR_GREATERTHAN"))
        ((eq? symbol '< ) (codeNameFromName "VAR_LESSTHAN"))
        ((eq? symbol 'remainder ) (codeNameFromName "REMAINDER"))
        ((eq? symbol 'string-length ) (codeNameFromName "STR_LENGTH"))
        ((eq? symbol 'string-ref ) (codeNameFromName "STR_REF"))
        ((eq? symbol 'string-set! ) (codeNameFromName "STR_SET"))
        ((eq? symbol 'make-string ) (codeNameFromName "MAKE_STRING"))
        ((eq? symbol 'vector-length ) (codeNameFromName "VEC_LENGTH"))
        ((eq? symbol 'vector-ref ) (codeNameFromName "VEC_REF"))
        ((eq? symbol 'vector-set! ) (codeNameFromName "VEC_SET"))
        ((eq? symbol 'make-vector ) (codeNameFromName "MAKE_VECTOR"))
        ((eq? symbol 'cons ) (codeNameFromName "CONS"))
        ((eq? symbol 'car ) (codeNameFromName "CAR"))
        ((eq? symbol 'cdr ) (codeNameFromName "CDR"))
        ((eq? symbol 'set-car! ) (codeNameFromName "SET_CAR"))
        ((eq? symbol 'set-cdr! ) (codeNameFromName "SET_CDR"))
        ((eq? symbol 'vector ) (codeNameFromName "VECTOR"))
        ((eq? symbol 'list ) (codeNameFromName "LIST"))
         ;((eq? symbol 'apply ) (codeNameFromName "APPLY_TC"))
        ((eq? symbol 'length ) (codeNameFromName "LIST_LENGTH"))
        ((eq? symbol 'char->integer ) (codeNameFromName "CHAR_TO_INT"))
        ((eq? symbol 'integer->char ) (codeNameFromName "INT_TO_CHAR"))        
        ((eq? symbol 'symbol->string ) (codeNameFromName "SYMBOL_TO_STR"))
        ((eq? symbol 'string->symbol ) (codeNameFromName "STR_TO_SYMBOL"))
        ((eq? symbol 'eq? ) (codeNameFromName "EQ"))
        ((eq? symbol 'not ) (codeNameFromName "NOT"))
        ((eq? symbol 'denominator ) (codeNameFromName "DENOMINATOR"))
        ((eq? symbol 'numerator ) (codeNameFromName "NUMERATOR"))
        ((eq? symbol 'apply ) (codeNameFromName "APPLY"))

        (else "MOV(R0, 0);")
      )
    )
))

; =========================================================== ;


(define codeNameFromName
  (lambda (labelName)
    (string-append
      "PUSH(LABEL(" labelName ")) // Push code of label;" printNewLine
      "PUSH(IMM(0));" printNewLine 
      "CALL(MAKE_SOB_CLOSURE); // Done." printNewLine
      "DROP(IMM(2));" printNewLine
  )))


(define codeGenDefine
  (lambda (expression env params)

    (let* (
        (newValCompiled (codeGen (caddr expression) env params))
        )

      (string-append
        "/* --- Define: -- */" printNewLine 
        newValCompiled printNewLine
        "MOV(ADDR(" (number->string (+ 4 (car (getFromSymTable (cadr (cadr expression)))))) "), R0);" printNewLine
        "MOV(R0, SOB_VOID);" printNewLine
        printNewLine
        
      )
  )))

; =========================================================== ;



(define codeGenSet
  (lambda (expression env params)
    (cond 
      ((eq? 'fvar (caadr expression))

    (let* (
        (newValCompiled (codeGen (caddr expression) env params))
        )

      (string-append
        "/* --- set! fvar: -- */" printNewLine 
        newValCompiled printNewLine
        "MOV(ADDR(" (number->string (+ 4 (car (getFromSymTable (cadr (cadr expression)))))) "), R0);" printNewLine
        "MOV(R0, SOB_VOID);" printNewLine
        
      )
    ))

    ((eq? 'pvar (caadr expression))

    (let* (
        (newValCompiled (codeGen (caddr expression) env params))
        )

      (string-append
        "/* --- set! pvar: -- */" printNewLine 
        newValCompiled printNewLine

        "MOV(FPARG(" (number->string (+ 2 (GetMajor (cadr expression)))) "), R0);" printNewLine
        "MOV(R0, SOB_VOID);" printNewLine
        
      )
    ))

    ((eq? 'bvar (caadr expression))

    (let* (
        (newValCompiled (codeGen (caddr expression) env params))
        )

      (string-append
        "/* --- set! bvar: -- */" printNewLine 
        newValCompiled printNewLine
        "MOV(R1,FPARG(LOC_ENV));" printNewLine
        "MOV(R2,INDD(R1,IMM(" (number->string (GetMajor (cadr expression))) ")));" printNewLine
        "MOV(R3,INDD(R2,IMM(" (number->string (GetMinor (cadr expression))) ")));" printNewLine
        "MOV(INDD(R2,IMM(" (number->string (GetMinor (cadr expression))) ")), R0);" printNewLine
        "MOV(R0, SOB_VOID);" printNewLine
      )
    ))
  )))

; =========================================================== ;

(define codeGenBox
  (lambda (variable env params)
    (if (equal? (caar variable) 'pvar)
    (let ((getMinor (caddar variable)))
    (string-append
      "MOV(R10, IMM("(number->string getMinor)"));" printNewLine
      "ADD(R10,IMM(2));" printNewLine
        "PUSH(IMM(" (number->string 1) "));" printNewLine   
        "CALL(MALLOC);" printNewLine
        "DROP(IMM(1));" printNewLine  
            "MOV(IND(R0),FPARG(R10));" printNewLine
      ))
    (let (
          (majorIndex (caddar variable))
          (getMinor (car (cdddar variable))))
    (string-append
      "MOV(R1, FPARG(IMM(0)));" printNewLine
      "ADD(R1,INDD(R1,IMM("(number->string majorIndex)")));" printNewLine
        "PUSH(IMM(" (number->string 1) "));" printNewLine   
        "CALL(MALLOC);" printNewLine
        "DROP(IMM(1));" printNewLine
        
          "MOV(IND(R0),INDD(R1,IMM("(number->string getMinor)")));" printNewLine
      ))
    )))
; =========================================================== ;

(define codeGenBoxSet
  (lambda (variable env params)
    (if (equal?  'pvar (caar variable) )
    (let ((expr  
             (cadr variable))
          (getMinor (caddar variable)))
    (string-append
      (codeGen expr env params) printNewLine
      "MOV(R1, IMM("(number->string getMinor)"));" printNewLine
      "ADD(R1,IMM(2));" printNewLine
      
      "MOV(IND(FPARG(R1)),R0);" printNewLine
      ))
    (let ((expr (cadr variable))
          (majorIndex (caddar variable))
          (getMinor (car (cdddar variable))))
    (string-append
      (codeGen expr env params) printNewLine
      
      "MOV(R1, FPARG(IMM(0)));" printNewLine
      "MOV(R1,INDD(R1,IMM("(number->string majorIndex)")));" printNewLine
      "MOV(R1,INDD(R1,IMM("(number->string getMinor)")));" printNewLine
      "MOV(IND(R1),R0);" printNewLine
      ))
    )))


(define codeGenBoxGet
  (lambda (expression env params)
      (if 
        (equal? 'pvar (caar expression) )
          (let ((getMinor (caddar expression)))
        
      (string-append
        "MOV(R10, IMM("(number->string getMinor)"));" printNewLine
        "ADD(R10,IMM(2));" printNewLine
        "MOV(R0,IND(FPARG(R10)));" printNewLine
        ))
          
        (let (
            (getMajor (caddar expression))
            (getMinor (car (cdddar expression))))
      (string-append
        "MOV(R1, FPARG(IMM(0)));" printNewLine
        
        "MOV(R1,INDD(R1,IMM("(number->string getMajor)")));" printNewLine
        "MOV(R1,INDD(R1,IMM("(number->string getMinor)")));" printNewLine
        "MOV(R0,IND(R1));" printNewLine
        
        )))
    ))


(define compileInputFile
  (lambda (expressions)
    (let* (
           
        (parsed (map parse expressions))  
        (eliminated (map eliminate-nested-defines parsed))
        (removed-null-applics (map remove-applic-lambda-nil eliminated))
        (boxed (map box-set removed-null-applics))
        (lexed (map pe->lex-pe boxed))
        (tailed (map annotate-tc lexed))
        )
        (letrec ((loop
                (lambda (expressions)
                  (if
                    (null? expressions)       ;Check for null?

                    ""
                    (string-append
                                          printNewLine
                                          printNewLine

                      (codeGen (car expressions) 0 0) printNewLine
                      printNewLine
                      "CALL(PRINT_R0_VALUE);" printNewLine  printNewLine

                      (loop (cdr expressions))
                    )
                    ))))
            (loop tailed)
        )
    )))

(define getAllConstants
  (lambda (expression)
    (cond 
      ((null? expression) (list))
      ((null? expression) (list))
      ((not (pair? expression)) (list))
      ((not (pair? expression)) (list))
            ((not (pair? expression)) (list))

      ((eq? (car expression) 'const) (topologyRemoveDupAndHandleConsts (cadr expression)))
      (else `(,@(getAllConstants (car expression)) ,@(getAllConstants (cdr expression))))
    )
))

(define topologyRemoveDupAndHandleConsts
  (lambda (expression)
    (cond
      ((pair? expression)
        `(,@(topologyRemoveDupAndHandleConsts (car expression))
             ,@(topologyRemoveDupAndHandleConsts (cdr expression)) ,expression))
      ((symbol? expression)
          `(,(symbol->string expression)
            ,expression))
      ;Check for null?
      ((vector? expression)
        `(,@(apply append (map topologyRemoveDupAndHandleConsts (vector->list expression))) ,expression))
      (else `(,expression)))
))


(define file->string
  (lambda (inputFile)
    (let ((inputPort (open-input-file inputFile)))
          (letrec ((loop
            (lambda ()
              
              (let ((readChar (read-char inputPort)))
                
                
                (if (eof-object? readChar)
                    (begin
                      (close-input-port inputPort)
                      '())
                    (cons readChar (loop)))))))
      (list->string
            (loop))))))


(define compile-scheme-file
  (lambda (inFile outFile)
    (let*   (
           (stringProcFile (file->string "arch/SchemeProcs.scm"))

          (allexpressions (append (readExpressionsFromString stringProcFile) (readExpressions inFile)))
          (parsedexpressions          (map parse allexpressions))
          (eliminated-nested-defines (map eliminate-nested-defines parsedexpressions))
          (no-applic-lambda-nil (map remove-applic-lambda-nil eliminated-nested-defines))
          (boxed (map box-set no-applic-lambda-nil))
          (lexParesedexpressions       (map pe->lex-pe boxed))
          (at-lexParesedexpressions      (map annotate-tc lexParesedexpressions))
          (constants             (getAllConstants at-lexParesedexpressions))
          (allSymbolsInconstants       (filter symbol? constants))
          (needToBeInconstantsTable      constants)
          (needToBeInSymbolTable      (append buildInProcList 
                                              (GetValuesByKey 'fvar at-lexParesedexpressions)
                                               allSymbolsInconstants (filter symbol? (apply append (map GetValueOfSymbols constants)))))
          (needToBeInconstantsTableRDup    (removeDuplicates needToBeInconstantsTable '()))
          (needToBeInSymbolTableRDup    (removeDuplicates needToBeInSymbolTable '()))
          (allSymbolistaringsThatCanAppear  (map symbol->string needToBeInSymbolTableRDup))
        )
        (begin 
          (createconstantsTable allSymbolistaringsThatCanAppear)
          (globalSymbolTableStartAddr (freeMemory 20))
          (makeNewSymbolTable needToBeInSymbolTableRDup)
          (freeMemory 20)
          (createconstantsTable constants)

            (begin
              (writeStringToFile outFile (
              string-append
               (prologue)
                (constantsTableCompiled)
                 (symbolTableCompiled)
                  (compileInputFile allexpressions)
                   epilogue
                 ))
              ))
)))


(define codeGen
  (lambda (expression env params)
    
    (let ((tag (if (null? expression) '() (car expression))))
      (cond
        ((eq? 'if3 tag) (codeGenIf3 expression env params))
        ((eq? 'or tag) (codeGenOr expression env params))
        ((eq? 'seq tag) (codeGenSeq expression env params))
        ((eq? 'lambda-simple tag) (codeGenlambda expression env params))
        ((eq? 'lambda-opt tag) (codeGenlambda expression env params))
        ((eq? 'lambda-var tag) (codeGenlambda expression env params))
        ((eq? 'applic tag) (codeGenApplic expression env params))
        ((eq? 'tc-applic tag) (codeGenTCApplic expression env params))
        ((eq? 'pvar tag) (codeGenPVar expression env params))
        ((eq? 'bvar tag) (codeGenBVar expression env params))
        ((eq? 'fvar tag) (codeGenFVar expression env params))
        ((eq? 'const tag) (codeGenConst expression env params))
        ((eq? 'def tag) (codeGenDefine expression env params))
        ((eq? 'set tag) (codeGenSet expression env params))
        ((eq? 'box-set tag) (codeGenBoxSet (cdr expression) env params))
        ((eq? 'box-get tag) (codeGenBoxGet (cdr expression) env params))
        ((eq? 'box tag)  (codeGenBox (cdr expression) env params))

        
        (else (error 'codegen "Code Generation error!"))

  ))))


(define testProc1
  (lambda(x)
    (if (eq? x (codeGen "PROC" 0 0))
        (codeGen "PROC" 0 0)
        #f
             )))

(define prologue 
  (lambda ()
  (string-append 
    "#include <stdio.h>" printNewLine
        "#include <stdlib.h>" printNewLine
        "#define DO_SHOW 1" printNewLine

        "#include \"arch/cisc.h\"" printNewLine
        "#include \"arch/debug_macros.h\"" printNewLine

        "int main() {" printNewLine
            "#define TRUE 5" printNewLine
            "#define FALSE 3" printNewLine
            "#define SOB_NIL 2"   printNewLine
            "#define SOB_VOID 1"  printNewLine
            "#define LOC_ENV 0"   printNewLine
              "#define NUMOFARGS 1" printNewLine
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


(define epilogue
  (string-append 
    "POP(FP);" printNewLine
    "DROP(IMM(3));" printNewLine
    "PROG_ENDING:" printNewLine
    "STOP_MACHINE;" printNewLine
         "return 0;" printNewLine
    "}" printNewLine
    ))


