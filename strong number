/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  program that take n and check if n is strong number or not
*/
#include<stdlib.h>
#include<stdbool.h>

int fact(m){
	if(m==1||m==0) return 1;
	else return(m*fact(m-1));
}

int stng_nmbr(int n){
	int r=n%10;
	if(n==0) return 0;
	else return fact(r)+stng_nmbr(n/10);	
}

bool strong_number(int n){
	if (n==stng_nmbr(n)) return 1;
	else return 0;	
}

int main(void){

	int n;
    printf("input an integer number please:");scanf("%d",&n);
    if(strong_number(n))printf("%d is a strong number",n);
    else printf("%d is not a strong number",n);
    
    return 0 ;
}
