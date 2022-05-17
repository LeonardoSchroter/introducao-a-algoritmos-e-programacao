//2)  Dado um limite inferior e superior, calcule a soma de todos os números pares contidos nesse intervalo.
#include<stdio.h>
#include<conio.h>
main(){
	int  inicio, fim,i,soma;
	soma=0;
	printf("coloque o valor de inicio\n");
	scanf("%d",&inicio);
	printf("coloque o valor de fim\n");
	scanf("%d",&fim);
	if(inicio<fim){
		for (i=inicio+1; i<fim; i++){
			if (i%2==0){
				soma+=i;
			}
		}	
		
	}
	printf("a soma de todos os pares eh %d/n",soma);

	getch();
}
