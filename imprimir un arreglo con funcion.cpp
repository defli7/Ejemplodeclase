#include <stdio.h>
void imprimir(int arr[], int tamano) {
	printf("arreglo = { ");
	for(int i=0; i<tamano; i++) {
		printf("%d ", arr[i]);
	}
	printf("}\n");
}
int main(void) {
	int arr[5] = {5, 3, 4, 6, 1};
	imprimir(arr, 5);
	return 0;
}



