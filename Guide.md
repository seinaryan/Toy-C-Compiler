# TOY C compiler using C++ tools


### Lexical Analysis with Flex

### Semantic Parsing with Bison


[a-zA-Z_][a-zA-Z0-9_]*    TIDENTIFIER
[0-9]+.[0-9]*             TDOUBLE
[0-9]+                    TINTEGER
"="                      TOKEN(TEQUAL)
"=="                     TOKEN(TCEQ)
"!="                     TOKEN(TCNE)
"<"                      TOKEN(TCLT)
"<="                     TOKEN(TCLE)
">"                      TOKEN(TCGT)
">="                     TOKEN(TCGE)
"("                      TOKEN(TLPAREN)
")"                      TOKEN(TRPAREN)
"{"                      TOKEN(TLBRACE)
"}"                      TOKEN(TRBRACE)
"."                      TOKEN(TDOT)
","                      TOKEN(TCOMMA)
"+"                      TOKEN(TPLUS)
"-"                      TOKEN(TMINUS)
"*"                      TOKEN(TMUL)
"/"                      TOKEN(TDIV)

## BNF grammer

program -> decls stmts

stmts -> stmt | stmt stmts

stmt -> var_decl | func_decl | expr

block -> TLBR stmts TRBR | TLBR TRBR

var_decl -> ident ident | ident ident TEQUAL expr

func_decl -> ident ident TLPAREN func_decl_args TRPAREN block

func_decl_args -> | var_decl | func_decl_args TCOMMA var_decl

ident -> TIDENTIFIER

numeric -> TINTEGER | TDOUBLE

expr -> ident TEQUAL expr |  ident TLPAREN call_args 
TRPAREN | ident | numeric | expr comparison expr | | TLPAREN expr TRPAREN

calls_args ->  | expr | calls_args TCOMMA expr

comparison -> TCEQ | TCNE | TCLT | TCLE | TCGT | TCGE | TPLUS | TMINUS | TMUL | TDIV


### Assembly with LLVM


