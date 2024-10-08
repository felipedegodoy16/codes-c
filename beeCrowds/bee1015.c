#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x, y, x2, y2, dist;
    
    scanf("%lf %lf", &x, &y);
    scanf("%lf %lf", &x2, &y2);
    
    dist = sqrt(pow((x2-x), 2) + pow((y2-y), 2));
    
    printf("%.4lf\n", dist);
 
    return 0;
}