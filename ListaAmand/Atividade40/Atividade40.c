/*40 - Crie uma fun��o que recebe uma string e um caractere, e apague todas as ocorr�ncias
desses caractere na string.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	char palavra[20],x;
	int cont;
   setlocale (LC_ALL,"Portuguese");
   printf("Escreva a palavra: ");
   fgets(palavra,15,stdin);
   for(int i=0;i<strlen(palavra);i++){
   	    x=palavra[i];
   	 for (int j=0;j<strlen(palavra);j++){
   	 	 if(palavra[j]==x){
   	 	 	cont++;
	}else {
		cont+=0;
	}
		if(cont>=2){
		palavra[i] = ' ';
	}

		cont=0;
	}


   }
   printf("A palavra ficou %s",palavra);


}
