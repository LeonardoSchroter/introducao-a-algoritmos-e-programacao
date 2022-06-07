//6 - Escreva um programa em C que faça atribuição automática dos valores da matriz 3x3, utilizando os índices. Em seguida apresente os valores da diagonal principal.
#include<stdio.h>
#include<conio.h>
main(){
	int ma[3][3],i,j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			ma[i][j]=i*j;
		
			
		}
	}
		for (i=0;i<3;i++){
			for(j=0;j<3;j++){
			if(i==j){
				printf("%i\n",ma[i][j]);
		}
			
			}
			
	}
}
	
	
	

