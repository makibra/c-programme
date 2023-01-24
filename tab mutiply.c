/*
Author      :  MAKHLOUF Ibrahim
Date        :  22-10-2021
Program     :  tab mutiply
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,m,vf;
	
	printf("enter the number that you want his tab mutiply :");scanf("%d",&n);

	for(m=0 ; m<=10 ; m++){
		vf=m*n;
		printf("%d * %d = %d \n",n,m,vf);
	}
	getch();
	return 0;
}
