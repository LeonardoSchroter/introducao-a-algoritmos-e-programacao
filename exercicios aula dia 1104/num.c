#include<stdio.h>
main(){
	
	int num;
	printf("digite um numero:\n");
	scanf("%d",&num);
	if(num>0){
		printf("o numero � positivo\n");
	}
	if (num==0){
		printf("o numero � zero");
	}
	else{
		printf("o numero � negativo");
	}
	
	getch();
}
