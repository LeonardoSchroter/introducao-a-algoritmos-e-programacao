#include <stdio.h>
main(){
	//6.Escreva um algoritmo para ler o n�mero de eleitores de um munic�pio, o n�mero de votos brancos, nulos e v�lidos. Calcule e escreva o percentual que cada um representa em rela��o ao total de eleitores.
	
	int e,vv,vn,vb,pv,pn,pb;
	
	printf("qual foi o numero de eleitores?\n");
	scanf("%i",&e);
	printf("qual foi o numero de votos validos, votos em branco e votos nulos, respectivamente?\n");
	scanf("%i",&vv);
	scanf("%i",&vb);
	scanf("%i",&vn);
	pb=(100*vb)/e;
	pv=(100*vv)/e;
	pn=(100*vn)/e;
	printf("a porcentagem de eleitores q votaram em branco:%i\n valido:%i\n nulo:%i", pb, pv, pn);
		
	
	
	
	
	
	
	getch();
}
