#include <stdio.h>
#include <string.h>
#define TAMANHO 51

int main() {
	char palavra[TAMANHO], inversa[TAMANHO];
	int i, j;
	printf("Digite uma palavra de ate 50 caracteres para saber se ela eh um palindromo: ");
	gets(palavra);
	i=strlen(palavra)-1;
	j = 0;
	while (j < strlen(palavra) && (i >= 0)) {
		inversa[j] = palavra[i];
		i--;
		j++;
	}
	inversa[j+1] = '\0';
	
	for (i=0; i < strlen(palavra); i++) {
		if (palavra[i] != inversa[i]) {
			printf("A palavra digitada nao eh um palindromo\n");
			j = -1;
			break;
		}
	}
	if (j != -1)
		printf("A palavra digitada eh um palindromo\n");
	return 0;
}