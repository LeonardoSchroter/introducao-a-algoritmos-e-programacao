/*4 - Considere a tabela de Al�quota de Imposto de Renda (IR) a seguir. Desenvolva um algoritmo para ler
 um valor de sal�rio mensal, mostrar o % da al�quota do imposto de Renda e o valor em R$ da al�quota.*/
#include<stdio.h>
main(){
	float sal,alp,alrs;
	printf("qual o seu salario?\n");
	scanf("%f",&sal);
	if (sal<1566.62){
		printf("n�o ha aliquota");
	}
	else if (sal>1566.61 && sal<2347.86){
		printf("havera 7,5 porcento de aliquota\n");
		alrs=sal*0.075;
		printf(" a aliquota em dinheiro eh de %f R$",alrs);
		
	}
	else if (sal>2347.85 && sal<3130.52){
		printf("havera 15 porcento de aliquota\n");
		alrs=sal*0.15;
		printf(" a aliquota em dinheiro eh de %f R$",alrs);
		
	}
	else if (sal>3130.51 && sal<3911.64){
		printf("havera 22,5 porcento de aliquota\n");
		alrs=sal*0.225;
		printf(" a aliquota em dinheiro eh de %f R$",alrs);
		
	}
	else{
		printf("havera 27,5 porcento de aliquota\n");
		alrs=sal*0.275;
		printf(" a aliquota em dinheiro eh de %f R$",alrs);
		
	}
	
	
	
	getch();
}
