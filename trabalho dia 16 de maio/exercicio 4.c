//4) Escreva um algoritmo que pergunte ao usu�rio qual o valor inicial da contagem, qual o valor final, 
//e se ele deseja pular os valores pares ou os valores �mpares. Ap�s, fa�a um la�o de repeti��o 
//que mostre os valores desejados.
#include<stdio.h>
#include<conio.h>
main(){
	int  inicio, fim,i,vi;
	
	printf("coloque o valor de inicio\n");
	scanf("%d",&inicio);
	printf("coloque o valor de fim\n");
	scanf("%d",&fim);
	printf("voc� deseja pular os valores impares? Se sim pressione 1, senao 2\n");
	scanf("%d",&vi);
	if(fim>inicio){
	
		if(vi==2){
			for (i=inicio+1; i<fim; i++){
				if(i%2==0){
					continue;
				}
			
				printf("%d\n",i);
			
			}
		}
	
	
		else if(vi==1){
			for (i=inicio+1; i<fim; i++){
				if(i%2!=0){
				continue;
				}
			
				printf("%d\n",i);
			
			}
		}
	}
	else{
		if(vi==2){
			for (i=inicio-1; i>fim; i--){
				if(i%2==0){
					continue;
				}
			
				printf("%d\n",i);
			
			}
		}
		else if(vi==1){
			for (i=inicio-1; i>fim; i--){
				if(i%2!=0){
				continue;
				}
			
				printf("%d\n",i);
			
			}
		}
		
	}
}
	

			

