#include<conio.h>
#include<stdio.h>
main(){
	float A[2][2], ;
	int i,j;
	for ( i=0; i<2; i++ ){
  		for ( j=0; j<2; j++ ){
  			scanf ("%f", &A[ i ][ j ]);
  		}
		
    }
    for ( i=0; i<2; i++ ){
  		for ( j=0; j<2; j++ ){
  			printf("%f  ",A[i][j]);
  			
  		}
  		printf("\n");
  	}
	
	getch();
}
