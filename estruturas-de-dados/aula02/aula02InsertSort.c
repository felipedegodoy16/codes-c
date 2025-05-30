#include <stdio.h>
#include <stdlib.h>

// copia um vetor para outro
void copyVector (int *origem, int *destino, int n) {
    int i;

    for (i = 0; i < n; i++)
        destino[i] = origem[i];
} 

// exibir dados do vetor
void printVector (int *v, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
} 

// código da função insert sort
void insertSort (int *vetor, int N) {
	int i, j, aux;
	
	for(i = 1; i < N; i ++) {
		aux = vetor[i];
		for(j = i-1; j >= 0 && aux < vetor[j]; j--) {
			vetor[j+1] = vetor[j];
		}
		vetor[j+1] = aux;
	}
}

// função principal
int main() {
	
	int *base, *ordenado, i, n;
	
	// colocando o tamanho dos vetores
	n = 10;
    base = (int*) malloc (n * sizeof(int));
    ordenado = (int*) malloc (n * sizeof(int));
	
	for(i = 0; i < n; i++)
		base[i] = rand() % 80;
 
    // testando o insert sort
    printf("\ninsert sort:\n");
    copyVector(base, ordenado, n);
    printVector(ordenado, n);
    insertSort(ordenado, n);
    printVector(ordenado, n);

    printf("\n");

    free(base);
    free(ordenado);
	
	return 0;
}