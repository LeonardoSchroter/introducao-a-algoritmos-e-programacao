//1) Faça um programa que leia um número e apresente a tabuada deste número.
#include<stdio.h>
#include<conio.h>
main(){
	int x,i,tabuada;
	printf("qual numero o senhor gostaria de aprender a tabuada?\n");
	scanf("%d",&x);
	for(i=1;i<=10;i++){
		tabuada=x*i;
		printf("%d.%d=%d\n",x,i,tabuada);
		
	}
	
	
	
	
	getch();
}
