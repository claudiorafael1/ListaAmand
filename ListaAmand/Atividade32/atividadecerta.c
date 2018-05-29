#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	int x;
	
	int vetor[5];
	int aux[5];
	int num,result,h;
	printf("Digite um numero para comparar :\n");
	scanf("%d", &h);
	for(x=0;x<5;x++){
	printf("Digite um numero:\n ");
	scanf("%d", &num);
	vetor[x]=num;
	result=vetor[x]%h;
	if(result==0){		
			aux[x]=vetor[x];
		}
	//printf ("%d", aux[x]);
	}
	printf("Os divisores são\n");
	for(x=0;x<5;x++){
		printf("%d \n",aux[x]);
		}
	return 0;
}
