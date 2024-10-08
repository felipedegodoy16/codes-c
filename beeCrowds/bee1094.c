#include <stdio.h>
#include <string.h>
 
int main() {
 
    int casos, c=0, s=0, r=0, i, ani;
    float cPorc, sPorc, rPorc, total;
    char tipo[2];
    
    scanf("%d", &casos);
    
    for(i=0; i<casos; i++){
    	scanf("%d %s", &ani, tipo);
		if(strcmp(tipo, "C") == 0){
			c += ani;
		} else if(strcmp(tipo, "R") == 0){
			r += ani;
		} else {
			s += ani;
		}
	}
	total = c+r+s;
	
	cPorc = 100 * c/total;
	rPorc = 100 * r/total;
	sPorc = 100 * s/total;
	
	printf("Total: %.0f cobaias\n", total);
	printf("Total de coelhos: %d\n", c);
	printf("Total de ratos: %d\n", r);
	printf("Total de sapos: %d\n", s);
	printf("Percentual de coelhos: %.2f %\n", cPorc);
	printf("Percentual de ratos: %.2f %\n", rPorc);
	printf("Percentual de sapos: %.2f %\n", sPorc);
 
    return 0;
}