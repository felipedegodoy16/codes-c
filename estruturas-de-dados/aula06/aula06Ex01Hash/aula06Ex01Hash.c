#include <stdio.h>

#define TAM_HASH 97
#define QDEALUNOS 75

int hashFunction(int key) {
	int code;
	
	code = key % TAM_HASH;
	
	return code;
}

int main() {
	int ra, i, hashCode;
	
	int hashTable[TAM_HASH];
	
	// iniciar todas as posições da tabela como vazias
	for(i = 0; i < TAM_HASH; i++)
		hashTable[i] = 0;
		
	// loop para processamento de cada linha do arquivo de entrada
	for(i = 0; i < QDEALUNOS; i++) {
		scanf("%d", &ra);
		
		hashCode = hashFunction(ra);
		
		// testar e houve colisão
		if(hashTable[hashCode] == 0) {
			hashTable[hashCode] = ra;
		}
	}
	
	// exibe os Ras que ficaram armazenados
	for(i = 0; i < TAM_HASH; i++)
		if(hashTable[i] != 0)
			printf("RA armazenado: %d com hashCode %d\n", hashTable[i], i);
			
	return 0;
}