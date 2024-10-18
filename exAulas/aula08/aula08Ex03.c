#include <stdio.h>

int main() {
	
	int matrizA[4][3], matrizB[4][3], matrizC[4][3];
	int i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("A - %d + B - %d = C - %d ", matrizA[i][j], matrizB[i][j], matrizC[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}