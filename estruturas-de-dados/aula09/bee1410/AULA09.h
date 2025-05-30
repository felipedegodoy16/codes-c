#ifndef Aula09_HEADER
#define Aula09_HEADER

typedef struct {
	int qde;
	int jogador[11];
} Time;

void carregaEquipe(Time *, int);
void organizaEquipe(Time *);
char analisaLance(Time, Time);

#endndef