/*
Author      :  MAKHLOUF Ibrahim
Date        :  16-10-2021
Program     :  even odd number
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	
	printf("entrer le nombre ici -->");
	scanf("%d",&num);
	
	if ((num)%2 == 0)
	{
	printf("\n le nombre est paire");
	}
	else if ((num)%2 != 0)
	{
	printf("\n le nombre est impaire");
	}
	
	getch();
	return 0;
}
