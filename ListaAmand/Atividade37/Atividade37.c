/*1 - Crie uma fun��o que recebe uma string e um caractere, e apague todas as ocorr�ncias
desses caractere na string.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	int cont;
	char palavra[20],compara;
   setlocale (LC_ALL,"Portuguese");
   printf("Escreva a palavra: ");
   fgets(palavra,15,stdin);

   printf("Agora escreva um caractere que vc quer comparar: ");
   scanf("%c",&compara);


   for (int i = 0;i<strlen(palavra);i++){
   	   if(palavra[i]== compara){
   	   	 cont++;
		  }
	   if(cont>=1){
	   	palavra[i]='_';
	   }
	   cont=0;
   }
printf("A palavra ficou %s\n",palavra);

}
