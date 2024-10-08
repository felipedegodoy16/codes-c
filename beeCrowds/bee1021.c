#include <stdio.h>
 
int main() {
 
    double valor;
    int notas;
    
    scanf("%lf", &valor);
    notas = valor /100;
    valor = valor - (notas *100);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas);
    
    notas = valor /50;
    valor = valor - (notas *50);
    printf("%d nota(s) de R$ 50.00\n", notas);
    
    notas = valor /20;
    valor = valor - (notas *20);
    printf("%d nota(s) de R$ 20.00\n", notas);
    
    notas = valor /10;
    valor = valor - (notas *10);
    printf("%d nota(s) de R$ 10.00\n", notas);
    
    notas = valor /5;
    valor = valor - (notas *5);
    printf("%d nota(s) de R$ 5.00\n", notas);
    
    notas = valor /2;
    valor = valor - (notas *2);
    printf("%d nota(s) de R$ 2.00\n", notas);
    
    notas = valor;
    valor = valor - notas;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", notas);
    
    notas = valor /0.5;
    valor = valor - (notas *0.5);
    printf("%d moeda(s) de R$ 0.50\n", notas);
    
    notas = valor /0.25;
    valor = valor - (notas *0.25);
    printf("%d moeda(s) de R$ 0.25\n", notas);
    
    notas = valor /0.1;
    valor = valor - (notas *0.1);
    printf("%d moeda(s) de R$ 0.10\n", notas);
    
    notas = valor /0.05;
    valor = valor - (notas *0.05);
    printf("%d moeda(s) de R$ 0.05\n", notas);
    
    notas = valor /0.01;
    valor = valor - notas;
    printf("%d moeda(s) de R$ 0.01\n", notas);
 
    return 0;
}
