/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que diz se eh possivel formar triangulos e de que tipo
Entrada: os 3 comprimentos
Saida: n se nao for possivel, a se for acutangulo, r se for retangulo, o se for obtusangulo
*/

#include <stdio.h>

int main() {
    //dicionario de dados
    int A, B, C, prov;
    //pedindo
    scanf("%d %d %d", &A, &B, &C);
    //ordenando para ter C como o maior
    if ((A > B) && (A > C)) {
        prov = A;
        A = C;
        C = prov;
    } else if ((B > A) && (B > C)) {
        prov = B;
        B = C;
        C = prov;
    }                
    if ((A+B > C) && (A+C > B) && (B+C > A)) {
        if (A*A + B*B == C*C) {
            puts("r");
        } else if (A*A + B*B > C*C) {
            puts("a");
        } else {
            puts("o");
        }
    } else {
        puts("n");
    }
    return 0;
}
