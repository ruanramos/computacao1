/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que descarta a menor nota de 3 provas e faz a media das 2 maiores
Entrada: as 3 notas do aluno
Saida: a media das duas maiores notas, com uma casa decimal
*/

#include <stdio.h>
int main (void) {
    //dicionario de dados
    float n1, n2, n3;
    float media;
    //recebe os numeros de entrada
    puts("Entre com os tres numeros:");
    scanf("%f %f %f", &n1, &n2, &n3);
    //processa os numeros
    if ((n1 <= n2) && (n1 <= n3)) {
        media = (n2 + n3)/2;
    } else if ((n2 <= n1) && (n2 <= n3)) {
        media = (n1 + n3)/2;
    } else {
        media = (n1 + n2)/2;
    }
    //imprime o resultado
    printf("A media eh %0.1f\n", media);
    return 0;
}
