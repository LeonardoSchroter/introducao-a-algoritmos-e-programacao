//2 - Escreva um algoritmo que leia os valores para um vetor de 10 elementos e então mostre na tela a quantidade de números pares e ímpares.
#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	int i, vetor[10],numpar=0,numimpar=0;
	for(i=0;i<10;i++){
		printf("digite o valor %d\n", i);
		scanf("%d",&vetor[i]);
		if (vetor[i]%2==0){
			numpar++;
		}
		else{
			numimpar++;
		}
	}
	printf("tem %d numeros pares e %d numeros impares\n",numpar,numimpar);
}
