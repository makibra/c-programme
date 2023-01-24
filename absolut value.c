#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float x;
	printf("entrer une valeur : ");
	scanf("%g",&x);
	
	if (x<0){
		printf("la valeur absolu est : %g",x*-1);
	}	
	else {
		printf("la valeur absolu est : %g",x);
	}
	
	
	getch();
	return 0;
}
