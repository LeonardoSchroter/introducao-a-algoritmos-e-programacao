/*3 - Fazer um algoritmo que leia um n�mero inteiro, verifique e escreva se ele � negativo, 
zero ou positivo. Caso seja positivo diga ainda se ele � par ou �mpar.*/
#include<stdio.h>
main(){
	int n;
	printf("escreva um numero inteiro\n");
	scanf("%i",&n);
	if (n>0){
		printf("o numero � positivo\n");
	}
	else if (n=0){
		printf("o numero � zero\n");
	}
	else if(n<0){
		printf("o numero � negativo\n");
	}
	
	if (n %2==0){
		printf("o numero � par");
	}
	
	else {
			printf("o numero � impar");
	}
	
	
	
	
	
	
	getch();
}
