/*Escrever um programa que receba vários números inteiros no teclado e no final
imprimir a média dos números múltiplos de 3. Para sair digitar 0(zero).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int multi,num,x;

      do{
      	printf("Digite um numero inteiro:  \n");
		scanf("%d",&num);

		if (num%3==0){
		 printf("eh multiplo \n");
		 }
		 else
		  printf("Nao eh multiplo");



	  }while (num!=0);


return 0;
}
