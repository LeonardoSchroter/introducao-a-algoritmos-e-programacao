#include<stdio.h>
main(){
	float salario,aumento;
	printf("digite o salario:");
	scanf("%f",&salario);
	if (salario<900){
		aumento=5;
		
	}
	else if (salario>=900 && salario<1500){
		aumento=8;
	}
	else if(salario>=1500){
		aumento=10;
	}
	salario= salario+salario*(aumento/100);
	system("cls");
	printf("o aumento eh de %.2f porcento e o salario é de %.2f",aumento,salario);
	
	
	
	
	
	getch();
}
