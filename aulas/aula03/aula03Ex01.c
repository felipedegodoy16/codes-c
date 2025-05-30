#include <stdio.h>
 
int main() {
 
    float num1, num2, res;
	int op;
    
    printf("Digite 2 numeros\n");
    scanf("%f %f", &num1, &num2);
    
    printf("Digite a operacao\n 1-soma\n 2-subtracao\n 3-multiplicacao\n 4-divisao\n");
    scanf("%d", &op);
    
    if(op==1){
    	res = num1+num2;
	} else if(op==2){
		res = num1-num2;
	} else if(op==3){
		res = num1*num2;
	} else if(op==4){
		res = num1/num2;
	} else {
		printf("Operacao invalida\n");
		return 0;
	}
	
	printf("O resultado da operacao escolhida eh: %.2f", res);
 
    return 0;
}
