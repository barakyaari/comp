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