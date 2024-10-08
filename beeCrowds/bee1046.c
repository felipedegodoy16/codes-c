#include <stdio.h>
 
int main() {

    int horaI, horaF, duracao;
    
    printf("Digite a hora inicial: ");
    scanf("%d", &horaI);
    
    printf("Digite a hora final: ");
    scanf("%d", &horaF);
    
    if(horaF < horaI) {
    	duracao = (horaF + 24) - horaI;
	} else if(horaF > horaI){
		duracao = horaF - horaI;
	} else {
		duracao = 24;
	}
	
	printf("O JOGO DUROU %d HORA(S)\n", duracao);
 
    return 0;
}