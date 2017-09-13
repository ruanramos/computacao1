#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "caderno.h"

int main() {
	Tentrada *minhasEntradas = NULL; // criando o vetor que vai guardar as entries, aponta para NULL para ser passado de parametro
	int numeroDeEntradas = 0;
	int opcao;
	//int i;
	char nome[120];
	printf("Qual o seu nome?\n");
	gets(nome);
	
	leEntradas(nome, &minhasEntradas, &numeroDeEntradas); // le as entradas do arquivo daquela pessoa se ele já existe
	do {
		printf("Ola %s! Escolha uma opcao abaixo para ser executada:\n\n", nome);
		printf("1- Sair do programa.\n2- Adicionar uma entrada (Anotacao ou tarefa).\n3- Listar todas as suas entradas.\n");
		scanf("%d", &opcao);
		switch (opcao) {
			case 1:
				printf("Programa sendo finalizado.\n");
				break;
			case 2:
				if (criaEntrada(nome,&minhasEntradas, &numeroDeEntradas) != 0) {
					printf("Nao foi possivel salvar a entrada, programa sendo encerrado.\n");
					return -1;
				}
				break;
			case 3:
				listaEntradas(nome, minhasEntradas, &numeroDeEntradas);
				break;
			default:
				printf("Opcao invalida.\nPor favor, digite uma opcao valida:\n");
				printf("1- Sair do programa.\n2- Adicionar uma entrada (Anotacao ou tarefa).\n3- Listar todas as suas entradas.\n");
		}
	} while (opcao != 1);
	
	if (minhasEntradas) {
	    free(minhasEntradas);
	}
	return 0;
}
