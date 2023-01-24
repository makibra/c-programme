/*
Author      :  MAKHLOUF Ibrahim
Date        :  11-11-2021
Program     :  program that take two points and calculate their distance
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double dist;
	int xa,xb,ya,yb;
	
	 printf("entrez les coordonnees du point A :\n");
	 printf("xA : "); scanf("%d",&xa);
	 printf("yA : "); scanf("%d",&ya);
	 
	 printf("entrez les coordonnees du point B :\n");
	 printf("xB : "); scanf("%d",&xb);
	 printf("yB : "); scanf("%d",&yb);
	 
	 dist= sqrt(pow((xa-xb),2)+pow((ya-yb),2));
	 printf("the distance between A & B is : %g",dist);
	return 0;
}

