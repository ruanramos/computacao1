/*
Descricao: programa que recebe duas datas, diz se elas sao validas e qual é mais recente
*/

#include <stdio.h>
#include "data.h"

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;
    printf("escreva a primeira data:\n");
    scanf("%d %d %d", &dia1, &mes1, &ano1);
    printf("escreva a segunda data:\n");
    scanf("%d %d %d", &dia2, &mes2, &ano2);
    if ((datavalida(dia1, mes1, ano1) == 1) && (datavalida(dia2, mes2, ano2) == 1)) {
        if (datarecente(dia1, mes1, ano1, dia2, mes2, ano2) == 1) {
            printf("a primeira data eh a mais recente.\n");
        } else if (datarecente(dia1, mes1, ano1, dia2, mes2, ano2) == 2) {
            printf("a segunda data eh a mais recente.\n");
        } else {
            printf("as datas sao iguais");
        }
    } else {
        printf("Alguma das datas eh invalida.\n");
    }
    return 0;
}
