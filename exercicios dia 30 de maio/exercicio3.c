//3 - Escreva um algoritmo que leia valores para dois vetores de 20 elementos e então realize a soma
// dos elementos da mesma posição, armazenando o resultado em um outro vetor.
#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	int i, vetora[20],vetorb[20],vetorc[20],prod;
	for(i=0;i<2;i++){
		printf("digite o valor %d do vetor a e b\n ", i);
		scanf("%d",&vetora[i]);
		scanf("%d",&vetorb[i]);
		
	}
	for (i=0;i<2;i++){
		prod=0;
		prod+=vetora[i]+vetorb[i];
		vetorc[i]=prod;
		
		
		
	}
	for(i=0;i<2;i++){
		printf("valores da matriz 3 indice %d sao %d\n ",i,vetorc[i]);
		}
	getch();
	
}
