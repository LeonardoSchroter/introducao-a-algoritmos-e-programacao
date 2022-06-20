/*3 - Escreva um algoritmo que leia os valores para um vetor de 10 elementos, e em seguida ordene em ordem crescente os valores desse vetor, 
utilizando um vetor auxiliar.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int vetora[10],vetorb[10],j, i,aux;
	
	for(i=0;i<10;i++){
		scanf("%d",&vetora[i]);
		
	}
	
		for(i=0;i<10;i++){
			for(j=0,j<10,j++){
				if(vetora[i]>vetora[j]){
					auxiliar=vetora[i];
					vetora[i]=vetora[j];
					vetora[j]=auxiliar;
				}
			}
		}
		for(i=0;i<10;i++){
			vetorb[i]=vetora[i];
			printf("%d",vetorb[i]);
		}
		
}
