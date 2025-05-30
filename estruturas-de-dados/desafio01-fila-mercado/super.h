#ifndef FILA_H
#define FILA_H
int totalPref=0, totalRapido=0, totalComum=0, totalAtendimento=0;
int ultimoAtendPref=0, ultimoAtendRapido=0, ultimoAtendComum=0;

/* estrutura do noh da fila */
typedef struct _no {
    int nroAtendimento;
    int horaGerada;
    struct _no *proximo;
} No;


/* declaracoes das funcoes de fila */
void inicializaFila (No**);
int listaVazia (No*);

void imprimeFila (No*);

void insereElemento (No**, int, int);
void removeElemento (No**);
void removeCaixa (No**);
No* pesquisaElemento (No*, int);
No* chamaSenha (No*);
int pegaFinal (No**);

void esvaziarFila (No**);


#endif
