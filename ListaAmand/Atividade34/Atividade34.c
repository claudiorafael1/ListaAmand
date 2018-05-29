#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int x,cont,vetor[x],a,i;
	setlocale(LC_ALL,"Portuguese");
	printf("Qual o tamanho da sua sequência?: ");
	scanf("%d",&x);
	for(i = 0;i<x;i++){
		printf("Escreva os números do vetor");
		scanf("%d",&vetor[i]);
	
	}
	for(i =0;i<x;i++){
		for(a=0;a<x;a++){
			if(vetor[i]==vetor[a]){
				cont++;		
		
	}else{
		cont+=0;
	}
	
	printf("O número %d ocorre %d\n",vetor[i],cont);
	cont=0;
}


}
}
