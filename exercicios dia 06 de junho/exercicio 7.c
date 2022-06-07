//7 - Escreva um programa que leia os valores de uma matriz 4x3, e em seguida mostre na tela apenas os valores cuja soma dos índices (i+j) seja um número par.
#include<stdio.h>
#include<conio.h>
main(){
	int ma[4][3],i,j,s;
	
	for (i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			scanf("%i",&ma[i][j]);
		
			
		}
	}
	printf("------------------------------\n\n");
	for (i=0;i<4;i++){
		for(j=0;j<3;j++){
			s=0;
			s+=i+j;
			if (s%2==0){
				
				printf("%i\n",ma[i][j]);
			}
		}
	}
}
