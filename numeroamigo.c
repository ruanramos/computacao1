/*
Descricao: programa que diz se um numero eh amigo ou nao
Entrada: o numero
Saida: texto dizendo se o numero eh amigo ou nao
*/

#include <stdio.h>

int main(void) {
    int N, n, centena, dezena, unidade, resto;
    printf("Digite o numero que você deseja saber se eh amigo:\n");
    scanf("%d", &N);
    
    if (N >= 100) {
        if (N <= 999) {
            centena = N / 100;
            resto = N % 100;
            dezena = resto / 10;
            unidade = resto % 10;
            n = centena * centena * centena + dezena * dezena * dezena + unidade * unidade * unidade;
            if (n == N) {
                printf("O numero digitado eh um numero amigo.\n");
            }
            else {
                printf("O numero digitado nao eh um numero amigo.\n");
            }
        }
        else {
        printf("O numero digitado nao eh um numero entre 100 e 999\n");
        }
    }
    else {
        printf("O numero digitado nao eh um numero entre 100 e 999\n");
    }
    return 0;
}
