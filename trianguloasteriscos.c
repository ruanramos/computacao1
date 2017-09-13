/*
Autor: Ruan da Fonseca Ramos
Data: 27/08/2014
Descricao: programa que faz um triangulo de asteriscos
Entrada: numero de linhas desejadas
Saida: figura
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int N, i, j, k;
    //comandos do programa
    printf("Qual o numero desejado de linha?\n");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (k = 0; k < N-i-1; k++) {
            printf(" ");
        }
        for (j = 0; j < 2*i+1; j++) {
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}
