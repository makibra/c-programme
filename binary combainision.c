/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :   Create a c program that takes a integer>=1 and <=5
				number then print all binary combainision possible in
				modulo of that number.
*/
#include<stdlib.h>
#include<stdbool.h>

char arr[5];

void binary(int n){
	if (n<1)
	printf("%s \n",arr);
	else{
		arr[n-1]='0';
		binary(n-1);
		arr[n-1]='1';
		binary(n-1);
	}
}

int main(void){

	int n;
	do {
    printf("input an integer number please:");
	scanf("%d",&n);
	}while(n<=0||n>5);
	
	binary(n);

    return 0 ;
}
