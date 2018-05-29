#include<stdio.h>
int main(){
	 float nota1[5];
	float nota2[5];
	 float nota3[5];

     float media[5];
	int i;
	int x;
	int z;


	for(i=0;i<5;i++){
		printf("Digite a primeira nota:\n");
		scanf("%f",&nota1[i]);
		printf("Digite a segunda nota:\n");
		scanf("%f",&nota2[i]);
		printf("Digite a terceira nota:\n");
		scanf("%f",&nota3[i]);



		media[i] = (nota1[i]+nota2[i]+nota3[i])/3;
		///for(x=0;x<3;x++){


		if(media[i]>=7){
			printf(" Aluno  %d obteve Media %f:  Aprovado\n",i,media[i] );
			}else{
				printf("Reprovado");
				}


}
	return 0;
	}

