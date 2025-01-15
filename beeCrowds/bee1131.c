#include <stdio.h>

int main() {
	
	int inter, gre, wInter=0, wGre=0, emp=0, tot=0;
	int cont=1;
	
	do{
		tot++;
		scanf("%d %d", &inter, &gre);
		
		if(inter == gre){
			emp++;
		} else if(inter > gre){
			wInter++;
		} else {
			wGre++;
		}
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &cont);
	} while(cont == 1);

	printf("%d grenais\n", tot);
	printf("Inter:%d\n", wInter);
	printf("Gremio:%d\n", wGre);
	printf("Empates:%d\n", emp);
	
	if(wGre == wInter){
		printf("Nao houve vencedor\n");
	} else if(wGre > wInter){
		printf("Gremio venceu mais\n");
	} else{
		printf("Inter venceu mais\n");
	}
	
	return 0;
	
}