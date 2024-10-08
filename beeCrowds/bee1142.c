#include <stdio.h>
 
int main() {
 
    int casos, i;
    
    scanf("%d", &casos);
    
    for(i = 1; i <= casos*4; i++){
	    if(i%4 == 0){
    		printf("PUM\n");
		} else {
  		    printf("%d ", i);
		}
	}
 
    return 0;
}
