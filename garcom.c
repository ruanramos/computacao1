/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: programa que diz quantos copos o garcom quebrou no treinamento
Entrada: numero de bandeijas, numero de latas e copos por bandeija
Saıda: o numero de copos quebrados
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int N, L, C, i, quebrados = 0;
    //pedindo os dados e dando os comandos
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d %d", &L, &C);
        if (L > C) {
            quebrados += C;
        } else {
            continue;
        }
    }
    printf("%d\n", quebrados);
    return 0;
}
