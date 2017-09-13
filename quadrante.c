/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que diz em qual quadrante um ponto se encontra ou se esta em um dos eixos
Entrada: as coordenadas do ponto
Saida: o quadrante ou eixo em que ele se encontra
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    float x, y;
    //receba os numeros de entrada
    puts("qual as coordenadas x e y do ponto desejado?\n");
    scanf("%f %f", &x, &y);
    //processa os numeros
    if ((x == 0) && (y == 0)) {
        puts("origem\n");
    }else if (x == 0) {
        puts("eixo y\n");
    } else if (y == 0) {
        puts("eixo x\n");
    } else if ((x > 0) && (y > 0)){
        puts("quadrante 1\n");
    } else if ((x > 0) && (y < 0)) {
        puts("quadrante 4\n");
    } else if ((x < 0) && (y > 0)) {
        puts("quadrante 2\n");
    } else {
        puts("quadrante 3\n");
    }
    return 0;
}
