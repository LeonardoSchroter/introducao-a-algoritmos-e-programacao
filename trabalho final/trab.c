#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
main(){
	char palavra[20],letra,pal[20];
	int chutes=5,j,i,c;
	int erros;
	
	printf("qual a palavra que vosmece deseja ?\n");
	scanf("%s",&palavra);
	for(i=0;i<strlen(palavra);i++){
		pal[i]= '-';
	}
	system("cls");
	fflush(stdin);
	
	for(;;){
		
		for(j=0;j<strlen(palavra);j++){
			
			
			printf("%c",pal[j]);
			fflush(stdin);
		}
		printf("\n tente a sorte\n");
		scanf("%c",&letra); 
		fflush(stdin);
		for(j=0;j<strlen(palavra);j++){
			if(letra==palavra[j]){
				pal[j]=palavra[j];
			}
			else{
				chutes--;
			}
			
			
		}
		if(chutes==0){
			break;
		}
		
		
	}

	

	


	
	
	
	
	
	
	
	
	
	getch();
}
