#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define G 10

double calculaTempo(double h){
	double d=(G*(pow(h,2)))/2;
	//double aux=sqrt(h);
	return d;
	}
	/*
	double calculaDistancia(G,double t){
	double distancia=(g*pow(G,2))/2;
		}*/

main(void){
printf("Esse software Realiza calco referente a Quedas livres \n");
double a,velo,distancia,resultado;
printf("Digite altura :\n");
scanf("%lf",&a);
resultado=calculaTempo(a);

printf(" o tempo de queda foi:%0.2lf",resultado);



	}
