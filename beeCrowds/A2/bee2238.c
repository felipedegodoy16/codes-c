// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>

int main() {
    int a, b, c, d, inicio, n = -1;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
	if(a!=b && c!=d){
		inicio = a;
		while(inicio<=c){
			if(inicio % a == 0 && inicio % b != 0 && c % inicio == 0 && d % inicio != 0){
				n = inicio;
				break;
			}
			inicio += a;
		}
	}
	printf("%d\n", n);

    return 0;
}