#include<stdio.h>
main(){
	int num;
	printf("escreva um numero \n");
	scanf("%d",&num);
	 if(num %8==0){
		printf("o numero é divisivel por 8, 4 e 2 \n");
		}
	else if(num %4==0){
		printf("o numero é divisivel por 4 e 2 \n");
		
	}
	else if(num %2==0){
		printf("o número é divisivel por 2 \n");
	}

	else {
		printf(" o número nao é divisivel nem por 2, 4 ou 8");
	}
	
	
	getch();
}

