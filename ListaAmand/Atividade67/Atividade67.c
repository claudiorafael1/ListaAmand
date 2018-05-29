/*67-Fa�a um programa que simule a mem�ria de um computador: o usu�rio ir a
especificar o tamanho da mem�ria, ou seja, quantos bytes ser�o alocados do tipo
inteiro. Para tanto, a mem�ria solicitada deve ser um valor m�ltiplo do tamanho do
tipo inteiro. Em seguida, o usu�rio ter a 2 op��es: inserir um valor em uma
determinada posi��o ou consultar o valor contido em uma determinada posi��o. A
mem�ria deve iniciar com todos os dados zerados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int *pMalloc,valor,i,op,memoria,alocar,tam;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Tam: ");
	scanf("%d",&tam);
	pMalloc = (int*)malloc(tam*sizeof(int));
	for (i=0;i<tam;i++){
		*(pMalloc+i) = 0;
	}
	do{

	printf("1- Para inserir valores\n 2-Consultar valor\n 0- Para nada\n");
	scanf("%d",&op);

	switch (op){
		case 1:
			printf("Em qual posi��o vc vai querer?: ");
			scanf("%d",&alocar);
			printf("Insira um valor: ");
			scanf("%d",&valor);
			*(pMalloc+alocar) = valor;

			break;

	    case 2:
	    	printf("Insira um valor de mem�ria para ser consultado");
	    	scanf("%d",&memoria);
	    	printf("%d\n",*(pMalloc+memoria));
	    	break;

	default:
		printf("VAZOU");
	}
}	while(op!=0);
}
