#include <stdio.h>
 
int main() {
 
    int a, b, aux;
    
    scanf("%d %d", &a, &b);
    
    if(a>b){
    	aux = b;
    	b = a;
    	a = aux;
	}
    
    if(b%a == 0)
    	printf("Sao Multiplos\n");
    else
    	printf("Nao sao Multiplos\n");
 
    return 0;
}
