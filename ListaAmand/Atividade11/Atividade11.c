#include<stdio.h>

int  main() {
int vetint[4];
int aux,z,maior,menor;
int i=0;

printf("Digite um numero:\n");
scanf("%d",&vetint[0]);
//5 6 7
printf("Digite um numero:\n");
scanf("%d",&vetint[1]);
printf("Digite um numero:\n");
scanf("%d",&vetint[2]);

for(i=0;i<4;i++){
aux =vetint[i];
while(aux>vetint[i+1]){
  z=vetint[i+1];

  vetint[i]=z;
vetint[i+1]=aux;

}
if(i==2){
if(vetint[1]<vetint[0]){
  aux=vetint[1];
  z=vetint[0];
  vetint[1]=z;
  vetint[0]=aux;
}
}
/*if(vetint[i]==3){
if(vetint[3]>vetint[0]){
  z=vetint[0];
  vetint[3]=z;


}

}
*/
 }

 for(i=0;i<3;i++){

printf("\n\n %d \n",vetint[i]);

  }



  return 0;
}
