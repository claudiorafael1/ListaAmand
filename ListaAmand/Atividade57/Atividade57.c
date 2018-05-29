#include<stdio.h>
float soma(int *vet,int n){
if(n==0){
return 0;
}else{
int s;
s=soma(vet,n-1);
//s(s+=vet[con]);

return (vet[n]+1,n);

}
}
int main(){
int vet[5]={3,4,5,6,7};
int *v;
int n;
n=0;
v=vet;
int g;
g=soma(v,n);

printf("%f",g);
return 0;
}
