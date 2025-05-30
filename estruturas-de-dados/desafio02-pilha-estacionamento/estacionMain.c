#include <stdio.h> 
#include "estacionOperacoes.c"

/* -------------------------------------------------------------------- */
int main() {
    No *vagas;
    int i, op, nroVeiculo=0, nro, guia;
    char placa[8];

    inicializaPilha(&vagas);

    imprimePilha(vagas);

    while(1) {
	    printf("\nDIEGO'S PARKING HALL\n");
	    printf("1 - Entrada de um novo carro\n");
	    printf("2 - Saida do ultimo carro\n");
	    printf("3 - Saida de um carro especifico\n");
	    printf("4 - Exibe carros estacionados\n");
	    printf("5 - Encerra\n");
	    scanf("%d", &op);
		if(op==5)
			break;
			
		if(op==1){
			if(nroVeiculo == 18) {
				printf("O estacionamento estah lotado");
				continue;
			}
			
			nroVeiculo++;
			
			printf("Digite a guia de estacionamento: ");
 			scanf("%d", &guia);
			printf("Digite a placa do veiculo: ");
 			scanf("%s", &placa);
 			
 			push(&vagas, guia, placa);
 		}
		
		if(op==2){
			nroVeiculo--;
			pop(&vagas);
		}
    	
		if(op==3){
			nroVeiculo--;
			printf("Numero da guia de estacionamento: ");
			scanf("%d", &nro);
			
			manobra(&vagas, nro);
		}
    	
		if(op==4){
	        imprimePilha(vagas);
		}
    	        
    }

    return 0;

} /* fim da funcao main */
