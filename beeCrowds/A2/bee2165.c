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
 
    char str[501];
    int totalCarac;
    
    gets(str);
    
    totalCarac = strlen(str);
    
    if(totalCarac <= 140) {
    	printf("TWEET\n");
	} else {
		printf("MUTE\n");
	}
 
    return 0;
}