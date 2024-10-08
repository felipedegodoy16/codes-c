#include <stdio.h>
 
int main() {
 
    float vet[7], media, soma=0;
    int i, posi=0;
    
    for(i=0; i<6; i++){
    	scanf("%f", &vet[i]);
    	if(vet[i]>0){
    		posi++;
    		soma+=vet[i];
		}
	}
	
	media = soma/posi;
	
	printf("%d valores positivos\n", posi);
 	printf("%.1f\n", media);
 
    return 0;
}
