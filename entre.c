/*
Descricao: programa que diz se um numero está entre 0 e 100
Entrada: um numero
Saida: um pequeno texto dizendo se ele esta entre 0 e 100
*/

#include <stdio.h>

int main(void) {
    //declarando a variavel
    float num;
    
    //recenbendo o numero
    printf("Escolha um numero:\n");
    scanf("%f", &num);
    //fazendo a comparacao
    if (0<=num) {
        if (num<=100) {
            printf("o numero digitado esta entre 0 e 100\n");
        }            
        else {
            printf("o numero digitado nao esta entre 0 e 100\n");
        }
    }
    else {
        printf("o numero digitado nao esta entre 0 e 100\n");
    }
    return 0;
}
