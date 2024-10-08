#include <stdio.h>
 
int main() {
 
    float sal, imposto;
    
    scanf("%f", &sal);
 
 	if(sal <= 2000){
	    printf("Isento\n");
	    return 0;
	} else if(sal <= 3000){
		imposto = (sal-2000)*8/100;
	} else if(sal <= 4500){
		sal = sal-2000;
		imposto = (1000*8/100) + ((sal-1000)*18/100);
	} else{
		sal = sal-2000;
		imposto = (1000*8/100) + (1500*18/100) + ((sal-2500)*28/100); 
	}
	
	printf("R$ %.2f\n", imposto);
 
    return 0;
}
