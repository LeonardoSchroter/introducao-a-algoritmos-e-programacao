#include<stdio.h>
main(){
	
	char car;
	float num, num2,num3;
	printf("digite qual operação quer realizar\n");
	scanf("%c",&car);
	fflush(stdin);
	printf("digite dois numeros\n");
	scanf("%f",&num);
	scanf("%f",&num2);
	
	switch(car){
		case '-':
			num3=num-num2;
			printf("o resultado eh %.2f",num3);
			break;
		case '*':
			num3=num*num2;
			printf("o resultado eh %.2f",num3);
			break;
		
		case '+':
			num3=num+num2;
			printf("o resultado eh %.2f",num3);
			break;
		
		case '/':
			num3=num/num2;
			printf("o resultado eh %.2f",num3);
			break;
			
	}
	getch();
}
