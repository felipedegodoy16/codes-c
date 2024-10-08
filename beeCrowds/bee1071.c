#include <stdio.h>
 
int main() {
 
    int val1, val2, aux, soma=0, i;
    
    scanf("%d %d", &val1, &val2);
    
    if(val1 > val2){
    	aux = val1;
    	val1 = val2;
    	val2 = aux;    	
	}
	
	val1++;
    
    for(i=val1; i<val2; i++){
    	if(i%2 != 0)
    		soma += i;
	}
	
	printf("%d\n", soma);
 
    return 0;
}
