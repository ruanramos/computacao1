/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: determinar qual combustivel vai ser mais economico
Entrada: preço por litro do alcool, preço por litro da gasolina, rendimento (km/l) alcool, rendimento (km/l) gasolina
Saıda: qual é mais economico
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    float A, G, Ra, Rg, i, j;
    //pegando os dados
    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
    i = A/Ra;
    j = G/Rg;
    if (i < j) {
        puts("A");
    } else {
        puts("G");
    }
    return 0;
}
