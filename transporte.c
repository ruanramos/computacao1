/*
Descricao: programa que diz quantos conteineres podem ser carregados no navio
Entrada: Primeira linha com as dimensões dos conteineres, a segunda linha com as dimensoes do navio
Saida: uma linha dizendo quantos conteineres o navio consegue carregar
*/

#include <stdio.h>

int main() {
    int A, B, C, X, Y, Z;
    scanf("%d %d %d %d %d %d", &A, &B, &C, &X, &Y, &Z);
    printf("%d\n", (X/A) * (Y/B) * (Z/C) );
    return 0;
}
