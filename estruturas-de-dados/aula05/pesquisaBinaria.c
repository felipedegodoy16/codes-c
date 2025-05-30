#include <stdio.h>

// função de pesquisa sequencial
int pesquisaBinaria(int *v, int inicio, int fim, int chave) {
	int meio = (inicio+fim)/2;
	
	if(chave == v[meio]) 
		return meio;
		
	if(inicio >= fim) 
		return -1;
	
	if(chave < v[meio])
		pesquisaBinaria(v, inicio, meio-1, chave);
	else
		pesquisaBinaria(v, meio+1, fim, chave);
}

int main() {
	int vetor[20] = {23,45,12,43,13,56,18,42,89,67,7,3,18,34,17,54,5,3,14,25};
	int i, chave, tam = 20;
	int indRetornado;
	
	printf("\nDigite o ID a pesquisar: ");
	scanf("%d", &chave);
	
	indRetornado = pesquisaBinaria(vetor, 0, tam, chave);
	
	if(indRetornado == -1) {
		printf("Chave nao encontrada.");
	} else {
		printf("Chave foi encontrada na posicao %d", indRetornado+1);
	}
}