/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  calculator
*/
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char op;
	int n1,n2;
	float resulta;
	
	printf("entrer la premier valeure puis entrer le type de l opiration puis la deusieme valeur \n ");
	scanf("%d ",&n1);scanf("%c ",&op);scanf("%d",&n2);
	if (op == '*')
	{
		resulta=n1*n2;
    }
    else if (op == '-')
    {
		resulta= n1-n2;
	}
	else if (op == '+')
	{
		resulta= n1+n2;
	}
	else if(op == '/' && n2!=0) 
	{
		resulta= n1/n2	;
	}
	else{ printf("erreur"); 
	}
	if ( op == '*' || op == '-' || op == '+' || (op == '/' && n2!=0)){
	printf("=");
	printf("%g",resulta);
	}
	getch();
	return 0;
}
