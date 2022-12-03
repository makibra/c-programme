#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int power(int n,int m){
	if(m==0) return 1;
	else return(n*power(n,m-1));
}

int main(void){
	char arr[33];arr[32]='\n';
	int i;
  	for(i=0;i<32;i++){
  		arr[i]='0';
	  }
	printf("%s",arr);
	int n,j,after=0;
	do{
	printf("input a integer number please:");
	scanf("%d",&n);
	}while(n<1||n>32);

	for(i=31;i>31-n;i--){
		arr[i]='1';
	}
	printf("%s",arr);

	j=31;
	
	for(i=0;i<32;i++){
		if(arr[i]=='1') after+=power(2,j);
		j--;
	}
	printf("the status number before enabling : 0\n");
	printf("the status number after enabling : %d",after);

    return 0 ;
}

