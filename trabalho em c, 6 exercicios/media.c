#include<stdio.h>
main(){
	
	//Calcule a m�dia final de um aluno, considerando que existem duas avalia��es no semestre.
	int n1, n2, m;
	
	printf("quais foram suas notas?\n");
	scanf("%i",&n1);
	scanf("%i",&n2);
	m=(n1+n2)/2;
	printf("sua media foi %i",m);
	
	getch();
}

