//realizar un programa que resuelva la ecuación a x cuadrado + bx+c=0
#include <stdio.h>
#include <math.h>
int resolv (float a, float b, float c, float *x1, float *x2){
	*x1= (-b + sqrt(b*b-4*a*c))/ (2*a);
	*x2= (-b - sqrt(b*b-4*a*c))/ (2*a);
	
	return 0;
}
	int main (void){
		float A, B, C, x1, x2;
		printf ("Ingrese los coeficientes A, B,C \n");
		scanf ("%f", &A);
		scanf ("%f", &B);
		scanf ("%f", &C);
		
		resolv (A, B, C, &x1, &x2);
		printf ("Las raices son %f\t %f\n", x1, x2);
		
		return 0;
		
	}
