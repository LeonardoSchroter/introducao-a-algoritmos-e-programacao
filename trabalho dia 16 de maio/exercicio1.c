//1) Fa�a um programa que leia um n�mero e apresente a tabuada deste n�mero.
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
