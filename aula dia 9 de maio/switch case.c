#include<stdio.h>
main(){
	
	int num;
	printf("digite um numero");
	scanf("%d",&num);
	
	switch(num){
		case 9:
			printf("o numero é 9");
			break;
		case 10:
			printf("o numero é 10");
			break;
		
		default:
			printf("o numero nao eh 9 nem 10");
			
	}
}
