//9) Fa�a um programa que leia um n�mero n e imprima se ele e� primo ou n�o. 
//(um n�mero primo tem apenas 2 divisores: 1 e ele mesmo! O n�mero 1 n�o � primo!!!)

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
