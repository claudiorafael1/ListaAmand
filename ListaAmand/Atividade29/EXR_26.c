// 26	– Faça um programa que calcule o menor número divisível por cada um dos números de 1 a 20?
// Ex: 2520 e o menor número que pode ser dividido por cada um dos números de 1 ´ a 10, sem sobrar resto.
#include<stdio.h>
#include<stdlib.h>
main(){
  int valor, divisor = 1;
  int n_d = 10, vez = 0;
  printf(" \n __________ menor divisor __________\n\n");
  printf("  Informe um valor: ");
  scanf("%d",&valor);
  do{
    if( n_d % divisor  == 0  ){
      vez ++;
      divisor++;
    }else{
      vez = 0;
      divisor = 1;
      n_d++;
    }
  }while( vez < valor);
  printf(" \n\n___ menor divisor de 1 - %d\n\n    --->>> %d \n",valor,n_d);
}
