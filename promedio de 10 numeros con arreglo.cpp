#include <stdio.h>
#include <math.h>

int main() {
	int t;
	float muestra[10];
	float suma=0;
	float promedio;
	
	for (t=0; t<10; t++){
		printf("Ingrese el valor para muestra [%d]\n", t);
		scanf("%f", &muestra[t]);
		suma=suma+muestra[t];
	}
	
	promedio=suma/10;
	printf ("el promedio es: %f", promedio);
	
	return 0;
}



