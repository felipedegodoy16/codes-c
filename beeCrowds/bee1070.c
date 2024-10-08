#include <stdio.h>
 
int main() {
 
    int val, i;
    
    scanf("%d", &val);
    
    for(i=0; i<6; i++){
    	if(val%2!=0){
    		printf("%d\n", val);
		} else {
			printf("%d\n", val+1);
		}
		val+=2;
	}
 
    return 0;
}
