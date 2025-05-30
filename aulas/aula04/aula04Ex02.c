#include <stdio.h>

int main(){
	
	int i;
	float media=0, id;
	
	for(i=0; i<27; i++){
		scanf("%f", &id);
		media+=id;
	}
	
	media/=5;
	
	printf("O indicador medio eh de: %.2f", media);
	
	return 0;
}
