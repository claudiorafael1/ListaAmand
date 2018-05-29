#include<stdio.h>
int inverte(int num1,int num2,int num3);

 int inverte(int num1,int num2,int num3){
	
	 if((num1>num2)&&num3<num2){
		 printf("%d ",num3);
		 printf("%d ",num2);
		 printf("%d",num1);
		 
		 }else{
			if((num2>num1)&&(num3>num2)){
				printf("%d ",num2);
				printf("%d ",num3);
				printf("%d",num1);
			
						
				 }
			 }/*if((num1>num2)&&num2>num3){
				printf("%d ",num3);
				
				printf("%d ",num2);
				printf("%d",num1);		
				 }*/
	 return 0;
	 }
int main(){
	 int num1,num2,num3;
	printf("Digite o primeiro numero");
		scanf("%d",&num1);
		printf("Digite o segundo numero");
		scanf("%d",&num2);
			printf("Digite o teceiro numero");
		scanf("%d",&num3);
		printf(inverte(num1,num2,num3));
return 0;
	}
