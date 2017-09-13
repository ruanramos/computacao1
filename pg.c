/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: calcula e exibe os N primeiros termos de uma PG
Entrada: primeiro termo, quantidade de termos e razão da PG
Saıda: termos da PG
*/

#include <stdio.h>

int main(void) {
    //dicionario de dados
    int N, i;
    float primeiro_termo, razao;
    //pegando os dados de entrada
    printf("entre com a razao, o primeiro termo e o numero total de termos:\n");
    scanf("%f %f %d", &razao , &primeiro_termo, &N);
    //comandos do programa
    for (i=0; i < N; i++) {
        printf("%0.2f ", primeiro_termo);
        primeiro_termo = primeiro_termo * razao; //usando o primeiro termo para gravar o proximo da PG a cada laço
    }
    printf("\n");
    return 0;
}
