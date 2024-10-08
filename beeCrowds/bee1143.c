#include <stdio.h>

int main(){
	
	int i, j, casos, val;
	
	scanf("%d", &casos);
	
	for(i=1; i<=casos; i++){
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	
	return 0;
}
