/*6) Escreva um algoritmo que leia o placar de um jogo da primeira fase da copa do Brasil. Caso o time de fora tenha ganho 
o jogo por mais de 2 gols de diferen�a, mostre na tela uma mensagem indicando que o time de fora j� se classificou para a 
pr�xima fase. Caso contr�rio, mostre uma mensagem indicando que os dois times ir�o se enfrentar novamente em um novo jogo.

ex: time da casa 4 x 3 time de fora, mostra "Os dois times se enfrentar�o em um novo jogo"

ex2: time da casa 1 x 3 time de fora, mostra "O time de fora j� se classificou"

plus: caso ocorra um segundo jogo, leia o placar desse novo jogo e ent�o diga quem passou de fase.*/
#include<stdio.h>
main(){
	int tf,tc;
	printf("escreva o valor de gols do time da casa e do time de fora,respectivamente\n");
	scanf("%d",&tc);
	scanf("%d",&tf);
	if (tf-tc>2){
		printf("o time de fora se classificou\n");
		
	}
	else {
		printf("os times se enfrentarao novamente\n");
	}
	printf("escreva o placar do novo jogo,primeiramente inserindo quantos gols fez o time de casa\n");
	scanf("%d",&tc);
	scanf("%d",&tf);
	if (tc>tf){
		printf("o time de casa ganhou\n");
	}
	 if(tf>tc){
		printf("o time de casa ganhou\n");
			
		}
	
	
	
	
	getch();
}
