#include <stdio.h>
 
int main() {
 
    int casos, contador;
    double notas[3];
    
    printf("Digite o numero de casos: ");
    scanf("%d", &casos);
    
    double medias[casos];
    
    for(int i = 0; i < casos; i++){
    	contador = 1;
    	for(int c = 0; c < 3; c++){
    		printf("Digite o %d valor: ", contador++);
    		scanf("%lf", &notas[c]);
		}
		medias[i] = ((notas[0]*2) + (notas[1]*3) + (notas[2]*5)) /10;
	}
	for(int t = 0; t < casos; t++){
		printf("%.1lf\n", medias[t]);
	}
 
    return 0;
}