#include<stdio.h>
#include<locale.h>
#define CAFE 3.14;
int main(){
	int produtos=0;
	int c;
	double aux;
	int es;
	char nome[45];
		
		printf("Digite o nome do produto :\n");
		scanf("%s",nome);
		
es=0;
while(es!=4){
	printf("Digite 1- para ver o estoque \n 2- Registrar Produção \n 3 para Registrar a venda \n 4- para sair \n ");
		scanf("%d",&es);
	switch(es){
	case 1:
			printf("quantidade: %d \n",produtos);
		
	break;
	case 2 :	
		   printf("Digite quantos produtos foram produzidos\n:");
		   scanf("%d",&c);
		   
		   produtos=produtos+c;		
   break;
	case 3:
	     	printf("Digite quantos produtos foram vendidos \n :");
	     
	 	    scanf("%d",&c);
	 	    
	  if(produtos<c){
		printf("Impossivel realizar retirada \n\n\n \n ");
	
	}else
		aux=c*CAFE;
		printf("Custaŕá  %2.lf",aux);
	
		produtos=produtos-c;
	break;
	
			}
	}
}
