#include<stdio.h>
main(){
	int n1,n2,n3;
	printf("escreva três numeros que representem os lados de um triangulo\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	if (n1<n2+n3 && n2<n1+n3 && n1<n2+n3){
		if (n1==n2&& n2==n3){
			printf("o triangulo eh equilatero");
		}
		else if (n1==n2 || n2==n3 || n1==n3){
			printf("o triangulo eh isosceles");
		}
		else if(n1!=n2&& n2!=n3){
			printf("o triangulo eh equilatero");
		}
	}
	else{
		printf("nao pode ser um triangulo");
	}
	
	
	
	getch();
}
