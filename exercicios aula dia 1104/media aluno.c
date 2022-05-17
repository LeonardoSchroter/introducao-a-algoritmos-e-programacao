#include<stdio.h>
main(){
	float nota1,nota2,media,exame,novamedia;
	printf("quais suas notas");
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	media=(nota1+nota2)/2;
	
	if (media>=7){
	printf("você foi aprovado");
	}
	else if (media<7){
	
		printf("você esta em exame!\n Digite a nota do exame: \n");
		scanf("%f",&exame);
		novamedia=(media+exame)/2;
	
		if (novamedia>=7){
		printf("voce foi aprovado");
	}
	else {
		printf("voce foi reprovado");
	}
	}
	
}

