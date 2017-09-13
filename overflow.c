/*
Autor: Ruan da Fonseca Ramos
Data: 25/08/2014
Descricao: programa que diz se vai ocorrer overflow
Entrada: maior numero / Operacao com 2 inteiros
Saida: se vai ter overflow
*/

#include <stdio.h>

int main() {
    int N, P, Q;
    char C;
    scanf("%d", &N);
    scanf("%d %c %d", &P, &C, &Q);
    if (C == '+') {  //como eu faço pra comparar com o sinal de + e de *?
        if (P + Q > N) {
        puts("OVERFLOW\n");
        } else {
            puts("OK\n");
        }
    } else {
        if (P * Q > N) {
            puts("OVERFLOW\n");
        } else {
            puts("OK\n");
        }
    }
    return 0;
}
