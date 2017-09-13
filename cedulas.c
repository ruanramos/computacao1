/*
Autor: Ruan da Fonseca Ramos
Data: 18/09/2014
Descricao: programa que calcula quantas cedulas de cada tipo sao necessarias para para pagar a quantia, usando o minimo de cedulas
Entrada: quantia em reais
Saída: quantidade de cedulas de cada tipo
*/

#include <stdio.h>
void cedulas(int x) {
    //dicionario de dados
    int contador = 0, cedula, i = 0;
    while i < 7 {
        contador = 0
        while (x >= cedula) {
            x -= cedula;
            contador++;
        }
        if (contador != 0) {
            printf("%d", contador);
        }
        i++;
    }
}
