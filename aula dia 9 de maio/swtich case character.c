#include<stdio.h>
main(){
	
	char car;
	printf("digite uma letra");
	scanf("%c",&car);
	fflush(stdin);
	
	switch(car){
		case 'c':
			printf("a letra � c");
			break;
		case 'd':
			printf("a letra � d");
			break;
		
		default:
			printf("a letra nao eh c nem d");
			
	}
}
