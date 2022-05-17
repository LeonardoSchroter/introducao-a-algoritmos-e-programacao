//2) Escreva um algoritmo que leia 3 valores pelo teclado e então informe qual o maior deles.
#include<stdio.h>
main(){
	float n1,n2,n3;
	printf("escreva tres numeros");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	if (n1>n2 && n1>n3){
		printf("o número %.2f é o maior",n1);
	}
	
	else if (n2>n1 && n2>n3){
		printf("o número %.2f é o maior",n2);
	}
	else{
		printf("o número %.2f é o maior",n3);
	}
		
	    
	}
	
	
	




