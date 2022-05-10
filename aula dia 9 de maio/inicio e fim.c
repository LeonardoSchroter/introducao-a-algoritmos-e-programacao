#include<stdio.h>
main(){
	int  inicio, fim,i;
	printf("coloque o valor de inicio\n");
	scanf("%d",&inicio);
	printf("coloque o valor de fim\n");
	scanf("%d",&fim);
	if(inicio<fim){
		for (i=inicio+1; i<fim; i++){
			printf("i vale %d\n",i);
		}
	}
	else{
		for (i=inicio-1; i>fim; i--){ 
			printf("i vale %d\n",i);
		}
	}
	
	getch();
}
