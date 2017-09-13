/*
Autor: Ruan da Fonseca Ramos
Data: 22/08/2014
Descricao: programa que calcula o valor de desconto do imposto de renda mensal
Entrada: Valor bruto do salario
Saida: Desconto
*/

#include <stdio.h>

int main() {
    // dicionario de dados
    float salario, desc1, desc2, desc3, desc4;
    
    #define FAIXA1 1710.78
    #define FAIXA2 2563.91
    #define FAIXA3 3418.59
    #define FAIXA4 4271.59
    
    #define AL1 0.075
    #define AL2 0.15
    #define AL3 0.225
    #define AL4 0.275
    //pedindo o salario
    puts("Qual o salario bruto?\n");
    scanf("%f", &salario);
    if (salario <= FAIXA1) {
        printf("desconto no valor de R$%0.2f\n", 0.00); 
    } else if (salario <= FAIXA2) {
        desc1 = (salario - FAIXA1) * AL1;
        printf("desconto no valor de R$%0.2f\n", desc1);
    } else if (salario <= FAIXA3) {
        desc2 = (FAIXA2 - FAIXA1)*AL1 + (salario - FAIXA2)*AL2;
        printf("desconto no valor de R$%0.2f\n", desc2);
    } else if (salario <= FAIXA4) {
        desc3 = (FAIXA2 - FAIXA1)*AL1 + (FAIXA3 - FAIXA2)*AL2 + (salario - FAIXA3)*AL3;
        printf("desconto no valor de R$%0.2f\n", desc3);
    } else {
        desc4 = (FAIXA2 - FAIXA1)*AL1 + (FAIXA3 - FAIXA2)*AL2 + (FAIXA4 - FAIXA3)*AL3 + (salario - FAIXA4)*AL4;
        printf("desconto no valor de R$%0.2f\n", desc4);
    }
    return 0;
}
