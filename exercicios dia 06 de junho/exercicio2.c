/*2 - Fazer um algoritmo que leia trinta n�meros reais armazenando-os em um vetor e ap�s escreva a posi��o de cada n�mero menor que zero desse vetor. Exemplo:
a. l�: |5.1|0|-3.6|4.1|-2.5|-1.3|-4|1.39|-128|-6.9|8.2|9|154|-88|6.4|7.1|...|
b. escreve: |3|5|6|7|9|10|14|. . .*/
#include<stdio.h>
#include<conio.h>
main(){
	float ma[30],c;
	int i;
	for(i=0;i<30;i++){
		
		scanf("%f",&ma[i]);
	}
	printf("------------------------------\n\n");
	for(i=0;i<30;i++){
		
		if(ma[i]<ma[0]){
			printf("%f\n",ma[i]);
		}
	}
	getch();
}
