#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int fact(int);
float stack[20];
int top = -1;
 
void push(float x)
{
		stack[++top] = x;
}
 
float pop()
{
		return stack[top--];
}
 
int main()
{

		
		char op[5];
		char arr[18] = {'+','-','*','/','^','s','c','t','l','C','T','p','P','!','i','I','a','S'};
		printf("\n____________________________________________________________ \n");
		printf("|                           Operator Table                   |\n");
		printf("_____________________________________________________________\n");
		printf("|            Operator          |            Symbol          |\n");
		printf("_____________________________________________________________\n");
		printf("\n");
		for(int i = 0 ; i < 18 ; i++)
		{
				switch(i){
								
								case 0: 			op[0]='a';
												op[1]='d';
												op[2]='d';
												break;
								case 1: 			op[0]='s';
												op[1]='u';
												op[2]='b';
												break;
								case 2: 			op[0]='m';
												op[1]='u';
												op[2]='l';
												break;
								case 3: 			op[0]='d';
												op[1]='i';
												op[2]='v';
												break;
								case 4: 			op[0]='p';
												op[1]='o';
												op[2]='w';
												break;
								case 5: 			op[0]='s';
												op[1]='i';
												op[2]='n';
												break; 
								case 6: 			op[0]='c';
												op[1]='o';
												op[2]='s'; 
												break; 
								case 7: 			op[0]='t';
												op[1]='a';
												op[2]='n';
												break; 
								case 8:			op[0]='l';
												op[1]='o';
												op[2]='g';
												break;
								
								case 9: 			op[0]='s';
												op[1]='e';
												op[2]='c';
												break; 
								case 10: 			op[0]='c';
												op[1]='o';
												op[2]='t';
												break; 
								case 11:			op[0]='n';
												op[1]='P';
												op[2]='r';
												break;
								case 12:			op[0]='n';
												op[1]='C';
												op[2]='r';
												break;
								case 13:			op[0]='f';
												op[1]='a';
												op[2]='c';
												op[3]='t';
												break;
								case 14:		op[0]='i';
												op[1]='s';
												op[2]='i';
												op[3]='n';
												break;
								case 15:		op[0]='i';
												op[1]='c';
												op[2]='o';
												op[3]='s';
												break;
								case 16:		op[0]='i';
												op[1]='t';
												op[2]='a';
												op[3]='n';
												break;
								case 17: 		op[0]='c';
												op[1]='o';
												op[2]='s';
												op[3]='e';
												op[4]='c';
												break; 
								
				}

				printf("|              %s             |                %c           |\n" , op , arr[i] );
				printf("____________________________________________________________ \n");
				printf("\n");


		}


		printf("\n");
		printf("\n");
		printf("\n");
		printf("_______________________________________________________________________________________\n");
		printf("|                                     Precedence Table                                 |\n");
		printf("_______________________________________________________________________________________\n");
		printf("|                       operator                    |            precedence            |\n");
		printf("________________________________________________________________________________________\n");
		printf("| s , c , t , S , T , C , l , ! , p , P , i , I , a |                  1               |\n");
		printf("________________________________________________________________________________________\n");
		printf("|                          ^                        |                  2               |\n");
		printf("_______________________________________________________________________________________\n");
		printf("|                        * , /                      |                  3               |\n");
		printf("_______________________________________________________________________________________\n");
		printf("|                        + , -                      |                  4               |\n");
		printf("_______________________________________________________________________________________\n");

		printf("\n");
		printf("\n");
		printf("\n");











		char exp[20];
		char *e;
		float n1,n2,n3,num;
		printf("Enter the expression :: ");
		scanf("%s",exp);
		e = exp;
		while(*e != '\0')
		{
				if(isdigit(*e))
				{
						num = *e - 48;
						push(num);
				}
				else
				{
						
						switch(*e)
						{
								case '+':
								{
										n1 = pop();
										n2 = pop();
										n3 = n1 + n2;
										
										break;
								}
								case '-':
								{
										n1 = pop();
										n2 = pop();
										n3 = n2 - n1;
										
										break;
								}
								case '*':
								{
										n1 = pop();
										n2 = pop();
										n3 = n1 * n2;
										
										break;
								}
								case '/':
								{
										n1 = pop();
										n2 = pop();
										n3 = n2 / n1;
										
										break;
								}
								
								case 's':
								{
										printf("\n sin( ");
										scanf("%f",&n3);
										n3 = sin((n3)*3.142/180); 
										break;
								}
								case 'c':
								{
										printf("\n cos( ");
										scanf("%f",&n3);
										n3 = cos((n3)*3.142/180); 
										break;
								}
								case 't':
								{
										printf("\n tan( ");
										scanf("%f",&n3);
										n3 = tan((n3)*3.142/180); 
										break;
								}
								case 'S':
								{
										printf("\n cosec( ");
										scanf("%f",&n3);
										n3 = 1/(sin((n3)*3.142/180)); 
										break;
								}
								case 'T':
								{
										printf("\n cot( ");
										scanf("%f",&n3);
										n3 = 1/(tan((n3)*3.142/180)); 
										break;
								}
								case 'C':
								{
										printf("\n sec( ");
										scanf("%f",&n3);
										n3 = 1/(cos((n3)*3.142/180)); 
										break;
								}
								case 'i':
								{
										printf("\n isin( ");
										scanf("%f",&n3);
										n3 = asin(n3)*180/3.142;
										break;
								}
								case 'I':
								{
										printf("\n icos( ");
										scanf("%f",&n3);
										n3 = acos(n3)*180/3.142;
										break;
								}
								case 'a':
								{
										printf("\n itan( ");
										scanf("%f",&n3);
										n3 = atan(n3)*180/3.142;
										break;
								}
								case 'l':
								{
										printf("\n log( ");
										scanf("%f",&n3);
										n3 = log(n3);
										break;
								}
								case '!':
								{
										int d ;
										
										printf("\n !(");
										scanf("%d",&d);
										
										n3 = fact(d) ;
										break;
								}
								case '^':
								{
										n1 = pop();
										n2 = pop();
										n3 = pow(n2,n1);
										
										break;		
								}
								case 'p':
								{
										int d1 ;
										printf("\n nPr n= ");
										scanf("%d",&d1);
										int d2 ;
										printf("\n nPr r= ");
										scanf("%d",&d2);
										if(d1>d2)
										{
											n3 = fact(d1)/fact(d1-d2);
										}
										else{
											printf("Invalid Input !\n");
											exit(0);
										}
										break;

								}
								case 'P':
								{
										int d1 ;
										printf("\n nCr n= ");
										scanf("%d",&d1);
										int d2 ;
										printf("\n nCr r= ");
										scanf("%d",&d2);
										if(d1>d2)
										{
											n3 = fact(d1)/(fact(d2)*fact(d1-d2));
										}
										else{
											printf("Invalid Input !\n");
											exit(0);
										}
										break;

								}

						}
				        push(n3);
				}
				e++;
		}
		printf("\nThe result of expression %s  =  %f\n\n",exp,pop());
		return 0;
 

}




	int fact(int n)
	{
		int f = 1;
		for (int i = 1; i <= n; ++i)
		{
			f *= i;
		}
		return f;
	}
