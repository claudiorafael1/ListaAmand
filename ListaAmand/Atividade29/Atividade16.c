#include<stdio.h>
#include<string.h>
 double imc(double peso,double altura,char sexo[1]){
	double aux;
	if((sexo=='m')||(sexo=='M')){
		 aux=(peso*altura)-58;
	return aux;
		}else{
				if((sexo=='F')||(sexo=='f')){
					
					aux=(peso*altura)-44.7;
					
					}
			}
	
	return aux;
	}
int main(){
	double peso,altura,im;
	char sexo[1];
	printf("Digite uma peso :\n");
	scanf("%lf",&peso);
	printf("Digite uma altura :\n ");
	scanf("%lf",&altura);
	
	printf("Digite sexo sendo: m p/ masculino e F p/ Feminino:");
		scanf('%c',&sexo);
		im=imc(peso,altura,sexo);
	printf("Pesso ideal: %lf \n",im);
return 0;
}
