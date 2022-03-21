#include<stdio.h>
main(){
	//1.     Desenvolva um algoritmo para ler as medidas de uma caixa, calcular e mostrar o seu volume.
	float c,a,l,v;
	
	printf("digite os valores do comprimento, altura e largura de uma caixa, respectivamente \n");
	scanf("%f",&c);
	scanf("%f",&a);
	scanf("%f",&l);
	
	v=c*a*l;
	
	printf("o volume e igual a %f",v);
	getch();
}


