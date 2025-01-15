#include <stdio.h>

void calculo(int *valor, int *n100, int *n50, int *n20, int *n10, int *n5, int *n2, int *n1) {
	
	*n100 = *valor / 100;
	*valor %= 100;
	*n50 = *valor / 50;
	*valor %= 50;
	*n20 = *valor / 20;
	*valor %= 20;
	*n10 = *valor / 10;
	*valor %= 10;
	*n5 = *valor / 5;
	*valor %= 5;
	*n2 = *valor / 2;
	*valor %= 2;
	*n1 = *valor;
	
}
 
int main() {
 
    int valor;
    int n100, n50, n20, n10, n5, n2, n1;
    
    scanf("%d", &valor);
    
    printf("%d\n", valor);
    
    calculo(&valor, &n100, &n50, &n20, &n10, &n5, &n2, &n1);
    
    printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);
	printf("%d nota(s) de R$ 2,00\n", n2);
	printf("%d nota(s) de R$ 1,00\n", n1);
 
    return 0;
}