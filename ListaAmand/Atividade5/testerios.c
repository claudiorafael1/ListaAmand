 #include<stdio.h>
int main(){
int numero,a,b,c,d,result;
printf("Digite um numero de 3 digitos:\n");
scanf("%d",&numero);
a=numero%10;
c=numero/pow(10,1);
int aux = c * 10;
int aux2 = aux % 10;
b=numero/pow(10,2);
d=c%10;
result=(a*pow(10,2)+b*pow(10,1)+d*pow(10,0));
printf(" \n primeiro numero %d \n",a);

printf("\n segundo numero %d\n",aux2);
printf("\n terceiro numero %d \n",b);



printf(" numero inverso: \n %d ",result);
return 0;
}
