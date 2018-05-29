#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {

  int i, x,tudo,r;

  int div = 0;


r=2;
while(r!=-1){
  do {
    system("clear");
    printf("Digite um n�mero inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <=0);

  for (i = 1; i <= x; i++) {
    if (x % i == 0) {
     div++;
tudo=+x;
    }
  }

  if (div == 2){
    printf("O n�mero %d eh primo!", x);

    }
  else{
    printf("O n�mero %d nao eh primo! /n", x);
    }
puts("Digite -1 para sair");
scanf("%i",&r);
}
  printf(" a soma do total eh %d",tudo);
  return 0;
}
