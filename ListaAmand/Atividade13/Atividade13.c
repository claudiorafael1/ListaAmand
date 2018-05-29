#include<stdio.h>
 typedef  struct{
int dia;
int mes;
int ano;
}Data;
int main(){
int i,anom,mdia,mmes;
Data data[2];
Data d1,d2;
puts("Digite uma data nno formato dd/mm/aa :\n");
for(i=0;i<2;i++){
	puts(" digite o Dia:\n");
    scanf("%d%*c",&data[i].dia);
    puts("Digite o mês:\n");
        scanf("%d%*c",&data[i].mes);
    puts("Digite o ano:\n");
        scanf("%d%*c",&data[i].ano);
    }

    if(data[0].ano>data[1].ano){
        anom=data[0].ano;
        mdia=data[0].dia;
        mmes=data[0].mes;
    }else{
            if(data[1].ano>data[0].ano){
                anom=data[1].ano;
                mdia=data[1].dia;
                mmes=data[1].mes;


        }   else{
            if(data[1].ano==data[1].ano){

                 if(data[0].mes>data[1].mes){
                   anom=data[0].ano;
                   mdia=data[0].dia;
                   mmes=data[0].mes;
                }else if(data[1].mes>data[0].mes){
                    anom=data[1].ano;
                   mdia=data[1].dia;
                   mmes=data[1].mes;
                }else if(data[1].mes==data[0].mes){
                        if(data[0].dia>data[1].dia){
                            anom=data[0].ano;
                            mdia=data[0].dia;
                            mmes=data[0].mes;

                        }else if(data[1].dia>data[0].dia){
                             anom=data[1].ano;
                            mdia=data[1].dia;
                            mmes=data[1].mes;
                        }else {
                          puts("As datas são iguais");
                        }
                    }

                }
            }


        }

        printf("A maior data é  %d/%d/%d",mdia,mmes,anom);

    }


