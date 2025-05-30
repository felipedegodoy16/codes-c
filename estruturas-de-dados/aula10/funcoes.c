#include <stdio.h>
#include "header.h"

void inicializaLista(No **lista) {
	*lista = NULL;
}

int listaVazia(No *lista) {
	if(lista==NULL) 
		return 1;
		
	return 0;	
}

void imprimeLista(No *lista) {
	No *aux = lista;
	
	if(listaVazia(lista)) {
		printf("A lista estah vazia!!!\n");
		return;
	}
	
	printf("Lista: [");
	
	while(aux != NULL) {
		printf("%d -> ", lista->id);
		aux = aux->proximo;
	}
	
	printf("]\n");
	
	return;
}