#include <stdio.h>

int calculo(int hI, int mI, int hF, int mF) {
	
	int total, totalI, totalF;
	
	totalI = hI * 60 + mI;
	
	totalF = hF * 60 + mF;
	
	if(totalI > totalF) {
		total = (1440 - totalI) + totalF;
	} else if(totalI < totalF) {
		total = totalF - totalI;
	} else {
		total = 1440;
	}
	
	return total;
}
 
int main() {
 
    int hI, mI, hF, mF, total;
    
    scanf("%d %d %d %d", &hI, &mI, &hF, &mF);
    
    while(hI != 0 || mI != 0 || hF != 0 || mF != 0){
    	
    	total = calculo(hI, mI, hF, mF);
    	
    	printf("%d\n", total);
    	
    	scanf("%d %d %d %d", &hI, &mI, &hF, &mF);
	}
 
    return 0;
}