#include<stdio.h>
int main(){
int i=4;
int j=5;
void troca(int *p, int *q);
printf("Antes i=%d j=%d \n\n\n",i,j);
troca(&i,&j);
printf("DEPOIS i=%d j=%d",i,j);
return 0;
}
void troca(int *p,int *q){
int temp;
temp=*p;*p=*q;*q=temp;

}
