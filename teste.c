#include<stdio.h>
main(){
	#define pi 3.1415
	int x, y, z=10;
	float a=3, c=4.23, d;
	char i, j= 'a';
	printf("o pi=%f\n",pi); 
	scanf ("%d %d %f %c", &x,&y,&d,&i);
	printf("x= %d, y= %d, z= %d", x,y,z);
	printf ("\n");
	printf ("a= %f,c= %f,d=%f", a, c, d);
	printf ("\n");
	printf ("i=%c e j=%c", i,j);
	getch();
	//nao pode ser colocado a variavel apos o codigo
}
