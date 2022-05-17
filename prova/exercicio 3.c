/*3 - Fazer um algoritmo que leia um número inteiro, verifique e escreva se ele é negativo, 
zero ou positivo. Caso seja positivo diga ainda se ele é par ou ímpar.*/
#include<stdio.h>
main(){
	int n;
	printf("escreva um numero inteiro\n");
	scanf("%i",&n);
	if (n>0){
		printf("o numero é positivo\n");
	}
	else if (n=0){
		printf("o numero é zero\n");
	}
	else if(n<0){
		printf("o numero é negativo\n");
	}
	
	if (n %2==0){
		printf("o numero é par");
	}
	
	else {
			printf("o numero é impar");
	}
	
	
	
	
	
	
	getch();
}
