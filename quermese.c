/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: determinar o numero do ingresso premiado
Entrada: numero de participantes (N) / sequencia em ordem de entrada dos N ingressos 
Saıda: numero do teste / numero do ganhador
*/

#include <stdio.h>

int main(void) {
    //dicionario de dados
    int N, numero_ingresso, i, ganhador, j;
    //pedindo os dados
    for (j = 0 ; ; j++) {
        scanf("%d", &N);
        if ( N == 0) {
            break;
        } else {
            for (i = 0; i < N; i++) {
                scanf("%d", &numero_ingresso);
                if (numero_ingresso == i + 1) {
                    ganhador = numero_ingresso;
                }
            }
            printf("Teste %d\n", j+1);
            printf("%d\n", ganhador);
            printf("\n");
        }
    }
    return 0;
}
