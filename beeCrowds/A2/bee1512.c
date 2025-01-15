// 974006 - 107399 - Alessander Pereira de Luna
// 973973 - 116760 - Diego Luiz Machado
// 973982 - 117285 - Felipe Ricardo Pires de Godoy
// 974011 - 116545 - Lincon Samuel de Andrade
// 974032 - 117595 - Pedro Gomes
// 974061 - 116324 - Rafael Rodrigues de Albuquerque
// 974023 - 117245 - Vinicius Senna

#include <stdio.h>

int encontradivMaximo(int A, int B){

    while(B != 0) {
        int C = B;
        B = A % B;
        A = C;
    }

    return A;

}

int MMC(int A, int B) {

    return (A * B)/encontradivMaximo(A,B);
}

int main() {
    int N, A, B, i;
    while(1) {
        scanf("%d %d %d", &N, &A, &B);
        if(N == 0 && A == 0 && B == 0)
           break;

        printf("%d\n", N/A+N/B-N/MMC(A,B));
    }
    return 0;
} 