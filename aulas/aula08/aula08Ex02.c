#include <stdio.h>

int main() {
	int vetor[10], media=0;
	int i;
	
	for(i=0; i<10; i++){
		scanf("%d", &vetor[i]);
		media+=vetor[i];
	}
	
	media/=10;
	
	for(i=0; i<10; i++){
		printf("Numero = %d - Media = %d - ", vetor[i], media);
		if(vetor[i] == media){
			printf("Iguais\n");
		} else {
			printf("Diferentes\n");
		}
	}
	
	return 0;
}