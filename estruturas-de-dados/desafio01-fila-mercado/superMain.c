#include <stdio.h>
#include "superOperacoes.c"

int main(){
	
	No *pref, *rapido, *comum, *caixas, *aux, *chamado;
	No *auxPref, *auxRapido, *auxComum;
	int nroPref=0, nroRapido=0, nroComum=0, nroCaixa=3, op;
	int hora, min, seg, totalSeg, livre, media;
	int totalSenhas, tempoPref=0, tempoRapido=0, tempoComum=0;
	int tempoEsperaPref=0, tempoEsperaRapido=0, tempoEsperaComum=0;
	int ultimoLista;
	
	inicializaFila(&pref);
	inicializaFila(&rapido);
	inicializaFila(&comum);
	
	inicializaFila(&caixas);
	insereElemento(&caixas, 1, 0);
	insereElemento(&caixas, 2, 0);
	insereElemento(&caixas, 3, 0);
	
	while(1){
		printf("\nSUPERMERCADO DO IVAN\n");
	    printf("1 - Gerar senha preferencial\n");
	    printf("2 - Gerar senha caixa rapido\n");
	    printf("3 - Gerar senha caixa comum\n");
	    printf("4 - Precisa abrir caixa?\n");
	    printf("5 - Exibir fila preferencial\n");
	    printf("6 - Exibir fila caixa rapido\n");
	    printf("7 - Exibir fila caixa comum\n");
	    printf("8 - Exibir fila de caixas abertos\n");
	    printf("9 - Alertando caixa livre\n");
	    printf("10 - Tempo de espera preferencial\n");
	    printf("11 - Tempo de espera caixa rapido\n");
	    printf("12 - Tempo de espera caixa comum\n");
	    printf("13 - Tempo medio de atendimento\n");
	    printf("14 - Remover caixa se necessario\n");
	    printf("15 - Encerra\n");
	    scanf("%d", &op);
	    
	    if(op==15)
	    	break;
	    
	    if(op==1){
	    	nroPref++;
	    	printf("Hora de geracao da senha: ");
	    	scanf("%d %d %d", &hora, &min, &seg);
	    	totalSeg = seg + (min*60) + (hora * 60 * 60);
	    	insereElemento(&pref, nroPref, totalSeg);
		}
		
		if(op==2){
	    	nroRapido++;
	    	printf("Hora de geracao da senha: ");
	    	scanf("%d %d %d", &hora, &min, &seg);
	    	totalSeg = seg + (min*60) + (hora * 60 * 60);
	    	insereElemento(&rapido, nroRapido, totalSeg);
		}
		
		if(op==3){
	    	nroComum++;
	    	printf("Hora de geracao da senha: ");
	    	scanf("%d %d %d", &hora, &min, &seg);
	    	totalSeg = seg + (min*60) + (hora * 60 * 60);
	    	insereElemento(&comum, nroComum, totalSeg);
		}
		
		if(op==4){
			printf("Horario atual: ");
	    	scanf("%d %d %d", &hora, &min, &seg);
			totalSeg = seg + (min*60) + (hora * 60 * 60);
		
			auxPref = chamaSenha(pref);
			if(auxPref == NULL)
				tempoPref = 0;
			else
				tempoPref = totalSeg - auxPref->horaGerada;
				
			auxRapido = chamaSenha(rapido);
				if(auxRapido == NULL)
					tempoRapido = 0;
				else
					tempoRapido = totalSeg - auxRapido->horaGerada;
					
			auxComum = chamaSenha(comum);
				if(auxComum == NULL)
					tempoComum = 0;
				else
					tempoComum = totalSeg - auxComum->horaGerada;
			
			if(tempoPref >= 900){
				if(nroCaixa >= 25)
					printf("O numero maximo de caixas abertos foi atingido.\n");
				else{
					nroCaixa++;
					insereElemento(&caixas, nroCaixa, 0);
				}
			} else if(tempoRapido >= 1500) {
				if(nroCaixa >= 25)
					printf("O numero maximo de caixas abertos foi atingido.\n");
				else{
					nroCaixa++;
					insereElemento(&caixas, nroCaixa, 0);
				}
			} else if(tempoComum >= 2400)
				if(nroCaixa >= 25)
					printf("O numero maximo de caixas abertos foi atingido.\n");
				else{
					nroCaixa++;
					insereElemento(&caixas, nroCaixa, 0);
				}
			else {
				printf("Nao eh necessario abrir caixas.\n");
			}
		}
	    
	    if(op==5)
	    	imprimeFila(pref);
	    	
	    if(op==6)
	    	imprimeFila(rapido);
	    	
	    if(op==7)
	    	imprimeFila(comum);
	    	
	    if(op==8)
	    	imprimeFila(caixas);
	    	
	    if(op==9){
			scanf("%d", &livre);
			aux = pesquisaElemento(caixas, livre);
			
			if(aux == NULL)
				printf("Esse caixa nao existe.\n");
    		else{
    			printf("Caixa %d livre!\n", aux->nroAtendimento);
    			scanf("%d %d %d", &hora, &min, &seg);
    			totalSeg = seg + (min*60) + (hora * 60 * 60);
    			aux->horaGerada = totalSeg;
    			chamado = chamaSenha(pref);
    			if(chamado == NULL){
    				chamado = chamaSenha(rapido);
    				if(chamado == NULL){
    					chamado = chamaSenha(comum);
    					if(chamado == NULL)
    						printf("As filas estao vazias.\n");
    					else{
    						totalComum += aux->horaGerada - chamado->horaGerada;
    						tempoEsperaComum = aux->horaGerada - chamado->horaGerada;
    						ultimoAtendComum = chamado->nroAtendimento;
    						removeElemento(&comum);
						}
					} else{
    					totalRapido += aux->horaGerada - chamado->horaGerada;
    					tempoEsperaRapido = aux->horaGerada - chamado->horaGerada;
    					ultimoAtendRapido = chamado->nroAtendimento;
    					removeElemento(&rapido);
					}
				} else{
    				totalPref += aux->horaGerada - chamado->horaGerada;
					tempoEsperaPref = aux->horaGerada - chamado->horaGerada;
    				ultimoAtendPref = chamado->nroAtendimento;
    				removeElemento(&pref);
				}
			}
		}
		
		if(op==10){
			ultimoLista = pegaFinal(&pref);
			if(ultimoLista==0)
				printf("A lista esa vazia.\n");
			else{
				tempoEsperaPref = tempoEsperaPref * (ultimoLista - ultimoAtendPref);
				hora = (tempoEsperaPref /60) /60;
				min = (tempoEsperaPref - (hora * 60 * 60)) /60;
				seg = (tempoEsperaPref - (hora * 60 * 60)) - (min*60);
				printf("O tempo de espera eh aproximadamente: %d:%d:%d\n", hora, min, seg);
			}
		}
		
		if(op==11){
			ultimoLista = pegaFinal(&rapido);
			if(ultimoLista==0)
				printf("A lista esa vazia.\n");
			else{
				tempoEsperaRapido = tempoEsperaRapido * (ultimoLista - ultimoAtendRapido);
				hora = (tempoEsperaRapido /60) /60;
				min = (tempoEsperaRapido - (hora * 60 * 60)) /60;
				seg = (tempoEsperaRapido - (hora * 60 * 60)) - (min*60);
				printf("O tempo de espera eh aproximadamente: %d:%d:%d\n", hora, min, seg);
			}
		}
		
		if(op==12){
			ultimoLista = pegaFinal(&rapido);
			if(ultimoLista==0)
				printf("A lista esa vazia.\n");
			else{
				tempoEsperaRapido = tempoEsperaRapido * (ultimoLista - ultimoAtendRapido);
				hora = (tempoEsperaRapido /60) /60;
				min = (tempoEsperaRapido - (hora * 60 * 60)) /60;
				seg = (tempoEsperaRapido - (hora * 60 * 60)) - (min*60);
				printf("O tempo de espera eh aproximadamente: %d:%d:%d\n", hora, min, seg);
			}
		}
		
		if(op==13){
			totalSenhas = ultimoAtendPref + ultimoAtendRapido + ultimoAtendComum;
			totalAtendimento = totalPref + totalRapido + totalComum;
			media = totalAtendimento / totalSenhas;
			
			hora = (media /60) /60;
			min = (media - (hora * 60 * 60)) /60;
			seg = (media - (hora * 60 * 60)) - (min*60);
			
			printf("O tempo medio para cada atendimento foi de: %d:%d:%d\n", hora, min, seg);
		}
		
	    if(op==14){
	    	if(nroCaixa<=3)
	    		printf("O numero minimo de caixas abertos ja foi atingido, nao eh possivel fechar mais caixas.\n");
	    	else{
	    		nroCaixa--;
	    		removeCaixa(&caixas);
			}
		}
		
		
			
	}
	
	return 0;
}