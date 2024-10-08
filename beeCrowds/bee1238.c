#include <stdio.h>
#include <string.h>
 
int main() {
 
    int casos, i, j, qtd1, qtd2, qtdTotal;
    char palavra1[51], palavra2[51], palavraCerta[105];
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++){
    	scanf("%s %s", palavra1, palavra2);
    	
    	qtd1 = strlen(palavra1);
    	qtd2 = strlen(palavra2);
    	
    	if(qtd1 >= qtd2){
    		for(j = 0; j < qtd2; j++){
    			printf("%c", palavra1[j]);
    			printf("%c", palavra2[j]);
			}
			for(j = j; j < qtd1; j++){
				printf("%c", palavra1[j]);
			}
			printf("\n");
		} else {
			for(j = 0; j < qtd1; j++){
    			printf("%c", palavra1[j]);
    			printf("%c", palavra2[j]);
			}
			for(j = j; j < qtd2; j++){
				printf("%c", palavra2[j]);
			}
			printf("\n");
		}
	}
 
    return 0;
}