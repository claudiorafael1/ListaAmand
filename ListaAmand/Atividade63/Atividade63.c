#include<stdio.h>
/*63 - Faça um programa que leia três valores inteiros e chame uma função que receba
estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na
primeira variável, o segundo menor valor na variável do meio, e o maior valor na
última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.*/
int ordena( int *p,int *q,int *g){
int temp;
 if((*p>*q)&&(*q>*g)){
temp=*p;
*p=*g;*g=temp;
*q=*q;
printf("1  \n\n\n\n ");
}else if((*g>*q)&&(*q>*p)){
	printf("2  \n\n\n\n ");

}else if((*q>*p)&&(*p>*g)){
temp=*q;
*q=*p;
*p=*g;
*g=temp;

}
return 0;
}
int main(){
int a,b,c;

a=4;b=7;c=3;
ordena(&a,&b,&c);
printf("%d %d %d",a,b,c);

  return 0;
}
