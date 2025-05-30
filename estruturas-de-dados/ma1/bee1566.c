// Alessander Pereira de Luna RA: 107399
// Diego Luiz Machado RA: 116760
// Felipe Ricardo Pires de Godoy RA: 117285 - Líder
// Pedro Henrique Gomes RA: 117595
// Rafael Rodrigues de Albuquerque RA: 116324
// Vinicius Sena do Prado RA: 117245

#include <stdio.h>
#include <stdlib.h>

void quicksort(int *vetor, int esquerda, int direita){
    
    int i, j, pivo, aux;
    
    pivo = vetor[esquerda];
    
    i = esquerda;
    j = direita;
    
    while (i<=j){
        while(vetor[i] < pivo && i < direita){
            i= i+1;
        }    
        
        while(vetor[j] > pivo && j > esquerda){
            j= j-1;    
        }
        
        
        if(i<=j){
           aux = vetor[i];
           vetor[i] = vetor[j];
           vetor[j] = aux;
           i= i+1;
           j= j-1;
        }
    }
    
    if (j > esquerda)
        quicksort(vetor, esquerda, j);
        
    if(i < direita)
       quicksort(vetor, i, direita);
    
}

int main(){
    int i, j, teste, pessoas;
    
    scanf("%d", &teste);

    for(i=0; i<teste; i++){
        scanf("%d", &pessoas);
        
        int *vet;
        vet = (int *) malloc(pessoas * sizeof(int));
        
        for(j=0; j<pessoas; j++){
            scanf("%d", &vet[j]);
        }
        
        quicksort(vet, 0, pessoas-1);
        for(j=0; j<pessoas-1; j++){
            printf("%d ", vet[j]);
        }
        
        printf("%d\n", vet[j]);
        
        free(vet);
        
    }
    
    return 0;
}