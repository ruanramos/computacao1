/*
Descricao: dado dois numeros, retorna o maior
entrada: os dois numeros
Saida: o maior deles
*/

#include <stdio.h>

int main(void) {
    //criando as variaveis
    float a, b;
    
    //obtendo os numeros
    printf("digite dois numeros separados por espaço:\n");
    scanf("%f %f", &a, &b);
    
    //comparando
    if (a > b) {
        printf("O maior numero eh %f\n", a);
    }
    else {
        printf("O maior numero eh %f\n", b);
    }
    return 0;
}
    
