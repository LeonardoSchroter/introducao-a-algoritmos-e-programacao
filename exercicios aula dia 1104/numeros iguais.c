#include<stdio.h>
main(){
	int num1, num2;
	printf("digite dois numeros\n");
	scanf("%d%d",&num1,&num2);
	if (num1==num2){
		printf("os numeros sao iguais\n");
	}
	else {
		printf("os numeros sao diferentes\n");
	}
	getch();
}
