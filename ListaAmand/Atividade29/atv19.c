#include<stdio.h>
#include<math.h>
int main(){
	
double x;
printf("Digite  um numero :\n ");
scanf("%lf",&x);
if(x<=1){
printf("%d\n",1 );
}else{

    if((x<1)&&(x<=2)){
      printf("%d",2);

    }else{
		if(x<2&&x<=3){
			printf("%lf :  \n",pow(x,2));
			}else{
					if(x>3){
						
						printf("%lf",pow(x,3));
						}
				}
		}


}
return 0;

}
