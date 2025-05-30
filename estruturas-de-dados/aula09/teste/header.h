#ifndef Aula09_Ex03_HEADER
#define Aula09_Ex03_HEADER

typedef struct {
	int ra;
	char nome[21];
	int idade;
	float media;
} Aluno;

void carregarAlunos(Aluno *, int);
void mostrarInformacoes(Aluno *, int);

#endif