/*
Autor: Ruan da Fonseca Ramos
Data: 29/08/2014
Descricao: programa que diz o numero minimo de partes que precisamos quebrar uma sequencia de numeros para termos apenas PA's
Entrada: o numero de elementos da sequencia e os seus elementos
Saıda: o numero minimo de partes em que se precisa quebrar
*/

#include <stdio.h>
#define INF 0x3f3f3f3f

int main() {
    //dicionario de dados
    int n, r, x, y, resposta, i;
    //pedindo os dados
    scanf("%d", &n);
    if (n == 1) {
        printf("1\n");
    } else {
        scanf("%d", &y);
        r = INF;
        resposta = 1;
        for (i = 0; i < n-1; i++) {
            x = y;
            scanf("%d", &y);
            if (r == INF) {
                r = y - x;
            } else if (y - x != r) {
                resposta++;
                r = INF;
            }
        }
        printf("%d\n", resposta);
    }
    return 0;
}
