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
 
	char name[101], lname[101];
	char fullName[202];
	unsigned casos, i, qtdLetrasL, totalLetras, j, cont;
    
    scanf("%u", &casos);
    getchar();
    
    for(i = 0; i < casos; i++) {
    	gets(name);
    	gets(lname);
    	
    	qtdLetrasL = strlen(lname);
    	
    	totalLetras = strlen(name) + strlen(lname);
    	
    	cont = 0;
    	
    	for(j = 0; j < qtdLetrasL; j+=2) {
    		fullName[cont] = name[j];
    		fullName[cont+1] = name[j+1];
    		fullName[cont+2] = lname[j];
    		fullName[cont+3] = lname[j+1];
    		cont += 4;
		}
		
		fullName[totalLetras] = '\0';
		printf("%s\n", fullName);
		
	}
 
    return 0;
}