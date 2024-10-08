#include <stdio.h>
 
int main() {
 
    int valor, i, posi, maior = 0;
    
    for(i=1; i<101; i++){
    	scanf("%d", &valor);
    	if(valor > maior){
    		posi = i;
    		maior = valor;
		}
	}
	
	printf("%d\n", maior);
	printf("%d\n", posi);
 
    return 0;
}
