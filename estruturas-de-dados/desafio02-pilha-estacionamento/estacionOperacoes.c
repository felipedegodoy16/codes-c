#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "estacionHeader.h"

// inicializando a lista (mover NULL para o ponteiro inicio lá do main
void inicializaPilha (No **pilha){
	*pilha = NULL;
}

// testar se a lista está vazia
// retorna 1 se a lista estiver vazia
int pilhaVazia (No *pilha){
	if (pilha == NULL)
	    return 1;
	    
	return 0;	
}

// funcao que exibe todo o conteúdo da lista
void imprimePilha (No *pilha){
	No *aux = pilha;
	
	if (pilhaVazia(pilha) ){	
		printf("A lista esta vazia!!!\n");
		return;
	}
	
	printf("Lista: [");
	
	// loop percorrendo do primeiro ao último nó da lista
	while(aux != NULL){
		printf("%d ", aux->nroCarro);
		printf("%s\n", aux->placa);
		aux = aux->proximo;
	}
	
	printf("]\n");
}

// Inserir noh no inicio
void push(No **pilha, int guia, char *placa){
	
	No *novo;
	
	// cria o novo nó a ser incluído na lista
	novo = (No*) malloc(sizeof(No));
	novo->nroCarro = guia;
	strcpy(novo->placa, placa);
	
	// testar se a lista está vazia
	if (pilhaVazia(*pilha) == 1)
		novo->proximo = NULL;
		
	// caso contrário, o novo nó deve apontar para quem era o primeiro
	// nó da lista
	else
		novo->proximo = *pilha;
		
	*pilha = novo;
}

// Remover noh do inicio
void pop (No **pilha){
	
	No *aux = *pilha;
	
	if(pilhaVazia(*pilha))
		return;
		
	// fazer o início apontar para o segundo nó da estrutura
	*pilha = aux->proximo;
	
	// devolver o uso da memória para o sistema operacional
	free(aux);	
}

// Remover noh específico
void manobra (No **pilha, int nroCarro) {
	No *temp;
	
	inicializaPilha(&temp);
	
	// testar se a lista está vazia: esse noh será o primeiro e último ao mesmo tempo
	if(pilhaVazia(*pilha)) {
		return;
	}
	
	// caminhar na lista até encontrar um ID maior que o ID a ser incluído
	while((pilha != NULL) && ((*pilha)->nroCarro != nroCarro)) {
		push(&temp, (*pilha)->nroCarro, (*pilha)->placa);
		pop(pilha);
	}
	
	imprimePilha(*pilha);
	imprimePilha(temp);
	
	// remover noh do inicio
	if((*pilha)->nroCarro == nroCarro) {	
		pop(pilha);
	}
	
	while(temp != NULL) {
		push(pilha, temp->nroCarro, temp->placa);
		pop(&temp);
	}
	
	// remover do meio da lista
	free(temp);
}






