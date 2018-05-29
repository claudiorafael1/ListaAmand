#include<stdio.h>
#include<stdio.h>
int func(int x){

if(x==1||x==2){

return 1;
}else{
return func(x-1)+func(x-2);
    }
}
int main(){
int func(int x);
int x,y,a;
y=0;
puts("Digite um numero para sequencia de Fibonacci:\n");
scanf("%d",&x);
a=func(x);
printf("O numero é %d ",a);
return 0;
}

