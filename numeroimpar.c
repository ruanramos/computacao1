/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: calcula se o numero digitado é par ou impar e coloca na tela
Entrada: os numeros que se deseja saber
Saıda: se eles sao pares ou impares
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int n, i;
    
    i = 1;
    do {
        //le um numero do teclado
        scanf("%d", &n);
        //sai da repeticao se o numero for negativo
        if (n < 0)
            continue;
        //verifica se o numero eh par ou impar
        if ((n % 2) == 0) {
            printf("%d eh par\n", n);
        } else {
            printf("%d eh ´ımpar\n", n);
        }
        i = i + 1;
    } while (i<=10);
    return 0;
}
