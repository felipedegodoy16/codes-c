// Alessander Pereira de Luna RA: 107399
// Diego Luiz Machado RA: 116760
// Felipe Ricardo Pires de Godoy RA: 117285 - Líder
// Pedro Henrique Gomes RA: 117595
// Rafael Rodrigues de Albuquerque RA: 116324
// Vinicius Sena do Prado RA: 117245

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int id;
	int h;
	int w;
	int l;
	int volume;
} Presente;

int compare(Presente *a, Presente *b) {

	if (a->volume == b->volume)
	{

		if (a->id > b->id)
			return 1;
		else
			return -1;

	}
	else if (a->volume > b->volume)
		return -1;
	else
		return 1;

}

int compareCres (const void *a, const void *b) {
  Presente *pA = (Presente *)a;
  Presente *pB = (Presente *)b;
  
  return pA->id - pB->id;
}

void calcVolume(Presente *p, int n) {
	int i;
	
	for(i = 0; i < n; i++) {
		p[i].volume = p[i].h * p[i].w * p[i].l;
	}
}

int main() {
	int casos, papaiNoel, presentesEscolher, i, ids[100100];
	Presente *p;
	
	scanf("%d", &casos);
	
	while(casos--) {
		scanf("%d", &papaiNoel);
		scanf("%d", &presentesEscolher);
		
		p = (Presente*) malloc (papaiNoel * sizeof(Presente));
		
		for(i = 0; i < papaiNoel; ++i)
			scanf("%d %d %d %d", &p[i].id, &p[i].h, &p[i].w, &p[i].l);
		
		calcVolume(p, papaiNoel);
		
		qsort(p, papaiNoel, sizeof(Presente), compare);
		
		for (i = 0; i < presentesEscolher; ++i) 
			ids[i] = p[i].id;
		
		qsort(ids, presentesEscolher, sizeof(int), compareCres);
		
		for(i = 0; i < presentesEscolher; ++i) {
			if(i != 0 && i != presentesEscolher)
				printf(" ");
				
			printf("%d", ids[i]);
		}
		
		printf("\n");
	}
	
	return 0;
}