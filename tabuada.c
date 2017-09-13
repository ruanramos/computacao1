/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: imprime a tabuada de 1 ate N
Entrada: N
Saıda: toda a tabuada ate N
*/

#include <stdio.h>

int main(void) {
    //dicionario de dados
    int N, i, j;
    //pedindo N
    puts("Digite ate que numero a tabuada deve ir:");
    scanf("%d", &N);
    //comandos do programa
    i = 1, j = 1;
    while (i <= N) {
        while (j < 10) {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
        j = 1;
    }
    
    return 0;
}

