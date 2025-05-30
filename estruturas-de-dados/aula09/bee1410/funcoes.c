#include <stdio.h>
#include "AULA09.h"

#define TRUE 1

void ordenaCrescente(int *jog, int N) {
	int i, j, aux, troca = 1;
	for(i=0; (i<N-1 && troca); i++) {
		troca = 0;
		for(j=0; j<N-i-1; j++) {
			if(jog[j] > jog[j+1]) {
				aux = jog[j];
				jog[j] = jog[j+1];
				jog[j+1] = aux;
				troca = 1;
			}
		}
	}
}

void carregaEquipe(Time *equipe, int qde) {
	int i;
	equipe->qde = qde;
	for(i = 0; i < equipe->qde; i++) {
		scanf("%d", &equipe->jogador[i]);
	}
}

void organizaEquipe(Time *equipe) {
	ordenaCrescente(&equipea->jogador[0], equipe->qde);
}

char analisaLance(Time a, Time d) {
	if(a.jogador[0] < d.jogador[1])
		return 'Y';
	
	return 'N';
}