#include <stdio.h>
//4.Um carro percorreu determinada distância em determinado tempo. Desenvolva o algoritmo para ler estes dados e calcular a velocidade média do carro. Sabe-se que a velocidade média é a razão entre a distância percorrida e o tempo para percorrê-la.
main(){
	float vm, d, t;
	
	printf("qual a distancia que voce percorreu?\n");
	scanf("%f",&d);
	printf("qual o tempo em horas para percorrer essa distancia?\n");
	scanf("%f",&t);
	vm=d/t;
	printf("a valocidade media é %f km por hora",vm);
}
