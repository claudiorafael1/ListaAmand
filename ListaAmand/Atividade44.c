

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int mat[4][4],mat2[4][4],maior,maior2,vetor[16],vetor2[16],mat3[4][4];

	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
				printf("%d\n",mat[i][j]);
				printf("%d\n",mat2[i][j]);
		}
		
		
	}
	maior = mat[0][0];
	maior2 = mat2[0][0];
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(maior<mat[i][j]){
				vetor[i] = mat[i][j];
				maior = mat[i][j];
			}
			if(maior2<mat[i][j]){
				vetor2[i] = mat2[i][j];
				maior = mat2[i][j];
			}
						
	}
		}
		for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			mat3[i][j] = vetor [j];
			mat3[j][i] = vetor2 [j];
		}
		
		}
		for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		
		printf("%d",mat3[i][j]);

}
}
}
