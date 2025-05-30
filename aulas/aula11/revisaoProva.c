#include <stdio.h>
#include <string.h>
 
int main() {
 
    int pico=0, casos, i, atual=0;
    
    scanf("%d", &casos);
    
    int vet[casos];
    
    for(i = 0; i < casos; i++) {
    	scanf("%d", &vet[i]);
	}
	
	for(i = 1; i < casos; i++) {
		if(vet[i] > vet[i-1]) {
			pico++;
		}
	}
	
	for(i = 1; i < casos; i++) {
		if(vet[i] > vet[i-1]) {
			if(atual == 1) {
				printf("Sem padrao\n");
				atual = 2;
				break;
			}
			atual = 1;
		} else {
			if(atual == 0) {
				printf("Sem padrao\n");
				atual = 2;
				break;
			}
			atual = 0;
		}
	}
	
	if(atual != 2) {
		printf("Mesmo padrao\n");
	}
	
	printf("%d\n", pico);
 
    return 0;	
}