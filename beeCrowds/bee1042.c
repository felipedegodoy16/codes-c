#include <stdio.h>
 
int main() {
 
    int vet[3], i, vet2[3], aux;

    for(i=0; i < 3; i++){
	scanf("%d", &vet[i]);
	vet2[i] = vet[i];
    }

    if(vet[1]<vet[0] && vet[1]<vet[2]){
	aux = vet[0];
	vet[0] = vet[1];
	vet[1] = aux;
    } else if(vet[2]<vet[0] && vet[2]<vet[1]){
	aux = vet[0];
	vet[0] = vet[2];
	vet[2] = aux;
    }

    if(vet[2]<vet[1]){
	aux = vet[1];
	vet[1] = vet[2];
	vet[2] = aux;
    }

    for(i=0; i < 3; i++)
        printf("%d\n", vet[i]);

    printf("\n");

    for(i=0; i < 3; i++)
        printf("%d\n", vet2[i]);

    return 0;
}