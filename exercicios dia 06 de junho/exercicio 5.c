
/*5 - Fazer um algoritmo que leia vinte n�meros inteiros armazenando-os em um vetor, a seguir, 
troque o conte�do da primeira posi��o do vetor com o conte�do da d�cima primeira posi��o, 
o conte�do da segunda posi��o com o da d�cima segunda, e assim, sucessivamente at� trocar o conte�do da d�cima 
com o da vig�sima e escreva o vetor ap�s estas modifica��es.*/
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
