#include <stdio.h>

typedef struct _tri {
	float height;
	float base;
	float area;
} Triangulo;

int main() {
 
 	Triangulo figura;
    FILE *in, *out;
    
    in = fopen("triang.in", "r");
    out = fopen("saida.txt", "w");
    
	if(in == NULL || out == NULL) {
		printf("Problemas ao abrir os arquivos\n");
		exit(1);
	}
	
    while(1){
    	
    	fscanf(in, "%f %f", &figura.base, &figura.height);
    	
    	if(figura.base == 0 || figura.height == 0){
    		break;
		}
    	
    	figura.area = (figura.base * figura.height)/2;
    	
    	fprintf(out, "Area = %.2f\n", figura.area);
    	
	}
 
    return 0;
}