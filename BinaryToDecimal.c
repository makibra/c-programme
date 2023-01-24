/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :   c program that take a binary number and
				convert it to a decimal number, the binary number
				cannot exceed 256 bits.
*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int power(int n,int m){
	if(m==0) return 1;
	else return(n*power(n,m-1));
}

int main(void){
	char arr[257];arr[256]='\n';
  	printf("input a binary number please:");
	gets(arr);
	int l,j,i,dec=0;
	l=strlen(arr);
	j=l-1;
	for(i=0;i<l;i++){
		if(arr[i]=='1') dec+=power(2,j);
		j--;
	}
	printf("the decimal number is : %d",dec);

    return 0 ;
}

