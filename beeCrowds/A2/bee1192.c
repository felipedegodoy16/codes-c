// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>
#include <ctype.h>

void calculo(int num1, char letra, int num2) {
	
	int total, i;
	
	if(num1 == num2) {
		total = num1 * num2;
	} else if(isupper(letra) != 0) {
		total = num2 - num1;
	} else {
		total = num1 + num2;
	}
	
	printf("%d\n", total);
}
 
int main() {
 
    int casos, i, num1, num2;
    char letra;
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++) {
    	scanf("%d%c%d", &num1, &letra, &num2);
    	calculo(num1, letra, num2);
	}
 
    return 0;
}