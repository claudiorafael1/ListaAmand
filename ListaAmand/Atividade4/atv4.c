#include<stdio.h>
int requadrado(int a ){
	a=a*a;
return a;
}
int main(void){
int vet[3];
int result;
	int a,Z;
	for(int i=0;i<3;i++){
		printf("Digite um numero inteiro:\n");
		scanf("%d",&a);
		Z=requadrado(a);
		vet[i]=Z;
		printf("%d \n",Z);
		result=result+vet[i];
			if(i==2){

				for(int i=0;i<3;i++){
	
					printf("%d\n",vet[i]);
	
					}
			}
	}
printf("A  soma dos quadrados é :\n %d ",result);
	}
