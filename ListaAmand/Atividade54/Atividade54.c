/* 54 - Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma coluna N e
retorne a soma dos elementos dessa coluna. */

#include <stdio.h>
#include <locale.h>

int soma(int matriz[7][6], int coluna){
	int soma=0, i;

	for(i=0;i<coluna;i++){
		soma+=matriz[i][2]; //escolhi a coluna 3 para fazer essa soma que no caso é a que fica na posição 2
	}
	soma=soma+matriz[i][2];

	return soma;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int m[7][6], i, j;
	for(i=0;i<7;i++){
		for(j=0;j<6;j++){
			printf("Informe o elemento [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	printf("A soma dos elementos é %d", soma(m,6));
	return 0;
}
