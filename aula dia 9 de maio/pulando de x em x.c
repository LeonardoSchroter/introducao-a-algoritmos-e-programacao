#include<stdio.h>
main(){
	int x,i;
	scanf("%d",&x);
	for (i=x; i<100; i+=x){
		printf("i vale %d\n",i);
	}
	
	getch();
}
