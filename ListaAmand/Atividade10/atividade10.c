
#include<stdio.h>
main(void){
	int a,aulastotais,aulasassitida;
	double nota1,nota2,teste1,teste2;
	printf("Digite nota da primeira  da  prova: \n");
	scanf("%lf",&nota1);
	printf("Digite nota da segunda  da  prova: \n");
	scanf("%lf",&nota2);
	printf("Digite nota do primeiro teste  : \n");
	scanf("%lf",&teste1);
	printf("Digite nota do segundo teste  : \n");
	scanf("%lf",&teste2);
	printf("Digite quanta aulas essa materia possui em um semestre \n:");
	 scanf("%d",&aulastotais);
	printf("Digite quantas aulas o aluno assistiu \n:");
	 scanf("%d",&aulasassitida);
	 int media;
	 printf("Percentual de aulas assitidas é de  %i.2",(aulastotais*aulasassitida)/100);


double resultado=(nota1*3)+(nota2*5)+(teste1*1)+(teste2*1)/3+5+1+1;
printf(" media final do aluno foi:%lf \n",resultado);


	}
