//3) Ajuste o exercício 3 de maneira que mostre os valores informados em ordem crescente.

#include<stdio.h>
main(){
	float n1,n2,n3;
	printf("escreva tres numeros\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	if (n1>n2 && n1>n3){
		printf("o número %.2f é o maior\n",n1);
	}
	
	else if (n2>n1 && n2>n3){
		printf("o número %.2f é o maior\n",n2);
	}
	else{
		printf("o número %.2f é o maior\n",n3);
	}
	if (n1>n2 && n2>n3){
		printf("%.2f %.2f %.2f",n3,n2,n1);
	}
	 if (n2>n1 && n1>n3){
		printf("%.2f %.2f %.2f",n3,n1,n2);		
		}
	 if (n3>n1 && n1>n2){
		printf("%.2f %.2f %.2f",n2,n1,n3);
		}
		
		
	
		
	    
	}
	
