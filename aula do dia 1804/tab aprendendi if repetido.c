#include<stdio.h>
main (){
	
	int a;
	printf("escreva um numero\n");
	scanf("%d",&a);
	if(a>0){
		printf("o numero � positivo\n");
		if(a%2==0){
			printf("este numero � par\n");
		}
		else{
			printf("este numero � impar\n");
			
		}
		
	}
	else if (a==0){
		printf("este numero � igual a zero");
	}
	else {
		printf("este numero � negativo");
	}
		
	
}
