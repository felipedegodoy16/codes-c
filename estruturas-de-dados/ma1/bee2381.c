// Alessander Pereira de Luna RA: 107399
// Diego Luiz Machado RA: 116760
// Felipe Ricardo Pires de Godoy RA: 117285 - Líder
// Pedro Henrique Gomes RA: 117595
// Rafael Rodrigues de Albuquerque RA: 116324
// Vinicius Sena do Prado RA: 117245

#include <stdio.h>
#include <string.h>

#define MAX_NOME_ALUNO 25

typedef struct {
    char nome[MAX_NOME_ALUNO];
} Aluno;

void ordena(Aluno *alunos, int tam) {
    
    int i = 1, j = 0;
    Aluno piv;

    while (i < tam) {
        j = i - 1;
        piv = alunos[i];

        while (j >= 0 && strcmp(alunos[j].nome, piv.nome) > 0) {
            alunos[j + 1] = alunos[j];
            j--;
        }

        alunos[j + 1] = piv;
        
        i++;
    }
}

int main() {
    
    int qntAlunos, alunoOrd;

    scanf("%d %d", &qntAlunos, &alunoOrd);

    if (alunoOrd < 1 || alunoOrd > qntAlunos) {
        return 1;
    }

    Aluno alunos[qntAlunos];

    for (int i = 0; i < qntAlunos; i++) {
        scanf("%s", alunos[i].nome);
    }
    
    ordena(alunos, qntAlunos);

    printf("%s\n", alunos[alunoOrd - 1].nome);

    return 0;
}