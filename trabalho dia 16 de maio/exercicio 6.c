//6) Fa�a um programa que leia um n�mero inteiro n, inteiro e positivo 
//e mostre a seguinte soma: S = 1 + 1/2 + 1/3 + 1/4 + 1/5 .... 1/n
#include<stdio.h>
#include<conio.h>


main(){
	int i,n;
	float soma,ni;
	soma=0;
	printf("escreva um numero inteiro positivo\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ni=i;
		soma+=1/ni;
		printf("%.2f\n",soma);
		
	}
	
	
	
	printf("a soma � %.2f\n",soma);
	
	
	
}
