/*1 - Fazer um algoritmo que leia vinte números inteiros armazenando-os em um vetor, a seguir, troque o conteúdo da primeira posição 
do vetor com o conteúdo da segunda posição, o conteúdo da terceira posição com o da quarta, e assim, sucessivamente 
até trocar o conteúdo da décima nona com o da vigésima e escreva o vetor após estas modificações.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int a,vetor[20],i,subst,c=1;
	//ler vetores
	for(i=0;i<20;i++){
		scanf("%d",&vetor[i]);
			
	}
	//trocar vetores
		for(i=0;i<20;i+=2){
			subst=vetor[i];
			vetor[i]=vetor[c];	
			vetor[c]=subst;
			c+=2;		
		}
		for(i=0;i<20;i++){
		printf("[%d]=%d\n",i,vetor[i]);
		}
	
	
	
}
