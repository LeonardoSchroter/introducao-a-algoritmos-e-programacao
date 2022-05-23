#include<stdio.h>
#include<conio.h>
main(){
	int i;
	float num1,num2;
	


	for(i=1001;i<9999;i++){
		num2=i%100;
		num1=i/100;
		if((num1+num2)*(num1+num2)==i){
			printf("%d\n",i);
		}
	}
	
}
