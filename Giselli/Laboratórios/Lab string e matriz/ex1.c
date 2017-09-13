#include <stdio.h>
#include <string.h>
#define TAMANHO 51

int main() {
	char nome[TAMANHO];
	int i, vogais = 0;
	printf("Digite um nome de ate 50 caracteres: ");
	gets(nome);
	for (i=0; i < strlen(nome); i++) {
		if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u') {
			vogais++;
		}
	}
	printf("O numero de vogais do nome digitado eh %d\n", vogais);
	return 0;
}