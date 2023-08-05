#include <stdio.h>
#include <math.h>
int rec2polar(a,b,r,tita){
	
}

int main(){
char opcion;
int a=0, b=0;
printf ("Ingrese el calculo que quiera realizar: \n a)De rectangular a polar \n b)De polar a rectangular\n");
scanf ("%c", &opcion);

if (opcion=='a'){
	printf("Ingrse los valores de a y b");
	scanf ("%d", &a);
	scanf ("%d", &b);
	rec2polar(a,b,r,tita);
}else if(opcion=='b'){
	printf("Ingrse los valores de a y b");
	scanf ("%d", &r);
	scanf ("%d", &tita);
	polar2rec(r,tita,a,b);
}

