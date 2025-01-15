// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>
 
int main() {
 
    long double valInicial, valRend;
	long double porc, total;
	unsigned i=1;
    
    while(scanf("%Lf %Lf", &valInicial, &valRend) != EOF) {
    	
    	porc = valInicial * 1/100;
    	total = (valRend - valInicial) / porc;
    	
    	printf("Projeto %u:\n", i);
    	printf("Percentual dos juros da aplicacao: %.2Lf %%\n", total);
    	printf("\n");
    	
    	i++;
	}
	
    return 0;	
}