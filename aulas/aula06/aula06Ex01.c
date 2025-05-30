#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char palavra[20], palavraLow[20], palavraUp[20];
	int i, qtdLetras;
	
	gets(palavra);
	
	qtdLetras = strlen(palavra);
	printf("%d\n", qtdLetras);
	
	for(i = 0; i < qtdLetras; i++){
		palavraLow[i] = tolower(palavra[i]);
		palavraUp[i] = toupper(palavra[i]);
	}
	
	printf("Palavra maiuscula: %s\n", palavraUp);
	printf("Palavra minuscula: %s\n", palavraLow);
	printf("Palavra de entrada: %s\n", palavra);
	
	return 0;
}
