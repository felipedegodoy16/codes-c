#include <stdio.h>

int main() {
	
	double notas[4], media, notaExame, mediaFinal;
	int c;
	c = 1;
	
	for(int i = 0; i < 4; i++) {
		printf("Digite a nota %d: ", c++);
		scanf("%lf", &notas[i]);
	}
	
	media = (notas[0]*2 + notas[1]*3 + notas[2]*4 + notas[3]) /10;
	
	if (media >= 7) {
		printf("Media: %.1lf\n", media);
		printf("Aluno aprovado.\n");
	} else if (media < 5) {
		printf("Media: %.1lf\n", media);
		printf("Aluno reprovado.\n");
	} else if (media >= 5 && media < 7) {
		printf("Digite a nota do exame: ");
		scanf("%lf", &notaExame);
		
		mediaFinal = (media + notaExame) /2;
		
		printf("Media: %.1lf\n", media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n", notaExame);
		if (mediaFinal >= 5) {
			printf("Aluno aprovado.\n");
		} else {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n", mediaFinal);
	}
	
	return 0;
}