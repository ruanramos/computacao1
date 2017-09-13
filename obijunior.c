/*
Autor: Ruan da Fonseca Ramos
Data: 27/08/2014
Descricao: programa que calcula quantos alunos vao para o curso na unicamp
Entrada: numero de alunos, nota minima, nota 1 e nota 2 de cada aluno
Saida: numero de alunos
*/

#include <stdio.h>
int main() {
    int N, soma, contador;
    float minP, P1, P2;
    printf("digite o numero de alunos e a nota minima para ir para o curso:\n");
    scanf("%d %f", &N, &minP);
    soma = 0, contador = 1;
    for ( ; N > 0; N--) {
        printf("digite as notas 1 e 2 do aluno %d: \n", contador);
        scanf("%f %f", &P1, &P2);
        if ((P1 + P2)/2 >= minP) {
            soma ++;
        }
        contador ++;
    }
    printf("%d\n", soma);
    return 0;
}
