#include <stdio.h>

int main(){
	
	int dias, temp, dist, i;
	double media, recorde=-1;
	
	while(scanf("%d", &dias) != EOF){
	    recorde=-1;
		for(i = 1; i <= dias; i++){
			scanf("%d %d", &temp, &dist);
			media = (double) dist/temp;
			if(media > recorde){
				printf("%d\n", i);
				recorde = media;
			}
		}
	}
	
	return 0;
}