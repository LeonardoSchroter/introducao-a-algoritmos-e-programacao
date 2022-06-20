//11 - Ler duas matrizes inteiras de ordem 4 e verificar se a soma dos elementos das diagonais principais dessas matrizes são iguais.
#include <conio.h>
#include <stdio.h>
#include<math.h>

main(){
	
	int i, j, matrizA[4][4], matrizB[4][4], soma_diagonalA = 0, soma_diagonalB = 0;
	
	
	for(i=0; i<4; i++){
	for(j=0; j<4; j++){
		
		matrizA[i][j] = i + j;
	}
	}
	
	
	for(i=0; i<4; i++){
	for(j=0; j<4; j++){
		
		matrizB[i][j] = i * j;
	}
	}
    
    for(i=0; i<4; i++){
	for(j=0; j<4; j++){
		
		if(i==j){
			soma_diagonalA = soma_diagonalA + matrizA[i][j];
		}
	}
	}
	

    for(i=0; i<4; i++){
	for(j=0; j<4; j++){
		
		if(i==j){
			soma_diagonalB = soma_diagonalB + matrizB[i][j];
		}
	}
	}
	

	printf("\n\nA soma da diagonal principal da matriz A eh %d", soma_diagonalA);
	printf("\nA soma da diagonal principal da matriz B eh %d\n\n", soma_diagonalB);
	
	
	
	if(soma_diagonalA == soma_diagonalB){
		printf("\n\nA soma da diagonal principal da matriz A eh IGUAL a soma da diagonal principal da matriz B");
	}
	
	else{
		printf("\n\nA soma da diagonal principal da matriz A eh DIFERENTE da soma da diagonal principal da matriz B");
	}
	getch();
}
