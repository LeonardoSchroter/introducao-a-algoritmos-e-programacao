#include <stdio.h>
//4.Um carro percorreu determinada dist�ncia em determinado tempo. Desenvolva o algoritmo para ler estes dados e calcular a velocidade m�dia do carro. Sabe-se que a velocidade m�dia � a raz�o entre a dist�ncia percorrida e o tempo para percorr�-la.
main(){
	float vm, d, t;
	
	printf("qual a distancia que voce percorreu?\n");
	scanf("%f",&d);
	printf("qual o tempo em horas para percorrer essa distancia?\n");
	scanf("%f",&t);
	vm=d/t;
	printf("a valocidade media � %f km por hora",vm);
}
