
/*5 - Fazer um algoritmo que leia vinte números inteiros armazenando-os em um vetor, a seguir, 
troque o conteúdo da primeira posição do vetor com o conteúdo da décima primeira posição, 
o conteúdo da segunda posição com o da décima segunda, e assim, sucessivamente até trocar o conteúdo da décima 
com o da vigésima e escreva o vetor após estas modificações.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int a,vetor[20],i,subst,c=10;
	//ler vetores
	for(i=0;i<20;i++){
		scanf("%d",&vetor[i]);
			
	}
	//trocar vetores
		for(i=0;i<10;i++){
			subst=vetor[i];
			vetor[i]=vetor[c];	
			vetor[c]=subst;
			c++;		
		}
		for(i=0;i<20;i++){
		printf("[%d]=%d\n",i,vetor[i]);
		}
	
	
	
}
