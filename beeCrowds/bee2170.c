#include <stdio.h>
 
int main() {
 
    int valInicial, valRend, i;
	double porc, total;
    
    for(i = 1; i <= 3; i++) {
    	scanf("%d %d", &valInicial, &valRend);
    	
    	porc = (double) valInicial * 1/100;
    	total = (double) (valRend - valInicial) / porc;
    	
    	printf("Projeto %d:\n", i);
    	printf("Percentual dos juros da aplicacao: %.2lf %%\n", total);
    	printf("\n");
	}
	
    return 0;
    
}