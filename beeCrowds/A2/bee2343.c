// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>
 
int main() {
 
	unsigned matriz[600][600], casos, i, x, y, raios=0;
    
    scanf("%u", &casos);
    
    for(i = 0; i < casos; i++) {
    	scanf("%u %u", &x, &y);
    	
    	if(matriz[x][y] == 1) {
    		raios = 1;
		} else {
			matriz[x][y] = 1;
		}
	}
	
	printf("%u\n", raios);
 
    return 0;
}