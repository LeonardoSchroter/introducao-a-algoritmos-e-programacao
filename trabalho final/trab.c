#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main(){
	char palavra[20],letra,pal[20],pal2[20];
	int chutes=5,j,i,c;
	int erros=0;
	
	printf("qual a palavra que vosmece deseja ?\n");
	scanf("%s",&palavra);
	fflush(stdin);
	for(i=0;i<strlen(palavra);i++){
		pal[i]= '-';
		pal2[i]= '-';
	}
	
	
	system("cls");
	
	
	for(;;){
		
		for(j=0;j<strlen(palavra);j++){
			
			
			printf("%c",pal[j]);
			
		}
		c=0;
		erros=0;
		printf("\nvoce tem %d tentativas\n",chutes);
		printf(" digite uma letra:");
		scanf("%c",&letra); 
		fflush(stdin);
		for(j=0;j<strlen(palavra);j++){
			if(letra==palavra[j]){
				pal[j]=palavra[j];
				palavra[j]='.';
				c++;
				
				
				}
			}
			if (c==0){
				chutes--;
				printf("\nvoce errou\n");
			}
			
			
			
		
	
		if(chutes==0){
			printf("\n voce perdeu");
			break;
			
		}
		for(j=0;j<strlen(palavra);j++){
			if(pal2[j]!=pal[j]){
				erros++;
				continue;
			}
		
		}
			
		if (erros==strlen(palavra)){
			printf("parabens, voce acertou a palavra ");
			break;
		}
		
		
		
	}
getch();	
}
	

	


	
	
	
	
	
	
	
	
	


