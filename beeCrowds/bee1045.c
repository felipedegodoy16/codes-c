#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, aux;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(b>a && b>c){
		aux = a;
		a = b;
		b = aux;
	} else if(c>a){
		aux = a;
		a = c;
		c = aux;
	}
	
	if(b<c){
		aux = b;
    	b = c;
    	c = aux;
	}
	
	if(a >= (b+c))
		printf("NAO FORMA TRIANGULO\n");
	else if(pow(a,2) == (pow(b,2) + pow(c,2)))
		printf("TRIANGULO RETANGULO\n");
	else if(pow(a,2) > (pow(b,2) + pow(c,2))){
		printf("TRIANGULO OBTUSANGULO\n");
		if(a == b && b == c)
			printf("TRIANGULO EQUILATERO\n");
		else if(a == b || b == c || a == c)
			printf("TRIANGULO ISOSCELES\n");
	} else {
		printf("TRIANGULO ACUTANGULO\n");
		if(a == b && b == c)
			printf("TRIANGULO EQUILATERO\n");
		else if(a == b || b == c || a == c)
			printf("TRIANGULO ISOSCELES\n");
	}	
 
    return 0;
}