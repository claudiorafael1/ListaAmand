/*51 - Crie uma fun��o que receba tr�s valores, 'a', 'b' e 'c', que s�o os coeficientes de uma
equa��o do segundo grau e retorne o valor do delta, que � dado por 'b2 - 4ac'*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int delta (int a,int b,int c);
main(){
	int x,y,z,result;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva os valores da funcao: ");
	scanf("%d%d%d",&x,&y,&z);
	result = delta(x,y,z);
	printf("O valor do delta � %d",result);

}

int delta (int a, int b,int c){
	return pow(b,2) - (4*a*c);
}
