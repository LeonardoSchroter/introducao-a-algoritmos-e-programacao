#include <stdio.h>
#include<conio.h>
/*10) Fa�a um algoritmo para calcular e mostrar o resultado dos 50 primeiros elementos da s�rie:


1000   -   997   +   994   -   991   +   ...

  1            2             3           4
  */
  main(){
  	int i;
  	float num,resultado;
  	resultado=0;
  	num=1000;
  	for (i=1;i<=50;i++){
  		if(i %2!=0){
           resultado += num/i;
	   }
	    else{
	       resultado-=num/i;
	   	}
	   	num-=3;
	
	}
	printf("o resultado eh %.2f",resultado);
  	
  }
