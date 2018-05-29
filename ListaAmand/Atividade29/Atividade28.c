/**28 � Fa�a um programa que some os termos de valor par da sequ�ncia de Fibonacci,
cujos valores n�o ultrapassem 4000.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int x=-1,y=1,z=0,i,num,aux =0;
	printf("At� quanto vai a sequ�ncia?: ");
	scanf("%d",&num);
do{
	z=x+y;
	x=y;
	y=z;
	printf("%d",z);
	num--;
	if(z%2==0){
		aux = aux+z;
	}

}while(num>0);
printf("A soma �: %d",aux);

}
