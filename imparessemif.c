/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: programa que le n numeros inteiros e positivos e imprime quantos sao impares
Entrada: os numeros inteiros
Saıda: quantos sao impares
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int numero, n, i, soma;
    //pedindo os numeros
    printf("diga quantos numeros serao digitados: \n");
    scanf("%d", &n);
    i = 0, soma = 0;
    while (i < n) {
        printf("digite o proximo numero: \n");
        scanf("%d", &numero);
        soma += numero % 2;
        i += 1;
    }
    printf("%d\n", soma);
    return 0;
}
