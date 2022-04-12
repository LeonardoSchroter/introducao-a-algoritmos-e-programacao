#include<stdio.h>
main(){
	int horas1,horas2,sh1,sh2,salario1,salario2;
	printf("qual a quantidade de horas trabalhadas pelo primeiro professor?\n");
	scanf("%d",&horas1);
	printf("qual a quantidade de horas trabalhadas pelo segundo professor?\n");
	scanf("%d",&horas2);
	printf("qual a quantidade recebida por hora pelo primeiro professor?\n");
	scanf("%d",&sh1);
	printf("qual a quantidade recebida por hora pelo segundo professor?\n");
	scanf("%d",&sh2);
	salario1=horas1*sh1;
	salario2=horas2*sh2;
	if (salario1>salario2){
		printf("o primeiro professor ganha mais grana");
	}
	if (salario2>salario1){
		printf("o segundo professor ganha mais grana");
	}
}
