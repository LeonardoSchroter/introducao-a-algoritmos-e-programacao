//12 - Escreva um algoritmo para transpor uma matriz 3x4 para outra 4x3. Transpor uma matriz significa transformar suas linhas em colunas e vice-versa.
#include <conio.h>
#include <stdio.h>
#include<math.h>
main(){
	
	int vetor[3][4],vetorb[4][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf(" %d",&vetor[i][j]);
		}
	
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			vetorb[i][j]=vetor[j][i];
		}
	}
	
	
	
	
	
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d]=%d\n",i,j,vetorb[i][j]);
			
		}
	}
}
