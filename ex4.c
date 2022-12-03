#include<stdlib.h>
#include<stdbool.h>

int main(void){

	int i,j,n;
	do {
    printf("input an integer number please:");
	scanf("%d",&n);
   	}while(n<=3);
   	for(i=1;i<=n;i++){
   		printf("*");
	}
	
	for(i=1;i<=n-2;i++){	
		printf("\n*");
		for(j=1;j<=n-2;j++){
			printf(" ");		
		}
		printf("*");
	}
	printf("\n");
    for(i=1;i<=n;i++){
   		printf("*");
	}
    return 0 ;
}
