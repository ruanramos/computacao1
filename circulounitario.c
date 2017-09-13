/*
Descricao: Programa que recebe tres pontos e diz se cada um deles esta dentro, fora ou sobre uma circunferencia de raio 1
Entrada: as coordenadas de cada ponto
Saida: texto dizendo onde se encontram os pontos
*/

#include <stdio.h>

int main(void) {
    //nomeando as variaveis
    float x1, x2, x3, y1, y2, y3;
    float circ1, circ2, circ3;
    
    //pedindo os pontos
    printf("escreva as cordenadas x e y dos pontos, separados por espaço, na ordem ponto 1, 2 e 3:\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    
    //checking
    circ1 = x1*x1 + y1*y1; // quando eu tentei fazer com ** deu erro..
    circ2 = x2*x2 + y2*y2;
    circ3 = x3*x3 + y3*y3;
    if (circ1 < 1) {
        printf("O ponto 1 esta dentro da circunferencia de raio unitario.\n");
    }
    else {
        if (circ1 == 1) {
            printf("O ponto 1 esta sobre a circunferencia de raio unitario.\n");
        }
        else {
            printf("O ponto 1 esta fora da circunferencia de raio unitario.\n");
        }
    }
    if (circ2 < 1) {
        printf("O ponto 2 esta dentro da circunferencia de raio unitario.\n");
    }
    else {
        if (circ2 == 1) {
            printf("O ponto 2 esta sobre a circunferencia de raio unitario.\n");
        }
        else {
            printf("O ponto 2 esta fora da circunferencia de raio unitario.\n");
        }
    }
    if (circ3 < 1) {
        printf("O ponto 3 esta dentro da circunferencia de raio unitario.\n");
    }
    else {
        if (circ3 == 1) {
            printf("O ponto 3 esta sobre a circunferencia de raio unitario.\n");
        }
        else {
            printf("O ponto 3 esta fora da circunferencia de raio unitario.\n");
        }
    }
    return 0;
}
