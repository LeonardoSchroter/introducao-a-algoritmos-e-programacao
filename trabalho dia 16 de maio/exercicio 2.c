//3)Escreva um programa que pergunte para o usuário os valores iniciais e finais da contagem, 
//e então mostre todos os valores desse intervalo.
#include<stdio.h>
#include<conio.h>
main(){
	int  inicio, fim,i;
	printf("coloque o valor de inicio\n");
	scanf("%d",&inicio);
	printf("coloque o valor de fim\n");
	scanf("%d",&fim);
	if(inicio<fim){
		for (i=inicio+1; i<fim; i++){
			printf(" %d\n",i);
		}	
	}
	else{
		for (i=inicio-1; i>fim; i--){ 
			printf(" %d\n",i);
		}

}
	getch();
}
