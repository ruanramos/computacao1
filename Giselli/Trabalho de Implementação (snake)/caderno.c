#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "caderno.h"
#define TAM_CONTEUDO 151
 
 
Tentrada recebeEntrada() { // essa funcao recebe uma entrada digitada pelo usuario
	Tentrada entrada;
	printf("Tipo (Anotacoes ficam com a data do dia, Tarefas tem data maxima de conclusao):\n1 - Anotacao\n2 - Tarefa\n");
	scanf("%d", &entrada.tipo);
	printf("Data (dd/mm/aaaa): ");
	scanf("%d/%d/%d", &entrada.data.dia, &entrada.data.mes, &entrada.data.ano);
	printf("Prioridade:\n1 - Baixa\n2 - Normal\n3 - Alta\n4 - Muito Alta\n5 - Um panda morre a cada minuto que eu nao fizer isso\n");
	scanf("%d", &entrada.prioridade);
	while (getchar() != '\n'); // checa algum erro de digitacao que pode acontecer e permite o gets ler direito depois
	entrada.concluido = 0;
	printf("Texto: ");
	gets(entrada.conteudo);
	
	return entrada;
}
 
 void imprimeData(Tdata data) { // funcao que escreve a data de uma entrada
	printf("%02d/%02d/%04d", data.dia, data.mes, data.ano);
}
 
 void imprimeEntrada(Tentrada entrada) { // funcao que escreve uma entrada
	char prioridade[60], tipo[15], concluido[5];
	switch (entrada.prioridade) {
		case 1:
			strcpy(prioridade, "Baixa");
			break;
		case 2:
			strcpy(prioridade, "Normal");
			break;
		case 3:
			strcpy(prioridade, "Alta");
			break;
		case 4:
			strcpy(prioridade, "Muito Alta");
			break;
		case 5:
			strcpy(prioridade, "Um panda morre a cada minuto que eu nao fizer isso");
			break;
	}
	if (entrada.tipo == 1) {
		strcpy(tipo, "Anotacao");
	} else if (entrada.tipo == 2){
		strcpy(tipo, "Tarefa");
	}
	if (entrada.concluido == 0) {
		strcpy(concluido, "Nao");
	} else if (entrada.concluido == 1) {
		strcpy(concluido, "Sim");
	}
	printf("\nTipo: %s\n", tipo); // tipo vem antes da data para entendermos qual data ele se refere, tempo de conclusao ou dia de inclusao da entrada
	printf("Data: ");
	imprimeData(entrada.data);
	printf("\nPrioridade: %s\nConcluido: %s\nTexto: %s\n", prioridade, concluido, entrada.conteudo);
}

int criaEntrada(char *nomArq, Tentrada **entradas, int *numeroDeEntradas) { // coloca uma entrada no vetor que guarda as entradas e salva no arquivo com nome da pessoa se necessario
	Tentrada entrada = recebeEntrada();
	*entradas = realloc(*entradas, (*numeroDeEntradas + 1) * sizeof(Tentrada));
	if(!*entradas) { // testa se o realloc funcionou
		printf("Não foi possivel conseguir %d bytes para o vetor. Cancelando.\n", (*numeroDeEntradas + 1) * (int) sizeof(Tentrada));
		return -1;
	}
	(*entradas)[(*numeroDeEntradas)++] = entrada;

	return salvaEntradas(nomArq, *entradas, *numeroDeEntradas);
}

void imprimeEntradas(Tentrada *entradas, int numeroDeEntradas) { // escreve na tela um numero certo de entradas
	int i;
	for (i = 0; i < numeroDeEntradas; i++) {
		printf("Entrada numero %d:\n", i+1);
		imprimeEntrada(entradas[i]);
		printf("\n");
	}
}

 
int salvaEntradas(char *nomArq, Tentrada *entradas, int numeroDeEntradas) { // funcao que salva as entradas em um arquivo
	FILE *parq = fopen(nomArq, "wb"); // abertura do arquivo
	
	if (!parq) {
		printf("A abertura do arquivo %s para escrever falhou.\n", nomArq);
		return -1;
	}
	
	int escritos = fwrite(&numeroDeEntradas, sizeof(int), 1, parq); // pego um inteiro dizendo quantas entradas eu coloquei depois
	if (escritos != 1) {
		printf("A tentativa de escrever o numero de entradas %d no arquivo %s falhou.\n", numeroDeEntradas, nomArq);
		fclose(parq);
		return -1;
	}
	escritos = fwrite(entradas, sizeof(Tentrada), numeroDeEntradas, parq); // escreve as entradas
	if (escritos != numeroDeEntradas) {
		printf("Tentativa de escrever %d entradas no arquivo %s falhou, mas %d entradas foram escritas.\n", numeroDeEntradas, nomArq, escritos);
		fclose(parq);
		return -1;
	}
	
	fclose(parq);
	return 0;
}

int leEntradas (char *nomArq, Tentrada **entradas, int *numeroDeEntradas) { // funcao que le as entradas em um arquivo
	if (*entradas) { // esse free permite que eu nao perca um vetor que pudesse estar alocado ali na hora que for fazer a alocacao de memoria
		free(*entradas);
	}
	FILE *parq = fopen(nomArq, "rb"); // abre o arquivo para leitura
	if (!parq) { // alocacao de um vetor vazio para o ponteiro nao ficar nulo caso o arquivo ainda nao exista
		*entradas = malloc(4 * sizeof(Tentrada));
		if(!*entradas) { // testa se o malloc funcionou
			printf("Não foi possivel conseguir %d bytes para o vetor. Cancelando.\n", 4 * (int) sizeof(Tentrada));
			return -1;
		}
		return 0;
	}
	int lidos = fread(numeroDeEntradas, sizeof(int), 1, parq); // le o numero de entradas do arquivo
	if (lidos != 1) {
		printf("Tentativa de ler o numero de entradas do arquivo %s falhou.\n", nomArq);
		fclose(parq);
		return -1;
	}
	
	*entradas = (Tentrada*) malloc(*numeroDeEntradas * sizeof(Tentrada)); // aloca memoria para um vetor que vai receber as entradas que ja sabemos quantas sao
	if (!*entradas) {
		printf("Nao foi possivel conseguir %d bytes para o vetor. Cancelando.\n", *numeroDeEntradas * (int) sizeof(Tentrada));
		fclose(parq);
		return -1;
	}
		
	lidos = fread(*entradas, sizeof(Tentrada), *numeroDeEntradas, parq); // conta quantas entradas foram lidas
	if (lidos != *numeroDeEntradas) {
		printf("Nao foi possivel ler %d entradas do arquivo %s. Lidas %d entradas.\n", *numeroDeEntradas, nomArq, lidos);
		fclose(parq);
		return -1;
	}
	
	fclose(parq);
	return 0;
}
 
void listaEntradas (char *nomArq, Tentrada *entradas, int *numeroDeEntradas) { // funcao que lista na tela as entradas do usuario e permite fazer alteracoes na base de dados
	int opcao, num;
	printf("Como gostaria de ordenar as suas entradas?\n1- Data\n2- prioridade\n");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			qsort(entradas, *numeroDeEntradas, sizeof(Tentrada), comparaData); // ordena as entradas de acordo com o criterio escolhido
			break;
		case 2:
			qsort(entradas, *numeroDeEntradas, sizeof(Tentrada), comparaPrioridade); // ordena as entradas de acordo com o criterio escolhido
			break;
	}
	imprimeEntradas(entradas, *numeroDeEntradas);
	printf("Gostaria de marcar alguma entrada como concluida ou deletar?\n1- Sim\n2- Nao\n");
	scanf("%d", &opcao);
	if (opcao == 2) {
		return;
	}
	printf("O que deseja fazer?\n1- Deletar\n2- Marcar como concluido\n");
	scanf("%d", &opcao);
	printf("Qual o numero da entrada? ");
	scanf("%d", &num);
	switch (opcao) {
		case 1:
			if (deletaEntrada(nomArq, entradas, numeroDeEntradas, num - 1) != 0) {
				printf("Nao foi possivel deletar a entrada\n");
				return;
			}
			break;
		case 2:
			entradas[num - 1].concluido = 1;
			break;
	}
}

int comparaData(const void *a1, const void *a2) { // compara duas entradas por data
    Tentrada *e1 = (Tentrada*) a1, *e2 = (Tentrada*) a2;
	// se a primeira entrada vier antes da segunda, a funcao retorna <0. Se a segunda vier antes da primeira, retorna >0. Se elas forem equivalentes, retorna 0.
	if (e1->data.ano != e2->data.ano) {
		return e1->data.ano - e2->data.ano;
	} else if (e1->data.mes != e2->data.mes) {
		return e1->data.mes - e2->data.mes;
	} else if (e1->data.dia != e2->data.dia) {
		return e1->data.dia - e2->data.dia;
	}
	return e1->tipo - e2->tipo; // para separar por tipo se a data for a mesma
}

int comparaPrioridade(const void *a1, const void *a2) { // compara duas entradas por prioridade
    Tentrada *e1 = (Tentrada*) a1, *e2 = (Tentrada*) a2;
	// se a primeira entrada vier antes da segunda, a funcao retorna <0. Se a segunda vier antes da primeira, retorna >0. Se elas forem equivalentes, retorna 0.
	if (e1->prioridade != e2->prioridade) {
		return e2->prioridade - e1->prioridade;
	}
	return comparaData(e1, e2); // se a prioridade for a mesma, ordena-se por data
}

int deletaEntrada(char *nomArq, Tentrada *entradas,int *numeroDeEntradas,int num) { // deleta uma entrada do vetor e salva no arquivo
	int i;
	for(i = num + 1; i < *numeroDeEntradas; i++) { // substitui cada elemento pelo seguinte a partir do elemento a ser deletado
		entradas[i - 1] = entradas[i];
	}
	(*numeroDeEntradas)--;
	return salvaEntradas(nomArq, entradas, *numeroDeEntradas);
}
