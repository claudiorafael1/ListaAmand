/*31 - Fazer um programa que l� um conjunto de 10 valores e os imprime ordenados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(){
	int tam,aux,maior;

	printf("Tam: ");
	scanf("%d",&tam);
int vetor[tam];
	maior = vetor [0];
	for (int i = 0;i<tam;i++){
		printf("Escreva os valores");
		scanf("%d",&vetor[i]);

	}
	for (int i = 0;i<tam;i++){
		for (int j=0;j<tam;j++){
		     if (vetor[i]<vetor[j+1]){
		     	aux = vetor[i];
		     	vetor[i]= vetor[j];
				vetor [j] = aux;

			 }
		}

		}

	for (int i = 0;i<tam;i++){
	     printf("%d",vetor[i]);
	}
return 0;
	}
