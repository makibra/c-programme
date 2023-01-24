/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  max of 3 numbers
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a,b,c;
	printf("enter 3 numbers :\n");
	
	printf(" a :");
	scanf("%d",&a);
	
	printf(" b :");
	scanf("%d",&b);
	
	printf(" c :");
	scanf("%d",&c);
	
	if (a>b && a>c){
	printf("the max is : %d ",a);
	}
	else if(b>c){
		printf("the max is : %d ",b);
		}
		else{
		printf("the max is : %d ",c);	
		}
	
	return 0;
}
