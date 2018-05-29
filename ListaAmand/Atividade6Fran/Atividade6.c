#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
double AreaTrapezio(double basemaior,double basemenor,double altura);

int main(){
double basemaior;
double basemenor;
double altura;
double formula;

	
	printf("Digite o valor da base maior:\n");
		scanf("%lf",&basemaior);
	printf("Digite o valor da base menor:\n");
		scanf("%lf",&basemenor);
	printf("Digite o valor da altura:\n");
		scanf("%lf",&altura);
		formula =AreaTrapezio(basemaior,basemenor,altura);
		printf(" A area do Trapezio é: \n %.2lf",formula);
			
	
	return 0;

	}

double AreaTrapezio(double basemaior,double basemenor,double altura){
	double formulacao;
	 formulacao=(basemaior+basemenor)*altura/2;
	return formulacao;
	}
