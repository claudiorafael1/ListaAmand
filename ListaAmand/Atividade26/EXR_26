// Escreva um programa que leia um inteiro não negativo N e imprima a soma dos N primeiros
// números primos.
#include<stdio.h>
#include<stdlib.h>
int primo( int n );
main(){
  int num, i , qtn = 0;
  int nu = 2, ret, l, soma = 0;
      printf("\n------------------------------------------------------------------------\n\n");
      printf("  Insira quantos numeros deseja consultar: ");
      scanf("%d",&num);
      printf("\n\n------------- NUMEROS PRIMOS ---------------\n\n    ");
      do{
         ret = primo( nu );
         if(ret != 0){
           printf("%d  ", ret);
           if( l == 10){
             printf("\n\n    ");
             l = 0;
           }
           qtn ++;
           soma+= ret;
           l++;
         }
         nu ++;
      }while(qtn < num);
      printf("\n\n  -------SOMA = %d\n\n",soma);
}
int primo( int n){
  int i, aux = 0;
  for( i = 1; i <= n ; i ++){
    if( n % i == 0 ){
      aux ++;
    }
  }

  if( aux == 2){
    return n;
  }else{
    return 0;
  }
}
