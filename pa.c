/*
Autor: Ruan da Fonseca Ramos
Data: 18/09/2014
Descricao: calcula o N-ésimo termo de uma PA
Entrada: numero de termos, primeiro termo e razao
Saida: N-ésimo termo
*/

#include <stdio.h>
int main(void) {
    //dicionario de dados
    int n, i;
    float termo, razao;
    printf("Digite o numero de termos da PA, o primeiro termo e a razao:\n");
    scanf("%d %f %f", &n, &termo, &razao);
    for (i = 0; i < n - 1; i++) {
        termo += razao;
    }
    printf("O %d termo eh %0.2f\n", n, termo);
    return 0;
}
