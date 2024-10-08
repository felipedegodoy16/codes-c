#include <stdio.h>
#include <string.h>
 
int main() {
 
    char vert[15], tipo[10], come[15];
	
	scanf("%s %s %s", vert, tipo, come);
	
	if(vert == 'vertebrado')
		if(tipo == 'ave')
			if(come == 'carnivoro')
				printf("aguia\n");
			else if(come == 'onivoro')
				printf("pomba\n");
			else
				printf("nao existe\n");
		else if(tipo == 'mamifero')
			if(come == 'onivoro')
				printf("homem\n");
			else if(come == 'herbivoro')
				printf("vaca\n");
			else
				printf("nao existe\n");
		else if(tipo == 'inseto')
			if(come == 'hematofago')
				printf("pulga\n");
			else if(come == 'herbivoro')
				printf("lagarta\n");
			else
				printf("nao existe\n");
		else
			if(come == 'hematofago')
				printf("sanguessuga\n");
			else if(come == 'onivoro')
				printf("minhoca\n");
			else
				printf("nao existe\n");
 
    return 0;
}
