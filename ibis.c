/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: calcular quantos pontos o ibis fez no ultimo campeonato
Entrada: numero de jogos / quantos gols o ibis fez e sofreu por jogo
Saıda: total de pontos do time no campeonato
*/

#include <stdio.h>

int main(void) {
    //dicionario de dados
    int N, gp, gc, i, pontos;
    //pedindo os dados
    scanf("%d", &N);
    pontos = 0;
    for (i = 0; i < N; i++) {
        scanf("%d %d", &gp, &gc);
        if (gp > gc) {
            pontos += 3;
        } else if (gp == gc) {
            pontos += 1;
        } else {
            continue;
        }
    }
    printf("O ibis fez %d pontos.\n", pontos);
    return 0;
}
