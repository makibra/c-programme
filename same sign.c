/*
Author      :  MAKHLOUF Ibrahim
Date        :  15-10-2021
Program     :  the program check if two numbers has the same sign
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int x,y,p;
	printf("enter two numbers x and y non nul \n");
	do {
	printf("x : ");
	scanf("%d",&x,"\n");	
	}while(x==0);
	
	do {
	printf("y : ");
	scanf("%d",&y,"\n");	
	}while(y==0);
	
	
	p=x*y;
	
	if (p<0) { 
		printf("x & y has not the same sign");
	}	
	else{
	printf("x & y has the same sign");
	}
	
	return 0;
}
