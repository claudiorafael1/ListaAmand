#include<stdio.h>
#include<stdlib.h>
double farenheit(double c){
	int f;
	f=c*(9.0/5.0)+32.0;
	return f;
	}

int main(){
	double aux,f;
	printf("Digite a temperatura em Celsius:");
	scanf("%lf",&aux);
	f=farenheit(aux);
	printf("A temperatura em  Farenheits: %.2lf",f);
	
	}
