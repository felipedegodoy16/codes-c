#include <stdio.h>
#include <string.h>
 
int main() {
 
    int i, j, linha;
    char op;
    float matriz[12][12], soma=0, media;
    
    scanf("%d", &linha);
    getchar();
    scanf("%c", &op);
    
    for(i=0; i<12; i++){
    	for(j=0; j<12; j++){
    		scanf("%f", &matriz[i][j]);
    		if(i == linha){
    			soma+=matriz[i][j];
			}
		}
	}
	
	switch(op){
		case 'S':
			printf("%.1f\n", soma);
			break;
		case 'M':
			media = soma/12;
			printf("%.1f\n", media);
			break;
	}
 
    return 0;
}
