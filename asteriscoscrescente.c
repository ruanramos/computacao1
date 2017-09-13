/*
Autor: Ruan da Fonseca Ramos
Data: 25/08/2014
Descricao: programa que imprime astericos crescentemente
Entrada: numero de linhas
Saida: desenho com os asteristicos
*/

#include <stdio.h>

int main() {
    int n, aux1, aux2;
    printf("Qual o numero de linhas desejadas?\n");
    scanf("%d", &n);
    aux1 = 1;
    aux2 = n - aux1;
    while (aux1 <= n) {
        while (aux2 < n) {
            printf("%c", '*');
            aux2 += 1;
        }
        printf("\n");
        aux1 += 1;
        aux2 = n - aux1;   
    }
    return 0;
}
