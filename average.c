/*
Author      :  MAKHLOUF Ibrahim
Date        :  21-10-2021
Program     :  program that take marks of MI1 student and calculate his average
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float an,algo,alg,sm,t,en,el,moy;
	const a=1,b=2,c=3,d=4;
	
	printf("la moyanne des examens \n");
	printf("entrez la note de l'examen d'analyse1 ");scanf("%f",&an);
	printf("entrez la note de l'examen d'algèbre1 ");scanf("%f",&alg);
	printf("entrez la note de l'examen d'algorithmes ");scanf("%f",&algo);
	printf("entrez la note de l'examen de structure machine ");scanf("%f",&sm);
	printf("entrez la note de l'examen de terminologie ");scanf("%f",&t);
	printf("entrez la note de l'examen d'englais ");scanf("%f",&en);
	printf("entrez la note de l'examen d'elicronique ");scanf("%f",&el);
	
	moy=((an+algo)*d+(alg+sm)*c+el*b+(en+t)*a)/18;
	printf("votre moyanne des examens est %.2f",moy);

	return 0;	

}
