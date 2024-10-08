#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
 
    int casos, i, j;
    char nome[30];
    float exec, maiorNota, menorNota, nota, notaFinal;
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++){
    	scanf("%s", nome);
    	scanf("%f", &exec);
    	
    	notaFinal = 0;
    	maiorNota = 0;
    	menorNota = 11;
    	
    	for(j = 0; j < 7; j++){
    		scanf("%f", &nota);
    		if(maiorNota < nota){
	    		maiorNota = nota;
			}
			if(menorNota > nota){
				menorNota = nota;
			}
			notaFinal += nota;
		}
		
		notaFinal = (notaFinal - maiorNota - menorNota) * exec;
		
		printf("%s %.2f\n", nome, notaFinal);
	}

    return 0;
}