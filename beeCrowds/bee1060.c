#include <stdio.h>
 
int main() {
 
    int c, positivos;
    double valor[6];
    positivos = 0;
    c = 1;
    
    for(int i = 0; i < 6; i++){
    	printf("Digite o %d valor: ", c++);
    	scanf("%lf", &valor[i]);
    	if (valor[i] > 0) {
    		positivos++;
		}
	}
	printf("%d valores positivos\n", positivos);
 
    return 0;
}