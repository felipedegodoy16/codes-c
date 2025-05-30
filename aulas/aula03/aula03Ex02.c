#include <stdio.h>
 
int main() {
 
    float num1, num2, res;
	int op;
    
    printf("Digite 2 numeros\n");
    scanf("%f %f", &num1, &num2);
    
    printf("Digite a operacao\n 1-soma\n 2-subtracao\n 3-multiplicacao\n 4-divisao\n");
    scanf("%d", &op);
    
    switch(op){
    	case 1:
    		res = num1+num2;
    		break;
   		case 2:
    		res = num1-num2;
    		break;
   		case 3:
    		res = num1*num2;
    		break;
   		case 4:
    		res = num1/num2;
    		break;
   		default:
    		printf("Operacao invalida\n");
    		return 0;
    		break;
   		
	}
	
	printf("O resultado da operacao escolhida eh: %.2f", res);
 
    return 0;
}
