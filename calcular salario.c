#include<stdio.h>
main(){
	float salario, aumento,salario2;
	
	printf("qual seu salario?\n");
	scanf ("%f",&salario);
	printf("qual foi a procentagem de aumento?\n");
	scanf("%f",&aumento);
	salario2= (aumento/100)*salario+salario;
	printf("o salario novo e %f",salario2);
getch();
}
