/* 
Descricao: faz a potencia de um numero por outro
Entrada: os dois numeros inteiros
Saida: um elevado ao outro
Resticoes: y >= 0
*/

#include <stdio.h>

int potencia(int x, int y) {
    int n;
    n = 1;
    while (y != 0) {
        n = n * x;
        y--;
    }
    return n;
}
