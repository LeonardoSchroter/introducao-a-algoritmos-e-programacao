#include <stdio.h>
main(){
	int x;
	float y;
	char h;
	printf("digite um numero \n");
	scanf("%i", &x);
	fflush(stdin);
	printf("o valor digitado para x e igual a , %i\n ", x);
	scanf("%f", &y);
	fflush(stdin);
	printf("o valor digitado para y e igual a , %f \n", y);
	scanf("%c", &h);
	fflush(stdin);
	printf("o valor digitado para h e igual a , %c ", h);
	//o fflush limpa os buffs, é obrigatorio depois de character

	getch();
	
}

