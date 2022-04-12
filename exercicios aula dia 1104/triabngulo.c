#include<stdio.h>
main(){
	int b,h,a;
	printf("escreva o valor da altura do triangulo\n");
	scanf("%d",&h);
	printf("escreva o valor da base do triangulo\n");
	scanf("%d",&b);
	if ((h>0)&&(b>0)){
		a=b*h/2;
		printf("a area do triangulo é %d\n",a);
	}
	else{
		printf("digite um valor maior que 0\n");
	}
	
}
