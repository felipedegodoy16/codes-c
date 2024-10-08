#include <stdio.h>
 
int main() {
 
    int x, soma, i;
    
    do{
    	scanf("%d", &x);
    	soma = 0;
    	
    	if(x == 0){
    		break;
		}
    	
    	if(x%2!=0){
    		x++;
		}
		
		for(i = 0; i<5; i++){
			soma+=x;
			x = x + 2;
		}
		
		printf("%d\n", soma);
 		x=1;
	}while(x != 0);

//	scanf("%d", &x);
//	while(x != 0){
//    	soma = 0;
//    	
//    	if(x%2!=0){
//    		x++;
//		}
//		
//		for(i = 0; i<5; i++){
//			soma+=x;
//			x = x + 2;
//		}
//		
//		printf("%d\n", soma);
//		
//		scanf("%d", &x);
//	}
 
    return 0;
}

