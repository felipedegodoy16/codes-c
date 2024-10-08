#include <stdio.h>
 
int main() {
 
    int val, pares=0, i;

    for(i = 0; i < 5; i++){
    	scanf("%d", &val);
    	if(val % 2 == 0){
    		pares++;
		}
	}
	
	printf("%d valores pares\n", pares);
 
    return 0;
}

