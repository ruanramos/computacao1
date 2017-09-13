/*
Autor: Ruan da Fonseca Ramos
Data: 25/08/2014
Descricao: diz se o numero de papeis eh suficiente
Entrada: numero de competidores C, quantidade de folhas P, quantidade para cada aluno F
Saida: S ou N
*/

#include <stdio.h>

int main() {
    int C, P, F;
    scanf("%d %d %d", &C, &P, &F);
    if (C * F <= P) {
        puts("S");
    } else {
        puts("N");
    }
    return 0;
}
