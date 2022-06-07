/*1 - Fazer um algoritmo que leia dez números inteiros armazenando-os em um vetor e escreva primeiramente todos os números pares lidos e após todos os ímpares. Exemplo:
a. lê: |7|40|3|9|21|0|63|31|7|22|
b. escreve: |40|0|22|7|3|9|21|63|31|7|*/
#include<stdio.h>
#include<conio.h>
main(){
	int ma[10],i;
	for(i=0;i<10;i++){
	
		scanf("%i",&ma[i]);
	}
	printf("------------------------------\n\n");
	for(i=0;i<10;i++){
		if(ma[i]%2==0){
			printf("%i\n",ma[i]);
		}
	}
	for(i=0;i<10;i++){
		if(ma[i]%2!=0){
			printf("%i\n",ma[i]);
		}
	}
}
	

		
	
