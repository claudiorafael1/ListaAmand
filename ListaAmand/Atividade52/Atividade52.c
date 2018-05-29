#include <stdio.h>
#include <locale.h>

//Prototipo da função
double fatorial(int n);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero;
	double f;
	printf("Informe o número para calcular o fatorial: ");
	scanf("%d", &numero);

	//chamando a função
	f = fatorial(2*numero) / fatorial(numero); // Basicamente a diferença do fatorial normal pro quádruplo é na hora de chamar a função

	printf("Fatorial quádruplo de %d é %.0lf",numero, f);

	return 0;
}

double fatorial(int n){
	double fat;

	if(n <= 1){
		//caso base
		return 1;
	}else{
		//chamada recursiva
		fat = n*fatorial(n-1);
		return fat;
	}
}
