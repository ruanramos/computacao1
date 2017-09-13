/*
Descricao: programa que calcula a nota final dos alunos de uma turma
*/

#include <stdio.h>
float media(float a, float b, float c);

/*
Descricao: programa que calcula se um aluno foi aprovado ou nao
Entrada: a media do aluno
Saida: se foi aprovado ou nao
*/

int main() {
    float a, b, c, resultado;
    printf("entre com as 3 notas do aluno:\n");
    scanf("%f %f %f", &a, &b, &c);
    resultado = media(a,b,c);
    if (resultado >= 5) {
        printf("O aluno foi aprovado com nota %0.3f.\n", resultado);
    } else {
        printf("O aluno foi reprovado com nota %0.3f.\n", resultado);
    }
    return 0;
}

/*
Entrada: as 3 notas do aluno
Saida: a media das duas maiores notas
*/

float media(float a, float b, float c) {
    float media;
    float aux;
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
    if (c > b) {
        aux = b;
        b = c;
        c = aux;
    }
    media = (a + b) / 2;
    return media;
}
