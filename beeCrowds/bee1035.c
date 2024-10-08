int main() {
	
	int n[4], contador;
	contador = 1;
	
	for(int i = 0; i < 4; i++) {
		// printf("Digite o numero %d: ", contador++);
		scanf("%d", &n[i]);
	}
	
	if (n[1] > n[2] && n[3] > n[0] && (n[2] + n[3]) > (n[0] + n[1]) && n[2] > 0 && n[3] > 0 && n[0]%2 == 0) {
		printf("Valores aceitos\n");
	} else {
		printf("Valores nao aceitos\n");
	}
	
	return 0;
}