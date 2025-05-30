#include <stdio.h>
#include "header.h"

void carregarAlunos(Aluno *a, int qtd) {
	int i;
	Aluno alu;
	for(i=0; i<qtd; i++) {
		scanf("%d %s %d", &alu.ra, alu.nome, &alu.idade);
		a[i] = alu;
	}
}

void mostrarInformacoes(Aluno *a, int qtd) {
	int i;
	for(i=0; i<qtd; i++) {
		printf("%d %s %d\n", a->ra, a->nome, a->idade);
	}
}