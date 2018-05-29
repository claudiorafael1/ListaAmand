#include<stdio.h>
#include<stdlib.h>


main(void){
double pequeno=12000;
double maior=25000;
	double preco;
	double precofim;
		printf("########## Bem vindo a Venda de carros ###############\n");
			printf("Digite o preço do carro:\n");
			scanf("%lf",&preco);
			
			if(preco<=pequeno){
			
				 precofim=preco+(preco*0.5);
				printf("%0.2lf",precofim);
				}else{
						if((preco>pequeno)&&(preco<maior)){
							precofim=preco+(preco*0.10)*0.15;
								printf("%0.2lf",precofim);
							}else{
									if(preco>maior){
										precofim=preco+(preco*0.15)*0.20;
								printf("%0.2lf",precofim);
										}
									
								
								}
						
						
					}
	
	}
