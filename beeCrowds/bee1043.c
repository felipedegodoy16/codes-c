#include <stdio.h>
 
int main() {
 
    double a, b, c, vet[4], i, aux, teste, calc;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
	vet[0] = a;
	vet[1] = b;
	vet[2] = c;
    
    if(vet[1] > vet[0] && vet[1] > vet[2]){
    	aux = vet[0];
    	vet[0] = vet[1];
    	vet[1] = aux;
	} else if(vet[2] > vet[0] && vet[2] > vet[1]){
		aux = vet[0];
    	vet[0] = vet[2];
    	vet[2] = aux;
	}
	
	teste = vet[1] + vet[2];
    
    if(teste > vet[0]){
    	calc = vet[0] + vet[1] + vet[2];
    	printf("Perimetro = %.1lf\n", calc);
	} else {
    	calc = ((a + b) * c)/2;
    	printf("Area = %.1lf\n", calc);
	}
    		
 
    return 0;
}
