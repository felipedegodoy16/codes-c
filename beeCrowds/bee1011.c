#include <stdio.h>
#include <math.h>
 
int main() {
 
    double pi=3.14159, raio, vol;

    scanf("%lf", &raio);

    vol = (4/3.0) * pi * pow(raio, 3);

    printf("VOLUME = %.3lf\n", vol);
 
    return 0;
}