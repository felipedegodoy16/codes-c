#include <stdio.h>

int main() {
	float nota[5], media=0;
	int i;
	
	for(i=0; i<5; i++){
		scanf("%f", &nota[i]);
	}
	
	for(i=0; i<5; i++){
		media+=nota[i];
	}
	
	media/=5;
	
	printf("Media = %f", media);
	
	return 0;
}