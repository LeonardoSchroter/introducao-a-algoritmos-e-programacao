#include<stdio.h>
main(){
	
	int num;
	printf("digite um numero:\n");
	scanf("%d",&num);
	if(num>0){
		printf("o numero é positivo\n");
	}
	if (num==0){
		printf("o numero é zero");
	}
	else{
		printf("o numero é negativo");
	}
	
	getch();
}
