#include<stdio.h>
main (){
	
	int a;
	printf("escreva um numero\n");
	scanf("%d",&a);
	if(a>0){
		printf("o numero é positivo\n");
		if(a%2==0){
			printf("este numero é par\n");
		}
		else{
			printf("este numero é impar\n");
			
		}
		
	}
	else if (a==0){
		printf("este numero é igual a zero");
	}
	else {
		printf("este numero é negativo");
	}
		
	
}
