/*
Descricao: programa que calcula quando a população de um pais ultrapassa a de outro
Entrada: numero de habitantes dos países em determinada época e taxa anual de crescimento
Saída: numero de anos que uma população ultrapassa a outra
*/

#include <stdio.h>

int main(void) {
    //dicionario de dados
    int contador = 1;
    float popA, popB, taxaA, taxaB;
    popA = 9000;
    popB = 20000;
    taxaA = 0.03;
    taxaB = 0.015;
    while (popB >= popA) {
        contador++;
        popA += popA * (1+taxaA);
        popB += popB * (1+taxaB);
    }
    printf("%d\n", contador);
    return 0;
}
