#include <stdio.h>
#include <stdlib.h>
#include "funcoes.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Aluno *a;
	int qtd;
	
	scanf("%d", &qtd);
	
	a = malloc(qtd * sizeof(Aluno));
	
	carregarAlunos(a, qtd);
	
	return 0;
}