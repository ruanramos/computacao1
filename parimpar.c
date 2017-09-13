/*
Descricao: Programa que recebe um numero inteiro e diga se ele eh par ou impar
Entrada: O numero
Saida: texto dizendo se o numero eh par ou impar
*/

#include <stdio.h>

int main(void) {
    //variaveis
    int num;
    
    //pedindo o numero
    printf("Digite um numero:\n");
    scanf("%d", &num);
    
    //checando se é par ou impar
    if (num%2 == 0) {
        printf("O numero eh par\n");
    }
    else {
        printf("o numero eh impar\n");
    }
    return 0;
}
