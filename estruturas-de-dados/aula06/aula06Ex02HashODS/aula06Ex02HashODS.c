#include <stdio.h>
#include <string.h>

#define TAM_HASH 97
#define ESTADOS 27

int hashFunction(int key) {
	int code;
	
	code = key % TAM_HASH;
	
	return code;
}

int main() {
	int i, hashCode, tam, carac, est_ascii, colisoes = 0;
	
	char sigla[3];
	char estado[100];
	
	char hashTable[TAM_HASH][100];
	
	// iniciar todas as posições da tabela como vazias
	for(i = 0; i < TAM_HASH; i++)
		strcpy(hashTable[i], "");
		
	// loop para processamento de cada linha do arquivo de entrada
	for(i = 0; i < ESTADOS; i++) {
		est_ascii = 0;
		
		scanf("%s", &sigla);
		getchar();
		gets(estado);
		
		tam = strlen(estado);
		
		for(carac = 0; carac < tam; carac++)
			est_ascii += estado[carac];
		
		hashCode = hashFunction(est_ascii);
		
//		printf("%d\n", hashCode);
		
		// testar e houve colisão
		if(strcmp(hashTable[hashCode], "") == 0)
			strcpy(hashTable[hashCode], estado);
		else
			colisoes++;
	}
	
	// exibe os Ras que ficaram armazenados
	for(i = 0; i < TAM_HASH; i++)
		if(strcmp(hashTable[i], "") != 0)
			printf("Estado armazenado: %s com hashCode %d\n", hashTable[i], i);
			
	printf("O numero de colisoes eh %d", colisoes);
			
	return 0;
}