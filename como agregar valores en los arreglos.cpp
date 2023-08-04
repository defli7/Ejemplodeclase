#include <stdio.h>

int main() {
	int muestra[10],t;
	
	for (t=0; t<10; t++){
		printf("Ingrese el valor para muestra [%d]\n", t);
		scanf("%d", &muestra[t]);
	}
	for (t=0; t<10; t++){
		printf("muestra [%d]=%d\n", t, muestra[t]);
	}
	return 0;
}


