//10 - Escreva um programa em C para ler os valores e somar duas matrizes 4 x 4. Mostrar a matriz resultante.
#include<stdio.h>
#include<conio.h>
main(){
	int ma[4][3],i,j,ma2[4][4],ma3[4][4];
	for (i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			scanf("%i",&ma[i][j]);
			
			scanf("%i",&ma2[i][j]);
		}
	}
	for (i=0;i<4;i++){
		for(j=0;j<3;j++){
			ma3[i][j]=ma[i][j]+ma2[i][j];
		}
	}
	printf("------------------------------\n\n");
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\n",ma3[i][j]);
		}
	}
}
	
