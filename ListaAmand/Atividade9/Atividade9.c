#include<stdio.h>
#include<math.h>
#include<locale.h>
#define Pi 3.14


 int main(){
    int opcao;
    double raio,h,V,A;

  puts("Software para Calcular area e volume :\n Digite 1 para Cone reto \n 2 para Cilindro \n 3 Esfera :\n");
        scanf("%d",&opcao);
  puts("Digite o raio:\n");
        scanf("%lf",&raio);
  puts("Digite a Altura :\n");
        scanf("%lf",&h);



    switch(opcao){
    case 1:
        V=Pi*raio*raio*(h/3);
        A=Pi*raio*sqrt(pow(raio,2)+pow(h,2));
        printf("Aréa do Cone reto: %lf \n Volume do cone reto: %lf",A,V);
        break;
    case 2:
        V=Pi*pow(raio,2)*h;
        A=pow(Pi,2)*raio*h;
        printf("Aréa do Cilindro %lf \n Valume %lf",V,A);
    break;
       case 3:
       V=4/(3*Pi*pow(raio,3));
       A=4*Pi*pow(r,2);
        printf("Aréa do Esfera %lf \n Valume %lf",V,A);
        break;
    }
 return 0;
 }
