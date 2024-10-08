#include <stdio.h>
 
int main() {
 
    int valor, a, m, d;
    
    scanf("%d", &valor);
    a = valor /365;
    m = (valor - (a *365)) /30;
    d = valor - (a *365 + m *30);
    
    printf("%d ano(s)\n", a);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
 
    return 0;
}
