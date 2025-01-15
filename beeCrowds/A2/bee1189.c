// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>
 
int main() {
 
    float matriz[12][12], calculo=0;
    int i, j;
    char op;
    
    scanf("%c", &op);
    
    for(i = 0; i < 12; i++) {
    	for(j = 0; j < 12; j++) {
    		scanf("%f", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < 12; i++) {
    	for(j = 0; j < 12; j++) {
    		if(i == j || i + j > 10) {
    			break;
			} else {
				calculo += matriz[i][j];
			}
		}
	}
	
	if(op == 'M') {
		calculo /= 144;
	}
	
	printf("%.1f\n", calculo);
 
    return 0;
}