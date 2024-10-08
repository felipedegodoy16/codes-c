#include <stdio.h>
#include <math.h>
 
int main() {
 
    int canos, alturaSapo, alturaCano, win=1, proxCano, i;
    
    scanf("%d", &alturaSapo);
    scanf("%d", &canos);
    scanf("%d", &alturaCano);
    
    for(i = 0; i < canos-1; i++){
	    scanf("%d", &proxCano);
	    if(abs(proxCano - alturaCano) > alturaSapo){
	    	printf("GAME OVER\n");
	    	win=0;
	    	break;
		}
		
		alturaCano = proxCano;
	}
	
	if(win==1){
		printf("YOU WIN\n");
	}
 
    return 0;
}
