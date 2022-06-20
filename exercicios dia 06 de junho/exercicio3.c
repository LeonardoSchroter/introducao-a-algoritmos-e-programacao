/*3 - Escreva um algoritmo que leia os valores para um vetor de 10 elementos, e em seguida ordene em ordem crescente os valores desse vetor, 
utilizando um vetor auxiliar.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int vetora[10],ord[10],o, i,menor,m;
	
	for(i=0;i<10;i++){
		scanf("%d",&vetora[i]);
		
	}
	m=0;
	
		for(o=0;o<10;o++){
			for(i=0;i<10;i++){
				if(vetora[i]<vetora[m]){
				m=i;
				}
			}
			ord[o]=vetora[m];
			vetora[m]= 10000;
		}
		
		for(i=0;i<10;i++){
			printf("%d \n",ord[i]);
		}
		
}
