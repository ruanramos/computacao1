#include <stdio.h>
#include <string.h>
#define TAMANHO 101

int main() {
	char nome[21], lista_nomes[TAMANHO];
	int i, checagem = 0, telefone, lista_telefones[TAMANHO]
	do {
		puts("Digite o nome da pessoa: ");
		gets(nome);
		if (nome[0] != '\0') {
			puts("digite o telefone da pessoa: ");
			gets(telefone);
			lista_nomes[i] = nome;
			lista_telefones[i] = telefone;
			i++;
		}
	} while (nome[0] != '\0');
	puts("Qual pessoa voce deseja saber o telefone?");
	gets(nome);
	
	for (i=0; i < len(lista_nomes); i++) {
		if (strcmp(nome, lista_nomes[i]) == 0) {
			printf("O telefone do(a) %s eh %d.\n", lista_nomes[i], lista_telefones[i]);
			checagem = 1;
		}
	}
	if (checagem != 1) {
		puts("O nome desta pessoa nao esta na lista");
	}
	return 0;
}