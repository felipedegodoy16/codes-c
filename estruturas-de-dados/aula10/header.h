#ifndef LISTA_H /* é uma diretiva, é um teste para que se a LISTA_H não tiver sido definida ele define */

#define LISTA_H
/* declaração da estrutura de cada noh */
typedef struct _no {
	int id;
	struct _no *proximo;
} No;

/* declarações das opações */
void inicializaLista(No**);
int listaVazia(No*);
void imprimeLista(No*);

void insereInicio(No**, int);
void insereFinal(No**, int);

void removeInicio(No**, int);
void removeFinal(No**, int);

#endif
