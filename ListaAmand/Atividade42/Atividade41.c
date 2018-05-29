/*Desenvolva um programa que leia uma matriz 5x5  e troque os valores da linha pela coluna (obtendo a mtatriz transposta), como resultado escreva a matriz obtida.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
setlocale(LC_ALL,"PORTUGUESE");
int nl,nc,i,j;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o n�mero de linhas: ");
	scanf("%d",&nl);
	printf("Escreva o n�mero de colunas: ");
	scanf("%d",&nc);

	int mat[nl] [nc],mat2[nl][nc];
	system("cls");
	for( i = 0;i<nl;i++){
		for( j=0;j<nc;j++){
			printf("Escreva os valores da matriz [1] na posi��o[%d][%d]: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
			mat2[j][i] = mat[i][j];

	}
}
	for(i =0;i<nl;i++){
		printf("\n	|");
		for(j=0;j<nc;j++){
			printf(" [%d]",mat[i][j]);

		}
		printf("|");
	}
for(i =0;i<nl;i++){
		printf("\n	");
		for(j=0;j<nc;j++){
			printf(" [%d]",mat2[i][j]);
			printf(" ");

		}
	}
}
