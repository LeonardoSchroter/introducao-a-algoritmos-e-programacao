#include<stdio.h>
main(){
	int num1,num2,num3,num4,media;
	printf("escreva 4 numeros\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	scanf("%d",&num4);
	media=(num1+num2+num3+num4)/4;
	if (num1>media){
		printf("%d é maior que %d \n",num1,media);
	}
	if (num2>media){
		printf("%d é maior que %d\n",num2,media);
	}
	if (num3>media){
		printf("%d é maior que %d\n",num3,media);
	}
	if (num4>media){
		printf("%d é maior que %d\n",num4,media);
	}
	}
