/*
Author      :  MAKHLOUF Ibrahim
Date        :  30-11-2022
Program     :  Create a c program that take a integer number n
				then choose one of this operations:
				1. prints all it digits
				2. print the sum of odd digit only
				3. print the sum of even digit only
				4. print the sum of all it's digit
				5. print the sum of digits in the odd position
				starting from 1
				6. print the sum of digits in the even position
				starting from 1
*/
#include<stdlib.h>
void print_all_digits(int n){
	int r;
	if(n==0) return;
	else {
		r=n%10;
		print_all_digits(n/10);
		printf("%d\n",r);
	}
}

int sum_odd_digit(int n){
	int r;
	if(n==0) return 0;
	else {
		r=n%10;
		if (r%2==1) return r+sum_odd_digit(n/10);
		else return 0+sum_odd_digit(n/10);
		}
}

int sum_even_digit(int n){
	int r;
	if(n==0) return 0;
	else {
		r=n%10;
		if (r%2==0) return r+sum_even_digit(n/10);
		else return 0+sum_even_digit(n/10);
		}
}

int sum_all_digit(int n){
	int r;
	if(n==0) return 0;
	else {
		r=n%10;
		return r+sum_all_digit(n/10);
		}
}

int sum_odd_position(int n){
	int r;
	if(n==0) return 0;
	else {
		r=n%10;
		return r+sum_odd_position(n/100);
		}
}

int sum_even_position(int n){
	int r;
	if(n==0) return 0;
	else {
		r=n%10;
		return r+sum_even_position(n/100);
		}
}

int main(void){

    int n,o;
    printf("input an integer number please:");scanf("%d",&n);
    printf("chose operation please:");scanf("%d",&o);
	switch (o){
		case 1:
			print_all_digits(n);
			break;
		case 2:
			n=sum_odd_digit(n);
			printf("the sum of odd digits only :%d",n);
			break;
		case 3:
			n=sum_even_digit(n);
			printf("the sum of even digits only :%d",n);
			break;
		case 4:
			n=sum_all_digit(n);
			printf("the sum of all digits :%d",n);
			break;
		case 5:
			n=sum_odd_position(n);
			printf("the sum of odd position digits :%d",n);
			break;
		case 6:
			n=sum_even_position(n/10);
			printf("the sum of even position digits :%d",n);
			break;
		default:
			printf("error");
			break;
	}

    return 0 ;
}
