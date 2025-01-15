#include <stdio.h>
 
int main() {
 
    int i, j, colNum;
    float matriz[5][10], menor=10000;
    
    for(i=0; i<5; i++){
    	for(j=0; j<10; j++){
    		scanf("%f", &matriz[i][j]);
			if(matriz[i][j] < menor){
    			menor = matriz[i][j];
    			colNum = j;
			}
		}
	}
	
	for(i=0; i<5; i++){
		printf("%.2f\n", matriz[i][colNum]);
	}
 
    return 0;
}
