/*20 - Escreva um algoritmo em C que leia um peso na Terra e o n�mero de um planeta e
imprima o valor do seu peso neste planeta. A rela��o de planetas � dada a seguir
juntamente com o valor das gravidades relativas � Terra:F = G x M1 x M2 / R2 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	float f;
	int peso,number;
	
	printf("Digite o peso do planeta e o n�mero dele: ");
	scanf("%d%d",&peso,&number);
	switch (number){
		case 1:
			f= peso*0.37;
			printf("%d",f);
		break;
		case 2:
			f= peso*0.88;
			printf("%d",f);
		break;
		case 3:
			f= peso*0.38;
			printf("%d",f);
		break;
		case 4:
			f= peso*2.64;
			printf("%d",f);
		break;
		case 5:
			f= peso*1.15;
			printf("%d",f);
		break;
		case 6:
			f= peso*1.17;
			printf("%d",f);
		break;
		default:
		printf("Vc saiu: ");
	}



}
