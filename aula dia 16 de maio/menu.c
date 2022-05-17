#include<stdio.h>
main(){
		int i,opcao;
	
	for (;;){
		scanf("%d",&opcao);
		if(opcao>4 || opcao<1){
			continue;
		}
		else{
			printf("opcao %d escolhida\n",opcao);
			break;
		}
	
	}
	switch(opcao){
	case 1:
		printf("Primeira opcao");
	break;
	case 2:
		printf("Segunda opcao:");
	break;
	case 3:
		printf("Terceira opcao:");
	break;
	case 4:
		printf("Quarta opcao:");
	break;
}
	
	
	
	
	getch();
}
