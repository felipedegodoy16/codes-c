#include <stdio.h>
int call;

int fibonacci(int n){
	call++;
	if(n < 2) {
		return n;
	} else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main(){
    int n, i, x, res;
    scanf("%d", &n);

    for (i = 0; i < n; ++i){
        call = 0;
        scanf("%d", &x);
        res = fibonacci(x);
        printf("fib(%d) = %d calls = %d\n", x, call - 1, res);
    }
	return 0;
}




