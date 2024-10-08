#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char palavra[20];
	int i, qtdLetras, vog=0;
	
	gets(palavra);
	
	qtdLetras = strlen(palavra);
	for(i = 0; i < qtdLetras; i++){
		if(toupper(palavra[i]) == 'A' || toupper(palavra[i]) == 'E' || toupper(palavra[i]) == 'I' || toupper(palavra[i]) == 'O' || toupper(palavra[i]) == 'U'){
			vog++;
		}
	}
	
	printf("Ha %d vogais na palavra: %s\n", vog, palavra);
	
	return 0;
}
