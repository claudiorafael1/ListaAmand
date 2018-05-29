#include<stdio.h>
 typedef  struct{
int dia;
int mes;
int ano;
}Data;
 int main(){
 Data d;
 int Dmax;

	puts(" digite o Dia:\n");
    scanf("%d",&d.dia);
    puts("Digite o mês:\n");
        scanf("%lf",&d.mes);
    puts("Digite o ano:\n");
        scanf("%d%",&d.ano);
if((d.mes==2)&&(d.ano%4 ==0)){
Dmax=29;
}else{
Dmax=28;
if((d.mes==1)||(d.mes==3)||(d.mes==5)||(d.mes==7)||(d.mes==8)||(d.mes==10)||(d.mes==12)){
    Dmax=31;
    }else{
            if((d.mes==2)||(d.mes==4)||(d.mes==6)||(d.mes==9)||(d.mes==10)||(d.mes==11)){
                Dmax=30;
            }
}
}
d.dia++;

if(d.dia>Dmax && d.mes<12){
d.dia=01;
d.mes++;
printf("aaa");
}else if(d.dia>Dmax&&d.mes>12){
    d.dia=01;
    d.mes=01;
    d.ano+=1;
}
printf("%d/%d/%d",d.dia,d.mes,d.ano);
 return 0;
 }
