#include <stdio.h>
 
int main() {
 
    float sal, reajuste, total;
    int id;
    
    scanf("%f", &sal);
    
    if(sal < 400.01){
    	id = 15;
    	reajuste = sal * id/100;
    	total = sal + reajuste;
	} else if(sal < 800.01){
    	id = 12;
    	reajuste = sal * id/100;
    	total = sal + reajuste;
    } else if(sal < 1200.01){
    	id = 10;
    	reajuste = sal * id/100;
    	total = sal + reajuste;
    } else if(sal < 2000.01){
    	id = 7;
    	reajuste = sal * id/100;
    	total = sal + reajuste;
    } else {
    	id = 4;
    	reajuste = sal * id/100;
    	total = sal + reajuste;
	}
	
	printf("Novo salario: %.2f\n", total);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %%\n", id);
 
    return 0;
}
