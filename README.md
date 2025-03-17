# 문자열 값
문자열 값은 문자 배열 타입의 값입니다.

`"` `문자들` `"` 형태로 씁니다. `문자들`는 큰 따옴표 `"`, 역슬래시 `\`, 엔터를 제외한 0개 이상의 문자고, 특수문자 문법을 쓸 수도 있습니다. 

문자열 값 여러개가 연속해서 있으면 이어붙여집니다. 

#### 코드 예시:
```c
char c[6] = 'a'; /* 'a'는 문자 a에 해당하는 정수 값을 의미합니다 */
```

#### 관련 C89 표준
[3.1.4 String literals](https://port70.net/~nsz/c/c89/c89-draft.html#3.1.4)
> **Description**
>
> A character string literal is a sequence of zero or more multibyte characters enclosed in double-quotes,
>
> The same considerations apply to each element of the sequence in a character string literal ... as if
> it were in an integer character constant ... , except that the single-quote ' is represntable either by itself
> or by the escape sequence \', but the double-quote shall be represented by the escape sequence ].
>
> **Semantics**
>
> A character string literal has static storage duration and type "array of char", and is initialized with the given characters.
> ... Character string literals that are adjacent token are concatenated into a single character string literal.
> A null character is then appended.
>
> Identical string literals ... need not be distinct. If the program attempts to modify a string literal ... , the behavior is undefined. 
