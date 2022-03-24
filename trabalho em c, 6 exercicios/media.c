#include<stdio.h>
main(){
	
	//Calcule a média final de um aluno, considerando que existem duas avaliações no semestre.
	int n1, n2, m;
	
	printf("quais foram suas notas?\n");
	scanf("%i",&n1);
	scanf("%i",&n2);
	m=(n1+n2)/2;
	printf("sua media foi %i",m);
	
	getch();
}

