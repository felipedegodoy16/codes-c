#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

// código da função bubble sort
void bubbleSort (int *vetor, int N) {
    int i, aux, troca = 1;
    while (troca==1) {
        troca = 0;
        for (i = 0; i < N-1; i++) {
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                troca = 1;
            }
        }
    }
}

// código da função bubble sort de outra maneira
void bubbleSort2 (int *vetor, int N) {
    int i, j, aux, troca = 1;
    for (i = 0; (i < N-1) && troca; i++) { 
        troca = 0;
        for (j = 0; j < N-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                troca = 1;
            }
        }
    }
}

// código da função select sort
void selectSort (int *vetor, int N) {
    int menor, aux, i, j;
    for (i = 0; i < N-1; i++) {
        menor = i;

        for (j = i+1; j < N; j++)
            if (vetor[j] < vetor[menor])
                menor = j;

        if (menor != i) {
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
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
	clock_t tb1, tb2, ts, ti;
	
	// colocando o tamanho dos vetores
	n = 10000;
    base = (int*) malloc (n * sizeof(int));
    ordenado = (int*) malloc (n * sizeof(int));
	
	for(i = 0; i < n; i++)
		base[i] = rand() % 80;
	
	// testando bubble sort
    // printf("\nbubble sort version 1:\n");
    copyVector(base, ordenado, n);
    // printVector(ordenado, n);
    tb1 = clock();
    bubbleSort(ordenado, n);
    tb1 = clock() - tb1;
    // printVector(ordenado, n);
    
    // testando o segundo bubble sort
    // printf("\nbubble sort version 2:\n");
    copyVector(base, ordenado, n);
    // printVector(ordenado, n);
    tb2 = clock();
    bubbleSort2(ordenado, n);
    tb2 = clock() - tb2;
    // printVector(ordenado, n);

    // testando o select sort
    // printf("\nselect sort:\n");
    copyVector(base, ordenado, n);
    // printVector(ordenado, n);
    ts = clock();
    selectSort(ordenado, n);
    ts = clock() - ts;
    // printVector(ordenado, n);
 
    // testando o insert sort
    // printf("\ninsert sort:\n");
    copyVector(base, ordenado, n);
    // printVector(ordenado, n);
    ti = clock();
    insertSort(ordenado, n);
    ti = clock() - ti;
    // printVector(ordenado, n);

    printf("\n");
    
    printf("Tempos de execucao:\n");
    printf("Bubble 1: %lf\n", ((double)tb1)/CLOCKS_PER_SEC);
    printf("Bubble 2: %lf\n", ((double)tb2)/CLOCKS_PER_SEC);
    printf("Select: %lf\n", ((double)ts)/CLOCKS_PER_SEC);
    printf("Insert: %lf\n", ((double)ti)/CLOCKS_PER_SEC);

    free(base);
    free(ordenado);
	
	return 0;
}