// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>
#include <string.h>
 
int main() {
 
    int diaA, mesA, anoA, diaN, mesN, anoN, idade;
    char nome[51];
    
    gets(nome);
 	
 	scanf("%d/%d/%d", &diaA, &mesA, &anoA);
 	scanf("%d/%d/%d", &diaN, &mesN, &anoN);
 	
 	if(mesA == mesN && diaA == diaN) {
 		printf("Feliz aniversario!\n");
 		idade = anoA - anoN;
	} else if(mesA > mesN) {
 		idade = anoA - anoN;
	} else if(mesA == mesN && diaA > diaN) {
		idade = anoA - anoN;
	} else {
		idade = (anoA - anoN) - 1;
	}
	
	printf("Voce tem %d anos %s.\n", idade, nome);
 
    return 0;
}