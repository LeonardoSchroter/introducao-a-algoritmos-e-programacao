/*1 - Fazer uma algoritmo que leia valores para as vari�veis hora, minuto e segundo; verificando e escrevendo 
se elas correspondem a um hor�rio v�lido ou n�o. Para um hor�rio ser v�lido, a hora deve estar no intervalo de 0 a 23,
 o minuto e o segundo no intervalo de 0 a 59.*/
#include<stdio.h>
main(){
	int h,m,s;
	printf("escreva os valores da hora,minuto e segundo,respectivamente\n");
	scanf("%i",&h);
	scanf("%i",&m);
	scanf("%i",&s);
	if (h>23 || m>59 || s>59){
		printf("N�o � um horario valido");
	}
	else{
		printf("o horario � valido, s�o %d:%d:%d",h,m,s);
	}
	
	
	
	
	getch();
}
