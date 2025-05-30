#include <stdio.h>
#include <stdlib.h>
#include "super.h"

/* inicializando a fila */
void inicializaFila (No **lista) {

    *lista = NULL;

}

/* verificando se a lista esta vazia */
int listaVazia (No *lista) {

    if (lista == NULL)
        return 1;

    return 0;
    
}

/* imprimir a pilha */
void imprimeFila (No *lista) {

    No *aux = lista;
    int hora, min, seg, resto;

    if (listaVazia(lista) ){
        printf("A fila esta vazia!\n");
        return;
    }

    printf("Fila:  [  ");

    while (aux != NULL) {
    	hora = (aux->horaGerada/60)/60;
    	min = (aux->horaGerada - (hora*60*60)) / 60;
    	seg = (aux->horaGerada - (hora*60*60)) - (min*60);
    	
        printf("%d  %d:%d:%d  //  ", aux->nroAtendimento, hora, min, seg);
        aux = aux->proximo;
    }

    printf("]\n");
    
}

/* inserir elemento no final da fila */
void insereElemento (No **lista, int nroAtendimento, int horaGerada) {
    No *novo;
    No *aux = *lista;

    /* cria o novo atendimento a ser inserido na fila */
    novo = (No*) malloc (sizeof(No));
    novo->nroAtendimento = nroAtendimento;
    novo->horaGerada = horaGerada;
    novo->proximo = NULL;

    /* se a fila estiver vazia, novo atendimento passa a ser o inicio da fila */
     if (listaVazia(*lista)) {
        *lista = novo;
        return;
    }
	
	/* caso contrario, caminha na fila ate parar no ultimo lugar da fila */
    while (aux->proximo != NULL)
         aux = aux->proximo;
        
    /* ultimo atendimento aponta para o novo atendimento */
    aux->proximo = novo;

}

/* funcao que remove o elemento do inicio da fila */
void removeElemento (No **lista) {
    No *aux = *lista;

    if (listaVazia(*lista))
        return;

   /* inicio da lista passa a ser a segunda pessoa (ou NULL) */
    *lista = aux->proximo;

   /* remove a primeira pessoa da fila */
    free(aux);

}

/* funcao que "remove" um caixa */
void removeCaixa (No **lista) {
    No *aux      = *lista;
    No *anterior = *lista;

    if (listaVazia(*lista))
        return;
        
    /* caminha ate o final da fila */
    while (aux->proximo != NULL) {
        anterior = aux;
        aux = aux->proximo;
    }
    
   /* se houver apenas um elemento, entao, inicio torna-se NULL */
    if (aux == *lista)
        *lista = NULL;
        
    /* caso contrario, remove o ultimo caixa da fila */
    else
        anterior->proximo = NULL;
        
    /* remove o utlimo caixa da memoria */
    free(aux);
}

No* pesquisaElemento(No *lista, int livre){
	No *aux = lista;

	//caminhar na lista ate encontrar o ID pesquisado
	while(aux != NULL && aux->nroAtendimento != livre)
		aux = aux->proximo;
	
	return aux;		
}

No* chamaSenha(No *lista){
	No *aux = lista;

	return aux;
		
}

int pegaFinal (No **lista) {
    No *aux      = *lista;
    No *anterior = *lista;

    if (listaVazia(*lista))
        return 0;
        
    /* caminha ate o final da lista */
    while (aux->proximo != NULL) {
        anterior = aux;
        aux = aux->proximo;
    }
    
   /* se houver apenas um elemento, entao, inicio torna-se NULL */
    if (aux == *lista)
        *lista = NULL;
        
    /* caso contrario, remove o ultimo noh da lista */
    else
        anterior->proximo = NULL;
        
    return aux->nroAtendimento;
} /* fim da funcao removeFinal */