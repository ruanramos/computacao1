/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que indica a diferenca de pressao do pneu
Entrada: pressao desejada pelo motorista 1<= N <= 40 e a pressao lida pela bomba 1<= M <= 40
Saida: diferenca de pressao desejada
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int N, M;
    //predindo a pressao
    scanf("%d", &N);
    scanf("%d", &M);
    printf("%d\n", N - M);
    return 0;
}
