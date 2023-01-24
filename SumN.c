/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  c program that take a integer number then print the sum of all numbers to
			   n whithout using loops
*/
#include<stdlib.h>

int main(void){
	int n;
	printf("input an integer number please:");
	scanf("%d",&n);
	printf("the sum is:%d",n*(n+1)/2);	
	return 0;
}
