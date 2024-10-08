#include <stdio.h>
 
int main() {
 
    int casos, num, i, in=0, out=0;
    
    scanf("%d", &casos);
    
    for(i=0; i<casos; i++){
    	scanf("%d", &num);
    	if(num<=20 && num>=10){
    		in++;
		} else {
			out++;
		}
	}
	
	printf("%d in\n", in);
	printf("%d out\n", out);
 
    return 0;
}
