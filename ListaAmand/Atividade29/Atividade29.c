/*29 - Escreva um programa que receba como entrada o valor do saque realizado pelo
cliente de um banco e retorne quantas notas de cada valor ser�o necess�rias para
atender ao saque com a menor quantidade de notas poss�vel. Ser�o utilizadas notas de
100, 50, 20, 10, 5, 2 e 1 real.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int saque,cont1,cont2,cont3,cont4,cont5,cont6,cont7;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Quer tirar quanto?: ");
	scanf("%d",&saque);
	do {
		if (saque>100){
			saque = saque-100;
			cont1++;
		}else if(saque>50){
			saque = saque-50;
				cont2++;

		}else if (saque>20){
			saque = saque -20;
				cont3++;
		}else if (saque>10){
			saque = saque -10;
				cont4++;
		}else if(saque>5){
			saque = saque -5;
				cont5++;
		}else if(saque>2){
			saque = saque -2;
				cont6++;
		}else if (saque>1){
			saque = saque-1;
			cont7++;
		}

	}while (saque>0);
	printf("%d%d%d%d%d%d%d",cont1,cont2,cont3,cont4,cont5,cont6,cont7);

}
