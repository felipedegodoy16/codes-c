#include <stdio.h>

int main() {
	
	int casos, x, y, i;
	float div;
	
	scanf("%d", &casos);
	
	for(i = 0; i < casos; i++){
		scanf("%d %d", &x, &y);
		
		if(y == 0){
			printf("divisao impossivel\n");
		} else {
			div = (float) x/y;
			printf("%.1f\n", div);
		}
	}
	
	return 0;
	
}