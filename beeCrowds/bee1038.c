#include <stdio.h>
 
int main() {
	
	int item, qtd;
	double total;
 
    scanf("%d %d", &item, &qtd);
    
    if(item == 1)
    	total = qtd*4;
    else if(item == 2)
    	total = qtd*4.5;
    else if(item == 3)
    	total = qtd*5;
    else if(item == 4)
    	total = qtd*2;
    else if(item == 5)
    	total = qtd*1.5;
    else{
    	printf("Esse numero nao eh valido\n");
    	return 0;
	}
    
    printf("Total: R$ %.2lf\n", total);
 
    return 0;
}
