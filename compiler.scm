;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; part 1:
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
(load "pc.scm")


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
        `(append ,(? 'c1 const-pair?) (cons ,(? 'c2 const?) ,(? 'e)))
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
        `(cons ,(? 'c1 const?) (cons ,(? 'c2 const?) ,(? 'e)))
        (lambda (c1 c2 e)
    (let ((c (quotify (list (unquotify c1) (unquotify c2))))
          (e (optimize-qq-expansion e)))
      (optimize-qq-expansion `(append ,c ,e)))))
       (pattern-rule
        `(cons ,(? 'e1) ,(? 'e2))
        (lambda (e1 e2)
    (let ((e1 (optimize-qq-expansion e1))
          (e2 (optimize-qq-expansion e2)))
      (if (and (const? e1) (const? e2))
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

(define eliminate-nested-defines2
  (lambda (x) x))

(define eliminate-nested-defines-and-parse
  (lambda (exp)
    (letrec (
        (helper
          (lambda(lst sets) 
            (cond
              ((atom? lst) (cons sets '()))
              ((and
                (list? (car lst))
                (eq? 'define (caar lst)))
                (helper 
                  (cdr lst)
                  (append 
                    sets 
                    (list 
                      (list (cadar lst) (caddar lst)))))
                )
              (else (cons sets (cdr lst)))
            ))))
    (if (< 1 (length exp))
      (parse `(letrec ,(car (helper exp '())) ,(cdr (helper exp '()))))
      (parse exp)))))

;;;;;;;;;;;;   part4: Remove empty lambdas: ;;;;;;;;;;;;;;;

(define (dynamic-map f new-item lst)
  (cond
    ((null? lst) lst)
    ((atom? lst) lst)    
    (else (if (and (list? lst) (f lst))
        (dynamic-map f new-item (new-item lst))
        (cons (dynamic-map f new-item (car lst))
                  (dynamic-map f new-item (cdr lst)))))))

(define remove-applic-lambda-nil2
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
  (lambda (param expression isFirstLevel)

        (cond
          ((isConst expression) #f)
          ((equal? `(var ,param) expression) #t)
          ((isLambda expression) 
             (if (and (not isFirstLevel) (member param (getParams expression)))
                 #f
                (hasBoundOccurence param (getBody expression) #f)))
          (else 
            (ormap (lambda (x) (hasBoundOccurence param x isFirstLevel)) expression)
                            ))))

(define hasSet
  (lambda (param expression)
        (cond 
          ((isConst expression) #f)
          ((and 
            (equal? 'set (car expression))
            (equal? `(var ,param) (cadr expression))) #t)
          ((isLambda expression)
            (if (member param (getParams expression))
                  #f
                  (hasSet param (getBody expression))))
          (else 
            (ormap (lambda (x) (hasSet param x)) expression)))
                ))

(define hasGet
  (lambda (param expression)
        (cond 
          ((equal? `(var ,param) expression) #t)
          ((not (list? expression)) #f)
          ((null? expression) #f)
          ((equal? 'set (car expression))
              (hasGet param (cddr expression)))
          ((isLambda expression)
            (if (member param (getParams expression))
                #f
                (hasGet param (getBody expression) #f)))
          (else 
            (ormap (lambda (x) (hasGet param x)) expression)))
                ))

(define shouldReplaceVarsInLambda
  (lambda (param exp)
    (display exp)
    (newline)
    (display param)
    (newline)
    (newline)

    (and
      (hasBoundOccurence param exp #t)
      (hasGet param exp)
      (hasSet param exp)

    )
      ))

(define handleLambda
  (lambda (exp)
    (shouldReplaceVarsInLambda (getParams exp) exp)))

(define iterateLambdas
  (lambda (exp)
   (cond 
    ((null? exp) exp)
    ((not (list? exp)) exp)
    ((isLambda exp) (handleLambda exp))
    (else (map iterateLambdas exp)))))



(define swapToBoxedParam
  (lambda (param exp)
      (cond 
        ((isConst exp) exp)

        ((isLambda exp)
          (if (member param (getParams exp))
                exp
                `(,(lambdaDeclaration exp)
                  ,(getParams exp)
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
  (lambda (exp)
    (let ((toSwap (getParametersToBoxInLambda exp)))
      (if (null? toSwap)
      exp
    (handleBoxingInLambda
     `(,(lambdaDeclaration exp)
       ,@(getParamsList exp)
       ,(swapToBoxedParam (car toSwap) (getBody exp))))
  ))))

(define parameterSetList
(lambda (listOfParams)
  `(seq (set ,(map (lambda (param)
      `(set (var ,param) (box (var ,param)))) listOfParams)))))



(define addSettingParamsToBoxes
  (lambda (exp paramsToChange)
    `(,(lambdaDeclaration exp)
      ,@(getParamsList exp)
      ,(if (null? paramsToChange)
        `(,@(getBody exp))
        `(,@(parameterSetList paramsToChange)
      ,@(getBody exp))))))

(define box-set
  (lambda (exp)
        (cond 
      ((isConst exp) exp)
      ((isLambda exp)
        (addSettingParamsToBoxes
        (handleBoxingInLambda 
        `(,(lambdaDeclaration exp)
          ,@(getParamsList exp)
          ,(box-set (getBody exp))))
           (getParametersToBoxInLambda exp)))
      (else (map box-set exp))
  )))

;;;;;;;;;;;;   part6: Annotate lexical addresses: ;;;;;;;;;;;;;;;

(define getParamsAsOriginal6
    (lambda (proc)
      (cond 
        ((equal? (car proc) 'lambda-simple)
        `( ,@(cadr proc)))
        ((equal? (car proc) 'lambda-opt)
        `(,(cadr proc) ,(caddr proc)))
        ((equal? (car proc) 'lambda-var)
        (cadr proc))
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
            `(,(lambdaDeclaration exp) ,newParams ,(annotateLexicalAddress body paramsList (extendEnv newParams env)))))
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

                      ((equal? tag 'applic) 
                        (if isTail
                          `(tc-applic ,(annotateTail (cadr expression) #f) ,(annotateTail (caddr expression) #f))
                          `(applic ,(annotateTail (cadr expression) #f) ,(annotateTail (caddr expression) #f))
                        )
                      )

                      (else (cons (annotateTail tag isTail) (annotateTail (cdr expression) isTail))) 
                    )
                    ))))

(define annotate-tc atp)


;------------------------------------------------;





;----- ayelet functions for testing - (to delete):

;;;;;;;;;;;;;;;;;;;;; Removing redundant applications ;;;;;;;;;;;;;;;;;;;;

(define changingApplicLambdaNil
  (lambda (exp)
     (car (cddadr exp))
  )
)


(define remove-applic-lambda-nil
  (lambda (exp)
  (cond ((not (list exp)) exp)
          ((null? exp) exp)
          ((and (equal? (car exp) 'applic) (equal? (caadr exp) 'lambda-simple) (null? (cadadr exp)) (null? (caddr exp)))
            (remove-applic-lambda-nil (changingApplicLambdaNil exp))) 
          (else (cons (if (list? (car exp)) (remove-applic-lambda-nil (car exp)) (car exp)) (remove-applic-lambda-nil (cdr exp))))
      )
  )
)


(define defGetter
  (lambda (exp rest)
    (letrec ((listDef (list))
        (loop (lambda (exp rest)
            (cond
              ((not (list? exp)) `(,listDef ,exp ,@rest))
              ((null? exp) listDef)
              ((null? rest) (if (equal? (car exp) 'def) 
                      (begin (set! listDef `(,@listDef (set ,(cadr exp) ,(caddr exp)))) listDef)
                      `(,listDef ,exp)))
              ((equal? (car exp) 'def) (begin (set! listDef `(,@listDef (set ,(cadr exp) ,(caddr exp)))) (loop (car rest) (cdr rest))))
              (else `(,listDef ,exp ,@rest)))
        )))
        (loop exp rest)
  )))


(define validSeq?
  (lambda (exp)
    (if (null? exp) #f
    (andmap (lambda (shit) (not (equal? (car shit) 'def))) exp))
  ))

(define varsGetter
  (lambda (exp)
    (map (lambda (exp2) (cadadr exp2)) exp)))

(define falseMaker
  (lambda (exp)
    (map (lambda (exp2) '(const #f)) exp)))

(void)

(define noDefines
  (lambda (exp)
    (letrec ((isValidNoDefList #t)
        (loop (lambda (exp2)
            (cond 
              ((not (list? exp2)) (void))
              ((null? exp2) (void))
              ((equal? (car exp2) 'def) (set! isValidNoDefList #f))
              (else (begin (loop (car exp2)) (loop (cdr exp2))))))))
    (begin (loop exp) isValidNoDefList ))))

(define inLambda 
  (let ((run 
      (compose-patterns
        ;;;;def
        (pattern-rule
        `(def ,(? 'var) ,(? 'val) )
          (lambda (var val)  `(seq ((set ,var ,(eliminate-nested-defines-helper val))) )))
        ;;;;seq
        (pattern-rule
        `(seq ,(? 'exp))
          (lambda (exp)  
            (let ((defExp (defGetter (car exp) (cdr exp))))
                (if (validSeq? (car defExp))
                  (let* ((vars (varsGetter (car defExp)))
                      (falseLst (falseMaker vars)))
                      `(applic (lambda-simple ,vars (seq (,@(eliminate-nested-defines-helper (car defExp)) ,@(eliminate-nested-defines-helper (cdr defExp)))))
                        ,falseLst))
                  (if (null? (car defExp)) 
                    `(seq ,(eliminate-nested-defines-helper exp))
                          (error 'inLambda "Seq in not a valid seq: ~s" ))))))
        (pattern-rule
        (? 'exp)
          (lambda (exp)  (eliminate-nested-defines-helper exp)))
    )))  
      (lambda (e)
        (run e
            (lambda ()
              (error 'parse
                  (format "I can't recognize this: ~s" e)))))))


(define eliminate-nested-defines-helper
  (let ((run 
      (compose-patterns
        ;;;;lambda
        (pattern-rule
        `(lambda-simple ,(? 'vars) ,(? 'body) )
          (lambda (vars body) `(lambda-simple ,vars ,(inLambda  body ))))
        (pattern-rule
        `(lambda-var ,(? 'vars) ,(? 'body) )
          (lambda (vars body) `(lambda-var ,vars ,(inLambda  body ))))
        (pattern-rule
        `(lambda-opt ,(? 'vars) ,(? 'var) ,(? 'body) )
          (lambda (vars var body) `(lambda-opt ,vars ,var ,(inLambda  body ))))
        (pattern-rule
        (? 'exp)
          (lambda (exp)  
            (cond
              ((null? exp) exp) 
              ((not (list? exp)) exp)
              ((list? (car exp)) `(,(eliminate-nested-defines-helper (car exp)) ,@(eliminate-nested-defines-helper (cdr exp))))
              (else `(,(car exp) ,@(eliminate-nested-defines-helper (cdr exp)))))))
    )))
      (lambda (e)
        (run e
            (lambda ()
              (error 'parse
                  (format "I can't recognize this: ~s" e)))))))


(define eliminate-nested-defines
  (lambda (exp)
    (let ((noNestedDefines (eliminate-nested-defines-helper exp)))
      (if (noDefines (cdr noNestedDefines))
        noNestedDefines
        (error 'define "tibeten calender ~s" ))
      )
    ))

(define test1

        '(lambda () (define (a . b) a) 1)

)
;(display "parse:\n")
;(parse test1)

;(display "eliminate-nested-defines:\n")
;(eliminate-nested-defines (parse test1))

;(display "remove-applic-lambda-nil:\n")
;(remove-applic-lambda-nil (eliminate-nested-defines (parse test1)))


;(display "box-set:\n")
;(box-set (remove-applic-lambda-nil (eliminate-nested-defines (parse test1))))

;(display "pe->lex-pe:\n")
;(pe->lex-pe(box-set (remove-applic-lambda-nil (eliminate-nested-defines (parse test1)))))

;(display "annotate-tc:\n")
;(annotate-tc (pe->lex-pe(box-set (remove-applic-lambda-nil (eliminate-nested-defines (parse test1))))))



(define test12  '
(lambda-simple
  ()
  (applic
    (lambda-simple
      (a)
      (seq ((set (var a) (lambda-var b (var a))) (const 1))))
    ((const #f))))

)

(box-set test12)


;'(applic
;  (lambda-simple
;    (a)
;    (applic
;      (lambda-simple (a)
 ;(seq ((set (var a) (const 1)) (var a))))
;      ((const #f))))
;  ((applic
;     (lambda-simple
;       (b)
;       (applic
;         (lambda-simple (b) (seq ((set (var b) (const 2)) (var b))))
;         ((const #f))))
;     ((const 1)))))
