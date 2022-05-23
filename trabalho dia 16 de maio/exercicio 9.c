//9) Faça um programa que leia um número n e imprima se ele e´ primo ou não. 
//(um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é primo!!!)

#include<stdio.h>
#include<conio.h>
main(){
	int n,i;
	printf("escreva um numero\n");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			printf("o numero nao eh primo");
			break;
		}
	
		printf("o numero eh primo");
		break;
	}
	
	
	
}
