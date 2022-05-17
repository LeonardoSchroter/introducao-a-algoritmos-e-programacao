#include <stdio.h>
main(){

	int i;
	
	for (i=0; i<10; i++){
		if(i==3){
			continue;
		}
		if (i==7){
			break;	
		}
		
		printf("i vale %d\n",i);
	}
	
	
	getch();
}
