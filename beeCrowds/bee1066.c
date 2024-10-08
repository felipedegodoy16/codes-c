#include <stdio.h>
 
int main() {
 
    int vet[5], posi=0, neg=0, par=0, impar=0, i;
    
    for(i=0; i<5; i++){
    	scanf("%d", &vet[i]);
    	if(vet[i]>0){
    		posi++;
		} else if(vet[i]<0){
			neg++;
		}
		
		if(vet[i]%2==0){
			par++;
		} else {
			impar++;
		}
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", posi);
	printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}
