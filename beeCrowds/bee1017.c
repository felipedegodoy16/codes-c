#include <stdio.h>
 
int main() {
 
    int tempo, veloc;
    float dist, combus;
    
    scanf("%d %d", &tempo, &veloc);
    dist = tempo * veloc;
    combus = dist /12;
    
    printf("%.3f\n", combus);
 
    return 0;
}
