#include <stdio.h> 

void shellSortAsc(int *vet, int n){
	int indk, i, j, k, aux;
	
	int vetk[3] = {5, 3, 1};
	
	for(indk = 0; indk < 3; indk++) {
		k = vetk[indk];
		
		for(i = k; i < n; i++) {
			aux = vet[i];
			
			for(j=i-k; j >= 0 && vet[j] > aux; j-=k)
				vet[j+k] = vet[j];
				
			vet[j+k] = aux;
		}
	}
}

void shellSortDsc(int *vet, int n){
	int indk, i, j, k, aux;
	
	int vetk[3] = {5, 3, 1};
	
	for(indk = 0; indk < 3; indk++) {
		k = vetk[indk];
		
		for(i = k; i < n; i++) {
			aux = vet[i];
			
			for(j=i-k; j >= 0 && vet[j] < aux; j-=k)
				vet[j+k] = vet[j];
				
			vet[j+k] = aux;
		}
	}
}

int main(){
	
	int qde, numero, i, indp, indi, par[100000], impar[100000];
	
	scanf("%d", &qde);
	
	for(i = 0, indp = -1, indi = -1; i < qde; i++) {
		scanf("%d", &numero);
		
		if(numero % 2 == 0) 
			par[++indp] = numero;
		else
			impar[++indi] = numero;
	}
	
	shellSortAsc(par, indp+1);
	
	shellSortDsc(impar, indi+1);
	
	for(i = 0; i < indp; i++) 
		printf("%d\n", par[i]);
		
	for(i = 0; i < indi; i++) 
		printf("%d\n", impar[i]);
	
	return 0;
}