%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int arr[105];
%}

/* bison declarations */

%token DATA VARIABLE IF ELSE MAIN INT FLOAT CHAR START END SWITCH CASE DEFAULT BREAK 
%token  PRIME LOOP SHOW COMMENT RLOOP WHILE INC DEC CIN CLASS
%token ADD SUB MUL DIV POW MOD SQRT STRING FLT LCM GCD FIB
%nonassoc IFX
%nonassoc ELSE
%nonassoc SWITCH
%nonassoc CASE
%nonassoc DEFAULT
%left '<' '>'
%left ADD SUB
%left MUL DIV 

/*-------- rules----------- */
%%

program: MAIN ':' START arg END
	 ;

arg:
   | arg statement
   ;

statement: ';'			
    | COMMENT   { printf("//This is comment\n");}
	|BREAK       { break;}
	|CLASS START statement END    { printf("Class %s created\n",$2);}
	| declaration ';'		{ printf("This is a Declaration\n"); }
	| expression ';' 		{   printf("The value of expression= %d\n", $1); $$=$1;}
	| VARIABLE '=' expression ';' {  arr[$1] = $3; printf("Value of the variable= %d\t\n",$3); $$=$3;} 
	
	|LOOP '(' expression '<' expression ')' START statement END {
	                                   if($3>$5)
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                       int i; for(i=$3 ; i<=$5 ; i++) {printf("value of the loop: %d expression value: %d\n", i,$8);} }
									}
    |LOOP '(' expression '>' expression ')' START statement END {
	                                   if($5>$3)
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                       int i; for(i=$5 ; i<=$3 ; i++) {printf("value of the loop: %d expression value: %d\n", i,$8);} }
									}
    |RLOOP '(' expression '>' expression ')' START statement END {
	                                   if($5>$3)
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=$3 ; i>=$5 ; i--) {printf("value of the loop: %d expression value: %d\n", i,$8);} }
									}
	|RLOOP '(' expression '<' expression ')' START statement END {
	                                   if($3>$5)
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=$3 ; i<=$5 ; i++) {printf("value of the loop: %d expression value: %d\n", i,$8);} }
									}
	
	|WHILE '(' expression '>' expression ')' START statement END {
	                                   if($5>$3)
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=$3 ; i>=$5 ; i--) {printf("value of the while loop: %d\n", i);} }
									}
	|WHILE '(' expression '<' expression ')' START statement END {
	                                   if($3>$5)
									   {  printf("Invalid Loop condition\n");
									   }
									   else
									   {
	                                int i; for(i=$3 ; i<=$5 ; i++) {printf("value of the while loop: %d\n", i);} }
									}
	|INC '(' VARIABLE ',' DATA ')' ';' { arr[$3] = arr[$3] + $5;}
	
	|DEC '(' VARIABLE ',' DATA ')' ';' { arr[$3]=arr[$3]- $5; }
	
	|SWITCH '(' expression ')' START B  END

	|IF '(' expression ')' START expression ';' END %prec IFX {
								if($3){
									printf("\nvalue of expression in condition: %d\n",$6);
								}
								else{
									printf("\ncondition value zero in the block\n");
								}
							}
	|IF '(' expression ')' START expression ';' END ELSE START expression ';' END {
								if($3){
									printf("\nvalue of expression in condition: %d\n",$6);
								}
								else{
									printf("value of expression in or: %d\n",$11);
								}
							}
	|SHOW '(' expression ')' ';' {printf("Printing Value %d\n",$3);}
	|PRIME '(' expression ')' ';' { int c=1; for(int i=2;i*i<=$3;i++){ if($3 % i==0){ printf("\n%d is not prime\n",$3); c=0; break;}}
	                                    if(c){ printf("\n%d is prime\n",$3);}}
    |CIN '(' VARIABLE ',' DATA ')' ';'   {  arr[$3]=$5;
                                     printf("input done. Value =%d \n",arr[$3]);   
    									 }
	|SQRT '(' expression ')' ';' {   printf("Value of root=%lf\n", sqrt($3*1.0)); }
	|GCD '(' expression ',' expression ')' ';'  { int n1=$3,n2=$5,g;
	                                            for(int i=1;i<=n1&&i<=n2;i++)
												{
												  if(n1%i==0&&n2%i==0)
												  {
												     g=i;
												
												 }
												 }
											printf("Gcd of %d and %d = %d\n",$3,$5,g);
										}
    |LCM '(' expression ',' expression ')' ';' { int n1=$3,n2=$5,g;
	                                            for(int i=1;i<=n1&&i<=n2;i++)
												{
												  if(n1%i==0&&n2%i==0)
												  {
												     g=i;
												
												 }
												 }
												 int x=n1/g*n2;
											printf("Lcm of %d and %d = %d\n",$3,$5,x);
	
	                                    }
	|FIB '(' expression ')' ';' { int n=$3; int fibo[n+6]; fibo[0]=0; fibo[1]=1; 
	                              printf("The fibonacci series is= %d %d ",fibo[0],fibo[1]);
	                               for(int i=2;i<=n;i++)
								   {
								     fibo[i]=fibo[i-1]+fibo[i-2];
									 printf("%d ",fibo[i]);
								   }
								   printf("\n");
								   
								   }
								   
								   
	;
	
B   : C
	| C D
    ;
C   : C ADD C
	| CASE DATA ':' expression ';' BREAK ';' {printf("Case %d executed and the expression value is=%d\n",$2,$4);}
	;
D   : DEFAULT ':' expression ';' BREAK ';' {printf("Default Case executed and the expression value=%d\n",$3);}
	
declaration : TYPE ID1   
             ;


TYPE : INT   
     | FLOAT  
     | CHAR   
     ;



ID1 : ID1 ',' VARIABLE  
    |VARIABLE  
    ;

expression: DATA				{ $$ = $1; 	}
    |FLT                         { $$ = $1; }
	| VARIABLE						{ $$ = arr[$1]; }
	
	| expression ADD expression	{ $$ = $1 + $3; }

	| expression SUB expression	{ $$ = $1 - $3; }

	| expression MUL expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ if($3){
				     					$$ = $1 / $3;
				  					}
				  					else{
										$$ = 0;
										printf("\ndividing by zero\t");
				  					} 	
				    			}
	| expression MOD expression	{ if($3){
				     					$$ = $1 % $3;
				  					}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\t");
				  					} 	
				    			}
	| expression POW expression	{ $$ = pow($1 , $3);}
	| expression '<' expression	{ $$ = $1 < $3; }	
	| expression '>' expression	{ $$ = $1 > $3; }
	| '(' expression ')'		{ $$ = $2;	}
	;
%%

