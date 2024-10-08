#include <stdio.h>
 
int main() {
 
    int casos, alunoAtual, proxAluno, i;
    float notaAtual=0, proxNota;
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++){
    	scanf("%d", &proxAluno);
    	scanf("%f", &proxNota);
    	
    	if(proxNota >= 8 && proxNota > notaAtual){
    		notaAtual = proxNota;
    		alunoAtual = proxAluno;
		}
	}
	
	if(notaAtual == 0){
		printf("Minimum note not reached\n");
	} else {
		printf("%d\n", alunoAtual);
	}
 
    return 0;
}
