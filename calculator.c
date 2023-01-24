/*
Author      :  MAKHLOUF Ibrahim
Date        :  14-10-2021
Program     :  calculator
*/
#include <stdio.h>

int main ()
{
	
	float pr_n;
	float pr_n2;
	char type;
	float resulta;
	
	printf("entrer la premier valeur ");
	scanf("%f", &pr_n);
	
	printf("entrer le type de l'opiration ");
	scanf(" %c", &type);
	
	printf("entrer la deusiem valeur ");
	scanf("%f", &pr_n2);
	
	if(type == '/') 
	{
		resulta= pr_n/pr_n2	;
	}
	else if (type == '*')
	{
		resulta= pr_n*pr_n2;
    }
    else if (type == '-')
    {
		resulta= pr_n-pr_n2;
	}
	else if (type == '+')
	{
		resulta= pr_n+pr_n2 ;
	}
	
	printf("%g",resulta);
	
	getch();
	return 0 ;
}
