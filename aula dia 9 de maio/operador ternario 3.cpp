#include<stdio.h>
main(){
	int i;
	scanf("%d",&i);
	printf("\n %d eh %s\n", i,i %2==0 ? "par": "impar");
}
