#include<stdio.h>
#include<stdlib.h>
int main (){
int n,i,g,count;
int *v;
puts("Digite um numero para comparar :\n");
scanf("%d",&g);
puts("Digite o tamanho do vetor que queres criar :\n");
    scanf("%d",&n);
int *ve;
v=(int *) malloc(n*sizeof(int));
for(i=0;i<n;i++){
    printf("Digite os numeros :\n");
        scanf("%d",v+i);
    }

  printf("Multiplos :\n");
for(i=0;i<n;i++){
            if(v[i]%g==0){
                printf(" \n %d ",v[i]);
                    count++;
            }
    }
     printf(" \nQuantidade de multipos %d",count);
return 0;
}
