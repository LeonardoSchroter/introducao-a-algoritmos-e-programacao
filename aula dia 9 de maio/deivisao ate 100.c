#include<stdio.h>
main(){
	int x,i;
	scanf("%d",&x);
	for (i=0; i<=100; i++){
		if (i%x==0){
		printf("\n%i eh divisivel por %i",i,x);
		}
	}
	
	getch();
}
