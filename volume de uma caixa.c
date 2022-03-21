#include<stdio.h>
main(){
	float c,a,l,v;
	
	printf("digite os valores do comprimento, altura e largura de uma caixa, respectivamente \n");
	scanf("%f",&c);
	scanf("%f",&a);
	scanf("%f",&l);
	
	v=c*a*l;
	
	printf("o volume é igual a %f",v);
}


