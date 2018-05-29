#include<stdio.h>
#define Pi 3.14
int main(){
double graus,r,form;
printf("Digite o angulo em graus: \n");
    scanf("%lf",&graus);
    r=(graus*Pi)/180;
printf("Angulo em radianos :\n %lf",r);
return 0;
}
