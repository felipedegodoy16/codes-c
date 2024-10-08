#include <stdio.h>
 
int main() {
 
    int val, i, res;
    
    scanf("%d", &val);
    
    for(i=1; i<11; i++){
    	res = i*val;
    	printf("%d x %d = %d\n", i, val, res);
	}
 
    return 0;
}
