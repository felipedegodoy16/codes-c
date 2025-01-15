#include <stdio.h>

typedef struct _p {
	int ataque;
	int defesa;
	int level;
} Pomekon;
 
int main() {
 
 	int casos, i, bonus, ptsG, ptsD;
 	Pomekon guarte, dabriel;
    
    scanf("%d", &casos);
    
    for(i = 0; i < casos; i++) {
    	scanf("%d", &bonus);
    	
    	scanf("%d %d %d", &dabriel.ataque, &dabriel.defesa, &dabriel.level);
    	scanf("%d %d %d", &guarte.ataque, &guarte.defesa, &guarte.level);
    	
    	ptsD = (dabriel.ataque + dabriel.defesa) / 2;
    	ptsG = (guarte.ataque + guarte.defesa) / 2;
    	
    	if(dabriel.level % 2 == 0){
    		ptsD += bonus;
		}
		
		if(guarte.level % 2 == 0){
    		ptsG += bonus;
		}
		
		if(ptsD == ptsG) {
			printf("Empate\n");
		} else if(ptsD > ptsG) {
			printf("Dabriel\n");
		} else {
			printf("Guarte\n");
		}
	}
 
    return 0;
}