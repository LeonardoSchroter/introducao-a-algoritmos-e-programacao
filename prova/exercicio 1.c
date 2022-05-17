/*1 - Fazer uma algoritmo que leia valores para as variáveis hora, minuto e segundo; verificando e escrevendo 
se elas correspondem a um horário válido ou não. Para um horário ser válido, a hora deve estar no intervalo de 0 a 23,
 o minuto e o segundo no intervalo de 0 a 59.*/
#include<stdio.h>
main(){
	int h,m,s;
	printf("escreva os valores da hora,minuto e segundo,respectivamente\n");
	scanf("%i",&h);
	scanf("%i",&m);
	scanf("%i",&s);
	if (h>23 || m>59 || s>59){
		printf("Não é um horario valido");
	}
	else{
		printf("o horario é valido, são %d:%d:%d",h,m,s);
	}
	
	
	
	
	getch();
}
