#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(void){
int escolha;

int aux,case2,case3;
int case1=0;
printf("#######Fabrica de Violão #########");
printf("Producao e venda de Vilão \n");
printf("\n 1-Ver estoque(mostra o estoque atual) \n 2-  Registrar produção(Pergunta quantos produtos foram produziados e s Acresce ao estoque) \n 3- Registra venda(PRODUTOS LOCALIZADOS NO ESTOQUE ) \n");

aux=0;

while(aux==0){

scanf("%d",&escolha);
switch(escolha){


	case 1:
	printf("O total de Violões no estoque %d : \n ",case1);
	break;


    case 2:
    printf("Digite o numero de  pra cadastrar violões: \n");
	scanf("%d",&case2);
	case1=case1+case2;
	break;
    case 3:
	 printf("Digite quantos produtos está vendendo:\n");
	scanf("%d",&case3);

	if(case1<case3){
			printf("Não ha produtos suficientes");
		}else{

			case1=case1-case3;
			}
	break;
	}
	printf("Digite 0 para continuar no programa : \n");
	scanf("%d",&aux);
printf("\n 1-Ver estoque(mostra o estoque atual) \n 2-  Registrar produção(Pergunta quantos produtos foram produziados e s Acresce ao estoque) \n 3- Registra venda(PRODUTOS LOCALIZADOS NO ESTOQUE ) \n");


}

}
