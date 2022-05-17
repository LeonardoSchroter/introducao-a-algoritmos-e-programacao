#include<stdio.h>
main(){
	//4) Escreva um algoritmo que leia dois valores pelo teclado e informe se os mesmos são múltiplos um do outro ou não.
	int n1,n2;
	printf("escreva dois numeros");
	scanf("%i",&n1);
	scanf("%i",&n2);
	
	if (n1%n2==0 || n2%n1==0){
	printf("os numeros sao multiplos");
	}
	else{
		printf("os numeros nao sao multiplos");
	}
	
	
	
	getch();
}
