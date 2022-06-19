/*8 - Escreva um programa que leia uma matriz de ordem 5 (ou seja, 5x5) e verifique se a soma dos elementos da 
diagonal principal é igual a soma dos elementos da diagonal secundária.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	
	int vetor[5][5],i,j,sdp=0,sds=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf(" %d",&vetor[i][j]);
		}
	}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if (i==j){
					sdp+=vetor[i][j];
					printf("soma diagonal principal %d\n",sdp);
				}
				if (i==5-1-j){
					sds+=vetor[i][j];
						printf("soma diagonal sec %d\n",sds);
				}
			}
		}
		printf("diagonal principal é %d\n",sdp);
		printf("diagonal secundaria é %d\n",sds);
		if (sdp==sds){
			printf("a soma da diagona principal e secundaria sao iguais");
		}
		else{
			printf("a soma da diagonal principal e secundaria sao diferentes");
		}
}
