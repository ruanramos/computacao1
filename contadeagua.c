/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que dado o consumo de agua calcula o preco da conta
Entrada: consumo de agua N
Saida: valor da conta
*/

#include <stdio.h>
int main() {
    //dicionario de dados
    int N;
    //pegando os dados
    scanf("%d", &N);
    if (N <= 10) {
        printf("%d", 7);
    } else if (N <= 30) {
        printf("%d", (7 + N - 10));
    } else if (N <= 100) {
        printf("%d", (7 + 20 + (N - 30)*2));
    } else {
        printf("%d", (7 + 20 + 70*2 + (N- 100)*5));
    }    
    return 0;
}
