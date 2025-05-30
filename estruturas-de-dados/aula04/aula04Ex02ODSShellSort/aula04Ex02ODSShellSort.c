#include <stdio.h> 
#define QDEESTADOS 27

typedef struct _mort{
	char  estado[3];
	float mortes09;
	float mortes15;
	float indice;
} mortMaterna;

void shellSort(mortMaterna *vet, int n){
	int indk, i, j, k;
	mortMaterna aux;
	
	int vetk[3] = {5, 3, 1};
	
	for(indk = 0; indk < 3; indk++) {
		k = vetk[indk];
		
		for(i = k; i < n; i++) {
			aux = vet[i];
			
			for(j=i-k; j >= 0 && vet[j].mortes15 > aux.mortes15; j-=k)
				vet[j+k] = vet[j];
				
			vet[j+k] = aux;
		}
	}
}

int main(){
	
	mortMaterna estados[QDEESTADOS];
	
	FILE *in;
	
	in = fopen("A04Ex02_entrada.txt", "r");
	
	if(in == NULL) {
		printf("Problemas ao abrir o arquivo.");
	}

	int i;

	for(i=0; i < QDEESTADOS; i++){
		fscanf(in, "%s %f %f", estados[i].estado, &estados[i].mortes09, &estados[i].mortes15);
		estados[i].indice = estados[i].mortes15 - estados[i].mortes09;
	}

	printf("\nDados em ordem de entrada\n");
	printf("Estado\t2009\t2015\tDiferenca\n");	
	for(i=0; i<QDEESTADOS; i++)
		printf("%s\t%.1f\t%.1f\t%.1f\n",estados[i].estado, estados[i].mortes09, estados[i].mortes15, estados[i].indice);

	shellSort(estados, QDEESTADOS);

	printf("\nDados ordenados por mortalidade em 2015\n");
	printf("Estado\t2009\t2015\tDiferenca\n");	
	for(i=0; i<QDEESTADOS; i++)
		printf("%s\t%.1f\t%.1f\t%.1f\n",estados[i].estado, estados[i].mortes09, estados[i].mortes15, estados[i].indice);
	
	return 0;
}