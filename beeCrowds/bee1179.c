#include <stdio.h>
 
int main() {
 
    int par[5], impar[5], i, val, p=0, imp=0, j;
    
    for(i=0; i<15; i++){
    	scanf("%d", &val);
    	if(val % 2 == 0){
    		if(p == 5){
    			for(j=0; j<p; j++){
    				printf("par[%d] = %d\n", j, par[j]);
				}
				p = 0;
			}
    		par[p] = val;
    		p++;
		} else {
			if(imp == 5){
    			for(j=0; j<imp; j++){
    				printf("impar[%d] = %d\n", j, impar[j]);
				}
				imp = 0;
			}
    		impar[imp] = val;
    		imp++;
		}
	}
	
	for(i=0; i<imp; i++)
		printf("impar[%d] = %d\n", i, impar[i]);
		
	for(i=0; i<p; i++)
		printf("par[%d] = %d\n", i, par[i]);
 
    return 0;
}