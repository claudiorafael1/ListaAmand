
#include <stdio.h>

int main()
{
    int n,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo;			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = 1 se o numero dado 'e primo */
	/*  EhPrimo = 0 se o numero dado nao 'e primo       */
int soma=0;
while(n!=0){

    d = 2;
    EhPrimo = 1;

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);

    if (n <= 1)
	EhPrimo = 0;

    while (EhPrimo == 1 && d <= n / 2) {
	if (n % d  == 0)
	    EhPrimo = 0;
	d = d + 1;
    }

    if (EhPrimo == 1){
	printf("%d e' primo \n", n);
        soma+=n;
        }
    else{
	printf(" %d nao e' primo \n", n);
	}

printf("soma \n %d",soma);
}
    return 0;
}
