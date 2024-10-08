#include <stdio.h>
 
int main() {
 
    char nome[20];
    double salario, vendas, total;

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    total = salario + (vendas * 15/100);

    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}