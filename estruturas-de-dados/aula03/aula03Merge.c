#include <stdio.h>
#include <stdlib.h>             /* malloc e rand */

/* ************************************************ */
/* ************ FUNÇÕES PARA MERGESORT ************ */
/* ************************************************ */
 
/* -------------------------------------------------------------------- */
void merge(int *v, int n) {
	
	int meio, i, j, k;
	
	meio = n/2;
	
	int *aux;
	aux = (int *) malloc (n * sizeof(int));
	
	i = 0;
	j = meio;
	k = 0;
	
	while(i < meio && j < n) {
		if(v[i] <= v[j])
			aux[k++] = v[i++];
		else
			aux[k++] = v[j++];
	}
	
	if(i == meio)
		while(j < n)
			aux[k++] = v[j++];
	else
		while(i < meio)
			aux[k++] = v[i++];
			
	for(i = 0; i < n; i++)
		v[i] = aux[i];

	free(aux);
	
} /* end of mergeSort */

/* -------------------------------------------------------------------- */
void mergeSort(int *v, int n) {

	int meio;
	
	if(n > 1) {
		meio = n/2;
		
		mergeSort(v, meio);
		mergeSort(v + meio, n - meio);
		
		merge(v, n);
	}

} /* end of mergeSort */       


/* ************************************************ */
/* ***********           MAIN           *********** */
/* ************************************************ */
int main (void) {
	
    int *baseDados;
    
    int n, i;

    /* gerando dados para teste */
    n = 10;
    baseDados = (int*) malloc (n * sizeof(int));
    
    for (i = 0; i < n; i++) 
		baseDados[i] = rand() % 80;
    
    
    /* testando Merge sort */
    printf("\nMerge sort\n\n");

    printf("\nEstrutura não ordenada\n");
    for (i = 0; i < n; i++)
        printf("%d ", baseDados[i]);
        
    mergeSort(baseDados, n);
    
    printf("\nEstrutura ordenada\n");
    for (i = 0; i < n; i++)
        printf("%d ", baseDados[i]);
        
    printf("\n");

    free(baseDados);

    return 0;

}
