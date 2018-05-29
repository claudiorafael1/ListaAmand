#include<stdio.h>
int main(){
int *v;
int i;
for(i=0;i<5;i++){
puts("Digite um valor :\n");
    scanf("%d",v+i);
printf("%d",(*v+i)*2);
    }
}
