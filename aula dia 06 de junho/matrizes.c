#include<conio.h>
#include<stdio.h>
main(){
	float A[2][2], quant,media;
	A[0][0]= 9;
	A[0][1]= 8;
	A[1][0]= 7;
	A[1][1]= 7;
	quant=A[0][0]+A[0][1]+A[1][0]+A[1][1];
	media=quant/4;
	printf("%f\n",quant);
	printf("%f",media);
	
	getch();
}
