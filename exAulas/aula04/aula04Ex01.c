#include <stdio.h>
 
int main() {
 
    int i;
    
    for(i=1; i<101; i++){
    	if(i%3==0){
    		printf("Ding\n");
		} else if(i%5==0){
			printf("Ping\n");
		} else {
			printf("%d\n", i);
		}
	}
	printf("Lee\n");
 
    return 0;
}
