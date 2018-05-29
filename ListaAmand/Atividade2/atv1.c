#include<stdio.h>
#include<stdlib.h>

int transforma(int metro){
	int result;
	result=metro*60;
	return result;
}
int main(){
	int num,aux;
	printf("Digite um numero para converter:\n");
	scanf("%d",&num);
	aux=transforma(num);
	printf("Em metros %d \n",num);
	printf("em centimentros %d",aux);
	
	
	
	}
