#include<stdio.h>

int main(){
double v[3];
int i;
double MA,ME;

for(i=0;i<3;i++){
printf("Digite a %d nota :\n",i+1);
scanf("%lf",&v[i]);
}
printf("Digite a media de Exercicio:\n ");
scanf("%lf",&ME);
MA=(v[0]+v[1]*2+v[2]*3+ME)/7;
    if(MA>=90){
     printf("Aprovado com Nota :A");
    }else {
        if(MA>=75&& MA<80){
             printf("Aprovado com Nota :B");
            }else{
                if(MA>=60&&MA<75){
                    printf("Aprovado com Nota :C");
            }else{
                    if(MA>=40&&MA<60){
                     printf("Reprovado com Nota :D");
                    }else{
                         printf("Reprovado com Nota :E");
                    }
            }

    }

 }
 return 0;
	}
