#include<stdio.h>
main(){
	int nota1,nota2,media,exame,novamedia;
	printf("quais suas notas");
	scanf("%d",&nota1);
	scanf("%d",&nota2);
	media=(nota1+nota2)/2;
	
	if (media>=7){
	printf("você foi aprovado");
	}
	if (media<7){
	
	printf("você esta em exame!\n Digite a nota do exame: \n");
	scanf("%d",&exame);
	novamedia=(media+exame)/2;
	if (novamedia>=7){
		printf("voce foi aprovado");
	}
	else {
		("voce foi reprovado");
	}
	}
	
}

