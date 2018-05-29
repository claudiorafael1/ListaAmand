#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
	int ano,q_port;float preco;char marca[30];

}tipocarro;
int main(){

	int q_carro,maiorPorta,maior=0;float tot_preco = 0;char maiorString [30];
	printf("Escreva quantos carros quer cadastrar: ");
	scanf("%d",&q_carro);
	tipocarro carrinho[q_carro];
	for(int i=0;i<q_carro;i++){
		printf("Escreva o ano do carro [%d]: ",i+1);
		scanf("%d",&carrinho[i].ano);
		printf("Escreva a quantidade de portas do carro[%d]: ",i+1);
		scanf("%d",&carrinho[i].q_port);
		printf("Escreva o preço do carro [%d]: ",i+1);
		scanf("%f",&carrinho[i].preco);
		tot_preco = tot_preco + carrinho[i].preco;

		printf("Escreva a marca do carro [%d]: ",i+1);
		fgets (carrinho[i].marca,25,stdin);



	}

	tot_preco = tot_preco/q_carro;
	for (int i=0;i<q_carro;i++){
		(maior<carrinho[i].ano)? maior= carrinho[i].ano : maior +=0;
		printf("A média dos carros é: %.2f e o mais novo é: %d \n, sua marca é %s \n e sua quantidade de portas é %d \n ",tot_preco,maior,carrinho[i].marca,carrinho[i].q_port);


	}


}
