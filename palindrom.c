/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  this program take an string and check if it's palindrom or not
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	char t[20];
	int i,palindrom,lenght;
	
	printf("enter the string please : ");
	scanf("%s",&t);
	
	lenght=strlen(t);
	palindrom=true;
	i=0;
	for(i=0;i<lenght;i++){
		if (t[i]!=t[lenght-1]){
			palindrom=false;break;
			}
		}
	if(palindrom==true){
		
			printf("string it is palindrome ");
		}
		else {
			printf("string it is not palindrome ");
		}
	
	return 0;
}
