#ifndef CADERNO_H
#define CADERNO_H

#include <stdio.h>
#include <string.h>
#define TAM_CONTEUDO 151


typedef struct {
	int dia, mes, ano;
} Tdata;

typedef struct {
	Tdata data; // data da anotacao ou data que a tarefa precisa estar pronta.
	int tipo; // tipo da entry, 1 se for anotacao, 2 se for tarefa.
	char conteudo[TAM_CONTEUDO]; // conteudo da entrada
	int concluido; // 0 se nao estiver feito, 1 caso esteja concluido.
	int prioridade; // vai variar de 1 a 5 de acordo com a prioridade da entrada para o usuario.
} Tentrada;

Tentrada recebeEntrada();

void imprimeData(Tdata data);

void imprimeEntrada(Tentrada entrada);

int criaEntrada(char *nomArq, Tentrada **entradas, int *numeroDeEntradas);

void imprimeEntradas(Tentrada *entradas, int numeroDeEntradas);

int salvaEntradas(char *nomArq, Tentrada *entradas, int numeroDeEntradas);

int leEntradas (char *nomArq, Tentrada **entradas, int *numeroDeEntradas);

void listaEntradas (char *nomArq, Tentrada *entradas, int *numeroDeEntradas);

int comparaData(const void *a1, const void *a2);

int comparaPrioridade(const void *a1, const void *a2);

int deletaEntrada(char *nomArq, Tentrada *entradas,int *numeroDeEntradas,int num);
#endif
