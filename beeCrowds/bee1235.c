#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
 
	int casos, i, qtdLetras, meiaPalavra, j;
	char palavra[255];
	
	scanf("%d", &casos);
	getchar();
	
	for(i = 0; i < casos; i++){
		gets(palavra);
		
		qtdLetras = strlen(palavra);
		meiaPalavra = qtdLetras / 2;
		
		for(j = meiaPalavra-1; j >= 0; j--)
			printf("%c", palavra[j]);
		
		for(j = qtdLetras-1; j >= meiaPalavra; j--){
			printf("%c", palavra[j]);
		}
		
		printf("\n");
	}
 
    return 0;
}
