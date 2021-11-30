%{
	#include<stdio.h>
	#include<string.h>
	#include "project.tab.h"
	#include<stdlib.h>
	#include<math.h>
	yyerror(char *s);
	
%}

variable [a-zA-Z]
digit [0-9]+

cmnt       [ ]*[!][/][^\n]*

mc       [ ]*[!][!][/][^\n]*[!][!][/]

header     [ ]*[!][i][n][c][l][u][d][e][ ]+[a-zA-Z]+[.h]*

string [a-zA-Z]+
keyword		condition|or|loop|rtn|int|float|char|switch|cs|br|dflt|display|prime|rloop|jotokkhon|inc|dec|root|gcd|lcm|fib

%%
[ ]*	    			
[\n]*					
[\t]*
{header}   { printf("Header file include\n");}
{digit}	{ yylval = atoi(yytext); return DATA; }
{variable}	    { yylval = *yytext - 'a'; return VARIABLE; }
{cmnt}       {return COMMENT;}
{mc}           return MC;
int 		 return INT;
char		 return CHAR;
float		 return FLOAT;
"+"        {return ADD;}
"-"    return SUB;
"/"    return DIV;
"*"   return MUL;
"^"    return POW;
"%"   return MOD;
switch   	 return SWITCH;
display 	 return SHOW; 
cs		     return CASE; 
gcd           return GCD;
lcm           return LCM;
fib             return FIB;
condition 	 return IF;
or   		 return ELSE;
br  		 return BREAK;
cin          return CIN;
root         return SQRT;
dflt 	     return DEFAULT; 
"{" 		 return START;  
"}"  		 return END;	
loop		 return LOOP;
rloop        return RLOOP;
jotokkhon     return WHILE;
prime        return PRIME;
inc          return INC;
dec          return DEC;
[<>=,():;]     {yylval = yytext[0];	return *yytext;	}
"suru"	    return MAIN; 					
.						{printf("%s invalid\n",yytext);}
%%

int yywrap(){
	return 1;
}

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
	return 0;
}

yyerror(char *s){
	printf( "%s\n", s);
}
