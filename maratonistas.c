/*
Autor: Ruan da Fonseca Ramos
Data: 18/09/2014
Descricao: descobrir qual atleta teve o menor tempo total
Entrada: numero de atletas, numero de corridas, tempos de cada corrida
Saida: qual atleta foi mais rapido
*/

#include <stdio.h>

int main(void) {
    //dicionario de dados
    int A, C, i, hora, minuto, segundo, horaTotal = 0, minutoTotal = 0, segundoTotal = 0;
    scanf("%d %d", &A, &C);
    for (i = 0; i < C; i++) {
        scanf("%d %d %d", &hora, &minuto, &segundo);
        horaTotal += hora;
        minutoTotal += minuto;
        segundoTotal += segundo;
    }
    return 0;
}
