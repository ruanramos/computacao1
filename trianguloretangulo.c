/*
Descricao: programa que diz se 3 lados dados formam ou nao um triangulo retangulo
entrada: os 3 lados
saida: se forma ou nao o triangulo retangulo
*/

#include <stdio.h>

int trianguloretangulo(int a, int b, int c) {
    int aux;
    if (b > a) {
        aux = b;
        b = a;
        a = aux;
    }
    if (c > a) {
        aux = c;
        c = a;
        a = aux;
    }
    if (a*a == b*b + c*c) {
        return 1;
    }
    return 0;
}

int main() {
    int a, b, c;
    printf("Digite os 3 numeros naturais:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (trianguloretangulo(a,b,c) == 1) {
        printf("Sim, formam um triangulo retangulo.\n");
    } else {
        printf("Nao formam um triangulo retangulo.\n");
    }
    return 0;
}
