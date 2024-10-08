#include <stdio.h>
 
int main() {
 
    int cod, qtde, cod2, qtde2;
    double val, val2, total;

    scanf("%d %d %lf", &cod, &qtde, &val);
    scanf("%d %d %lf", &cod2, &qtde2, &val2);

    total = (qtde*val) + (qtde2*val2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}