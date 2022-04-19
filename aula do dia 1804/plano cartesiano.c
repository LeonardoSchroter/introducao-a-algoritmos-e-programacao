/*1) Escreva um algoritmo que leia um ponto (x,y) pelo teclado e informe em qual quadrante o ponto se encontra 
no plano cartesiano ou se o ponto está sobre um dos eixos.*/
#include<stdio.h>
main(){

int x,y;
printf("escreva o ponto x e y,respectivamente\n");
scanf("%i",&x);
scanf("%i",&y);
if (x!=0 && y!=0){
	printf("o numero fica no quadrante (%i,%i)",x,y);
}
else{
	printf("o ponto esta sobre um dos eixos");
}
}

