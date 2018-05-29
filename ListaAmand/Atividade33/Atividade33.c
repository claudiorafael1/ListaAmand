/*33 - Fac �a um programa que calcule o desvio padr�o de um vetor v contendo n = 10
n�meros, onde m e a m�dia do vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int tam = 10,desviopadrao;
	float vetor [tam];
	setlocale(LC_ALL,"PORTUGUESE");
	for (int i =0;i<tam;i++){
		printf("Escreva o valor: ");
		scanf("%f",vetor[i]);
		desviopadrao =  desviopadrao + sqrt((1/n-1) + pow((vetor[i]-m)));
	}

}printf("%d",desviopadrao);
