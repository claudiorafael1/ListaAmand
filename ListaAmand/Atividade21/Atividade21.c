#include<stdio.h>
#include<locale.h>
int main(){

int produtoescalar,i;
int vetor[6];
int vet[6];
for( i=0;i<6;i++){

printf("Digite um valor para posição do vetor1: %d \n ",i+1 );
scanf("%d",&vetor[i]);
printf("Digite um valor para posição do vetor2  %d: \n",i+1 );
scanf("%d",&vet[i]);

produtoescalar=produtoescalar+vetor[i]+vet[i];
}

printf("%d",produtoescalar );
return 0;
}
