#include <stdio.h>
#include <stdlib.h>

typedef struct _t {
	int numero;
	int pontos;
	int ptsMarcado;
	int ptsSofrido;
	float avg;
} Team;

// código da função quixk sort
void quickSort(Team *dados, int esq, int dir){
	int i, j, pivo;
	
	Team temp;
	
	pivo = esq;
	i = esq;
	j = dir;
	
	while(i<=j){
		while(dados[i].pontos < dados[pivo].pontos && i < dir)
			i++;
		while(dados[j].pontos > dados[pivo].pontos && j > esq)
			j--;
			
		if(i <= j) {
			temp = dados[i];
			dados[i] = dados[j];
			dados[j] = temp;
			i++;
			j--;
		}	
	}
	
	if(j > esq)
		quickSort(dados, esq, j);
	if(i < dir)
		quickSort(dados, i, dir);
	
}

int main(){
	
	int times, i, time1, pts1, time2, pts2, instancia = 0;
	
	Team teams[105];
	
	while(scanf("%d", &times)) {
		instancia++;
		for(i = 1; i <= times; i++) {
			teams[i].numero = i;
			teams[i].pontos = 0;
			teams[i].ptsMarcado = 0;
			teams[i].ptsSofrido = 0;
		}
		
		while(1) {
			scanf("%d", &time1);
			if(time1 == 0) break;
			scanf("%d %d %d", &pts1, &time2, &pts2);
			
			teams[time1].ptsMarcado += pts1;
			teams[time1].ptsSofrido += pts2;
			teams[time2].ptsMarcado += pts2;
			teams[time2].ptsSofrido += pts1;
			
			if(pts1 > pts2) {
				teams[time1].pontos += 2;
				teams[time2].pontos += 1;
			} else {
				teams[time2].pontos += 2;
				teams[time1].pontos += 1;
			}
		}
		
		for(i = 1; i < times; i++) {
			if(teams[i].ptsSofrido == 0)
				teams[i].avg = teams[i].ptsMarcado;
			else
				teams[i].avg = teams[i].ptsMarcado / teams[i].ptsSofrido;
		}
		
		quickSort(teams, 1, times);
		
		for(i = 1; i <= times; i++)
			printf("%d ", teams[i].numero);
	}
	
	return 0;
}
