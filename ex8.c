#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main(void){
	char arr[257];arr[256]='\n';
  	printf("input a binary number please:");
	gets(arr);
	int l,i;
	l=strlen(arr);
	char ca1[l+1];ca1[l]='\n';
	char ca2[l+1];ca2[l]='\n';
	for(i=0;i<l;i++){
		if(arr[i]=='1'){
			ca1[i]='0';
			ca2[i]='0';
		}
		if(arr[i]=='0'){
			ca1[i]='1';
			ca2[i]='1';
		}
	}
	for(i=l-1;i>=0;i--){
		if(ca1[i]=='1') ca2[i]='0';
		if(ca1[i]=='0') {
			ca2[i]='1';
			break;	
		}
	}
	printf("the first complement is : %s",ca1);
	printf("the second complement is : %s",ca2);

    return 0 ;
}

