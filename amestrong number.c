/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  program that take n and check if n is amestrong number or not
*/
#include<stdlib.h>
#include<stdbool.h>

int power(int n,int m){
	if(m==0) return 1;
	else return(n*power(n,m-1));
}

int len_int(int n){
	if(n==0) return 0;
	else return 1+len_int(n/10);
}

int ames_nmbr(int n,int l){
	int r=n%10;
	if(n==0) return 0;
	else return (power(r,l)+ames_nmbr(n/10,l));	
}

bool amestrong_number(int n){
	int l=len_int(n);
	if (n==ames_nmbr(n,l)) return 1;
	else return 0;	
}

int main(void){

	int n;
    printf("input an integer number please:");
	scanf("%d",&n);
    if(amestrong_number(n)==1) printf("%d is a amestrong number",n);
    else printf("%d is not a amestrong number",n);
    
    return 0 ;
}
