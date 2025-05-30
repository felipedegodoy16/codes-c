#include <stdio.h>
#include <stdlib.h>

int trocasRealizadas;

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
                trocasRealizadas++;
            }
        }
    }
}

int main(){
	
	int casos, i, j, *vetor, vagoes, trocas = 0;
	
	scanf("%d", &casos);
	
	for(i = 0; i < casos; i++) {
		scanf("%d", &vagoes);
		trocasRealizadas = 0;
		
		vetor = (int *) malloc(vagoes * sizeof(int));
		
		for(j = 0; j < vagoes; j++) {
			scanf("%d", &vetor[j]);
		}
		
		bubbleSort(vetor, vagoes);
		
		printf("Optimal train swapping takes %d swaps.\n", trocasRealizadas);
	}
	
	return 0;
}
