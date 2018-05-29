/*Author: Claudio Rafael
 * Date 22/03/2018 "Meu aniversario"
 * Function: Saber quem passou ou não em determinada disciplina
 *
 *
 * */

#include <stdio.h>
int main() {
typedef struct {
int matricula;
double mediafinal;
char nome[55];
}Aluno;
int p=0;
int per=0;
Aluno vet[10];
//Aluno vetPassou[];

int i;
for(i=0;i<2;i++){
printf("Digite o nome do %d  do Aluno:\n",i+1 );
scanf("%s",&vet[i].nome);
printf("Digite a matricula do %d Aluno:\n:",i+1);
scanf("%d",&vet[i].matricula);
printf("Digite a Media final do %d Aluno:\n:",i+1);
scanf("%lf",&vet[i].mediafinal);
if(vet[i].mediafinal>5){
	p++;
}

	else{
				per++;
		}

	}
	Aluno vetpa[p];
	Aluno vetper[per];
	int g=p+per;
	for(i=0;i<g;i++){

		if(vet[i].mediafinal>5){
		vetpa[i]=vet[i];

	}else{
		if(vet[i].mediafinal<5){

			vetper[i]=vet[i];
				}
		}

}
int x=0;
int z= 0;


printf("Lista de Alunos Aprovados:\n");
	for(x=0;x<p;x++){
	printf("Aluno: %s \n",vetpa[x].nome);
	printf("Matricula %i \n ",vetpa[x].matricula);
	printf("MediaFinal %2.lf  \n",vetpa[x].mediafinal);
	printf("----------------------------------------\n");
	}




printf("Lista de Alunos Reprovados:\n");
for(z=0;z<per;z++){
	printf("Aluno: %s \n",vetper[z].nome);
	printf("Matricula: %d \n",vetper[z].matricula);
	printf("Media FInal %2.lf \n",vetper[z].mediafinal);
	printf("----------------------------------------\n");

	}
printf("----------------------------------------\n");



return 0;

}
