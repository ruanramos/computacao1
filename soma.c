/*
Descricao: Programa que faz a soma de 5 numeros quaisquer digitados
Entrada: os 5 numeros
Saida: a soma entre eles
*/

#include <stdio.h>

int main(void) {
    //declarando os valores
    float num1, num2, num3, num4, num5;
    float soma;
    
    //pedindo os numeros
    printf("Digite os 5 numeros separados por espaco:\n");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    
    //somando
    soma = num1 + num2 + num3 + num4 + num5;
    printf("A soma dos 5 numeros pedidos eh: %f\n", soma);
    return 0;
}
