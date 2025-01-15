#include <stdio.h>

double verificaRecorde(int tempo, int distancia){
	double media;
	
	media = (double) distancia/tempo;
	
	return media;
}

int main(){
	
	int dias, temp, dist, i;
	double media, recorde=-1;
	
	while(scanf("%d", &dias) != EOF){
	    recorde=-1;
		for(i = 1; i <= dias; i++){
			scanf("%d %d", &temp, &dist);
			media = verificaRecorde(temp, dist);
			if(media > recorde){
				printf("%d\n", i);
				recorde = media;
			}
		}
	}
	
	return 0;
}