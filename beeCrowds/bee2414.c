#include <stdio.h>

int main() {
 
    int maior=0, num;
    
    while(1){
    	scanf("%d", &num);
    	
    	if(num==0)
    		break;
    		
    	if(num > maior)
			maior = num;
	}
	
	printf("%d\n", maior);

    return 0;
}