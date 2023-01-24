/*
Author      :  MAKHLOUF Ibrahim
Date        :  12-11-2022
Program     :  this programe take year and check if it's a leap year
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num;
	printf("entrez une annee et on va tester si elle est bissextile :\n");
	scanf("%d",&num);
	if (num>=0){
		if ((num%100)==0){
			if ((num%400)==0){
				printf("annee bissextile");
			}
			else{
			 printf("annee non bissextile");
			}
		}
		else if ((num%4)==0){
				printf("annee bissextile");
				}
				else {
				printf("annee non bissextile");
				}
	}
	else printf("erreur votre nombre est negative");
	
	return 0;
	
}
