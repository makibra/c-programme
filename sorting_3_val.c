/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  argemment 3 values
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c,temp;
	printf("enter 3 values :\n a : ");scanf("%d",&a);
	printf("\n b : ");scanf("%d",&b);
	printf("\n c : ");scanf("%d",&c);
	
	if (a>b){
		{temp=a;
		a=b;
		b=temp;
		}
	}
	if (b>c){
		{temp=b;
		b=c;
		c=temp;
		}
	}
		if (a>b){
		{temp=a;
		a=b;
		b=temp;
		}
	}
	printf("valeus after arragement : \n");
	printf("a : %d\n",a);
	printf("b : %d\n",b);	
	printf("c : %d\n",c);
	return 0;
}
