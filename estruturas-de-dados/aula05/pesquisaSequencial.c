#include <stdio.h>

// função de pesquisa sequencial
int pesquisaSequencial(int *v, int tamanho, int chave) {
	int i;
	
	for(i = 0; i < tamanho; i++) {
		if(v[i] == chave)
			return i;
	}
	
	return -1;
}

int main() {
	int vetor[20] = {23,45,12,43,13,56,18,42,89,67,7,3,18,34,17,54,5,3,14,25};
	int i, chave, tam = 20;
	int indRetornado;
	
	printf("\nDigite o ID a pesquisar: ");
	scanf("%d", &chave);
	
	indRetornado = pesquisaSequencial(vetor, tam, chave);
	
	if(indRetornado == -1) {
		printf("Chave nao encontrada.");
	} else {
		printf("Chave foi encontrada na posicao %d", indRetornado+1);
	}
}