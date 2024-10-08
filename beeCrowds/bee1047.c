#include <stdio.h>
 
int main() {
 
    int minI, hrI, minF, hrF, totalI, totalF, total, horas, minutos;
    
    scanf("%d %d %d %d", &hrI, &minI, &hrF, &minF);
    
    totalI = (hrI * 60) + minI;
    totalF = (hrF * 60) + minF;
    
    if(hrI == hrF && minI == minF){
    	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    	return 0;
	} else if(totalI < totalF)
    	total = totalF - totalI;
    else
    	total = (1440 - totalI) + totalF;
    		
    horas = total/60;
    minutos = total - (horas * 60);
    		
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
 
    return 0;
}
