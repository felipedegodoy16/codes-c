#include <stdio.h>
#include <math.h>
 
int main() {
 
    int num, i, potencia;
    
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
    	if(i%2==0){
    		potencia = pow(i, 2);
    		printf("%d^2 = %d\n", i, potencia);
    		i++;
		}
	}
	
    return 0;
}
