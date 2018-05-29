/*25 - Dados um inteiro positivo n e uma sequ�ncia de n inteiros positivos, determinar o
m�ximo divisor comum a todos eles*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int x,maior;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Digite o primeiro valor: ");
	scanf("%d",&x);
	maior =x;

	while (x!=0){
		printf("Digite os valores: ");
		scanf("%d",&x);
		if (maior<x){
			maior =x;
		}

	}
	printf("%d",maior);
}
