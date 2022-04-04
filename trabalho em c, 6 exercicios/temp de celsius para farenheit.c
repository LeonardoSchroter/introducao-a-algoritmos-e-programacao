#include<stdio.h>
main(){
	//Converta a temperatura dada em Celsius para Fahrenheit.
	
	int c,f ;
	
	printf("qual a temperatura em celsius?\n");
	scanf("%i",&c);
	f = c * 1.8 + 32;
	printf ("a temperatura em fareheit e %i",f);
	
	
	
	getch();
}
