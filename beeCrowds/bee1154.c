#include <stdio.h>
 
int main() {
 
    int idade, c=0;
    float media=0;
    
    do{
    	scanf("%d", &idade);
    	
    	if(idade>=0){
    		media+=idade;
		}
		
		c++;
	}while(idade>=0);
 	c--;
 	media/=c;
 
 	printf("%.2f\n", media);
    return 0;
}
