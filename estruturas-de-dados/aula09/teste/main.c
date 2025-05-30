#include <stdio.h>
#include <stdlib.h>
#include "funcoes.c"

int main(int argc, char *argv[]) {
	
	Aluno *a;
	int qtd;
	
	scanf("%d", &qtd);
	
	a = malloc(qtd * sizeof(Aluno));
	
	carregarAlunos(a, qtd);
	mostrarInformacoes(a, qtd);
	
	return 0;
}