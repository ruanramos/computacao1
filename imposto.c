/*
Descricao: programa que calcula o valor de desconto do imposto de renda mensal
Entrada: Valor bruto do salario
Saida: Desconto
*/

#include <stdio.h>

int main() {
    // dicionario de dados
    float salario;
    //pedindo o salario
    puts("Qual o salario bruto?\n");
    scanf("%f", &salario);
    if (salario <= 1710.78) {
        puts("Nao havera desconto\n");
    } else if ((salario >= 1710.79) && (salario <= 2563.91)) {
        salario = (salario - 1710.79) * 0.075;
        printf("Havera um desconto de %0.2f.\n", salario);
    } else if ((salario >= 2563.92) && (salario <= 3418.59)) {
        salario = (salario - 1710.79) * 0.075 + (salario - 2563.92) * 0.15;
        printf("Havera um desconto de %0.2f.\n", salario);
    } else if ((salario >= 3418.60) && (salario <= 4271.59)) {
        salario = (salario - 1710.79) * 0.075 + (salario - 2563.92) * 0.15 + (salario - 3418.60) * 0.225;
        printf("Havera um desconto de %0.2f.\n", salario);
    } else {
        salario = (salario - 1710.79) * 0.075 + (salario - 2563.92) * 0.15 + (salario - 3418.60) * 0.225 + (salario - 4271.60) * 0.275;
        printf("Havera um desconto de %0.2f.\n", salario);
    }
    return 0;
}
