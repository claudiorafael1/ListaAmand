#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double positiva(double x){
	double aux;
	
	if(x>0){
		aux=x*2;
		
		return aux;
	}else{
			aux=x*3;
		
	
		return aux;
		
		}
	
}

main(void){
	
	printf("Digite um numero:\n");
		double num;
		scanf("%lf",&num);
		double result= positiva(num);
		printf(" Numero digitado: %0.2lf \n  ",result);
		printf("Resultado:\n %0.2lf",result );
	
}
