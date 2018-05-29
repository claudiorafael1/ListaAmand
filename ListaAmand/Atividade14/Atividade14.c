/*14 - Leia uma data de nascimento de uma pessoa fornecida atraves de tres numeros inteiros:
Dia, Mes e Ano. Teste a validade desta data para saber se esta e uma data valida. Teste se o
dia fornecido e um dia valido: dia > 0, dia . 28 para o mes de fevereiro (29 se o ano for
bissexto), dia . 30 em abril, junho, setembro e novembro, dia . 31 nos outros meses. Teste a
validade do mes: mes > 0 e mes < 13. Teste a validade do ano: ano . ano atual (use uma
constante definida com o valor igual a 2008). Imprimir: �gdata valida�h ou �gdata invalida�h no final
da execucao do programa.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>


main(){
	char bissexto;
	int dia,mes,ano,cont;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva sua data de nascimento: ");
	scanf("%d%d%d",&dia,&mes,&ano);
	printf("O ano � bissexto?: ");
	scanf("%c",&bissexto);
	if (ano<2008){
		if(dia<31){



	if (mes>0 &&mes<13){

	if (mes ==2){
			if (bissexto == 'S'|| bissexto == 's'){
		if(dia>0&&dia<29){

		}

	}else {
		cont++;
	}


	}
}else if (mes==4||mes==6 ||mes==9||mes==11){
	cont ++;
}else if (mes ==1||mes==3||mes==5||mes==7||mes ==8 ||mes==10|| mes==12){
	cont++;
}

}
}
	(cont==1)? printf("Data v�lida"): printf("Data inv�lida");
}
