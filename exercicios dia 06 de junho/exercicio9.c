/*9 - Escreva um programa que leia uma matriz de ordem 5 e verifique se os elementos da diagonal principal 
(da esquerda para a direita) são os mesmos da diagonal secundária (direita pra esquerda).*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	
	int vetor[5][5],dp[5],ds[5],i,j,c=0,e=0,co=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf(" %d",&vetor[i][j]);
		}
	}
	for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if (i==j){
					dp[c]= vetor[i][j];
					c++;
				}
				if (i==5-1-j){
					ds[e]= vetor[i][j];
					e++;
				}
			}
		}
	for(i=0;i<5;i++){
	
		if(dp[i]==ds[i]){
			co++;
		}
		
	}
			if(co==5){
			
			printf("as diagonais secundaria e principal são iguais");
		}
		else{
			printf("as diagonais secundaria e principal são diferentes");
			
		}
	
}
