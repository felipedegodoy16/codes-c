#include <stdio.h>

int main() {
	
	int casos, i, L, R, D;
	
	scanf("%d", &casos);
	
	for(i=0; i<casos; i++){
		scanf("%d %d %d", &L, &R, &D);
		
		if(R>50 && R>L && R>D){
			printf("S\n");
		} else {
			printf("N\n");
		}
	}
	
	return 0;
}
