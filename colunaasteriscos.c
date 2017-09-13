/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: faz uma coluna de asteriscos
Entrada: numero de colunas
Saıda: desenho
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int N, i;
    //pedindo os dados
    printf("Diga o numero de colunas: \n");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("*");
    }
    printf("\n");
    return 0;
}
