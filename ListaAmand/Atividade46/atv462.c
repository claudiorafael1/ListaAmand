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
for(i=0;i<1;i++){
printf("Digite o nome do %d  do Aluno:\n",i+1 );
scanf("%s",&vet[i].nome);
printf("Digite a matricula do %d Aluno:\n:",i+1);
scanf("%d",&vet[i].matricula);
printf("Digite a Media final do %d Aluno:\n:",i+1);
scanf("%lf",&vet[i].mediafinal);
}

Aluno passou[10];
Aluno perdeu[10];

for (i=0; i<1; i++){
	if (vet[i].mediafinal > 5){
		passou[i] = vet[i];

printf("Aluno aprovado:\n nome %s",passou[i].nome);

	} else {
		perdeu[i] = vet[i];
	}
}

return 0;
}
