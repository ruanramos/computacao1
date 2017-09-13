/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que diz o custo total da viagem
Entrada: tamanho da estrada e distancia entre os pedagios, custo do kilometro e valor de cada pedagio
Saida: custo total da viagem
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int custo, L, D, K, P;
    //pedindo os dados
    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);
    custo = L*K + (L/D)*P;
    printf("%d", custo);
    return 0;
}
