#include<stdio.h>

main(){
	int c, f, p, q;
	
	
	
	printf("qual a sua carga horaria de disciplina?\n");
	scanf("%i", &c);
	printf("quantas faltas você teve?\n");
	scanf("%i", &f);
	
	
	q= c-f;
	
	p= q*100/c;
	
    printf("A sua frequência é de %i%%", p);	
	
	
	
	getch();
	
}
