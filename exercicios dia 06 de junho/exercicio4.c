
//4 - Fazer um algoritmo que leia cem n�meros float e escreva o percentual de n�meros que s�o maiores que a m�dia dos mesmos.
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float ma[5],soma,percentual,media;
	int i,c;
	for(i=0;i<5;i++){
		scanf("%f",&ma[i]);
		
	}
	for(i=0;i<5;i++){
		soma+=ma[i];
	}
	media=soma/5;
	for(i=0;i<5;i++){
		if (ma[i]>media){
			c++;
		}
	}
	percentual=(c*100)/5;    //5-100
				            //c-porcentagem
	printf("%f porcento sao maiores que a media",percentual);		 
}
