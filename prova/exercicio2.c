/*2 - Fazer um algoritmo que leia a nota final de um aluno e escreva se ele foi aprovado ou 
n�o (considerar nota final maior ou igual a seis para aprova��o).*/
#include<stdio.h>
main(){
	float nf;
	printf("qual a sua nota final?\n");
	scanf("%f",&nf);
	if(nf>=6){
		printf("parabens, voce foi aprovado");
	}
	else if (nf<6){
		printf("voce foi reprovado");
	}
	
	
	
	getch();
}
