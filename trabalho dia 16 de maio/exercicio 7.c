
//7) Escreva um programa em C que gera n�meros entre 1000 e 1999 e mostra aqueles que divididos por 11 d�o resto 5.
#include<stdio.h>
#include<conio.h>
main(){
	int i;
	
	for(i=1001;i<1999;i++){
		if(i%11==5){
			printf("%d tem resto da divis�o por 11 igual a 5\n",i);
		}
	}
	
	
	
}
