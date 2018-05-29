/* 69 - . Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em  ´ um vetor de double, depois use a função MALLOC para reservar
(alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor
deve ter um tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como
um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios
(usando a função rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
primeiros elementos do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	double *vetor = 0;
	double tam = 0;
	int i;

	do{
	printf("Informe o tamanho de um vetor igual ou maior que 10: ");
	scanf("%lf", &tam);
	}while(tam<10); // um do while de levs pra prevenir os usuários que não obedecem a gente


	vetor = (double *)malloc(tam * sizeof(double)); // alocando a quantidade de memória necessária


	srand(time(NULL));
	printf("\n\t\tTodos os valores do vetor:");
	for(i=0;i<tam;i++){
		vetor[i] = rand() % 100; // preenchendo aleatorimente

		printf("\nValor %d: %.1lf", i+1, vetor[i]); // mostrando todos os valores de acordo com o tamanho que o user informou
	}

	printf("\n\t\t10 primeiros valores do vetor: \n");
	for(i=0;i<10;i++){
	printf("\nValor %d: %.1lf", i+1, vetor[i]); // mostrando apenas os 10 primeiros valores
	}
	return 0;
}
