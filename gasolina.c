/*
Descricao: programa que determina se eh mais economico abastecer com gasolina ou alcool
Entrada: preco do litro de alcool, do litro de gasolina e relação km/litro de combustivel de um carro flex
Saida: texto dizendo qual eh mais economico
*/

#include <stdio.h>

int main(void) {
    float a, g, kmLitroa, kmLitrog;
    float gasolina, alcool;
    printf("Qual o preco do litro de alcool?:\n");
    scanf("%f", &a);
    printf("Qual o preco do litro de gasolina?:\n");
    scanf("%f", &g);
    printf("Quantos km se percorrem com um litro de alcool?:\n");
    scanf("%f", &kmLitroa);
    printf("Quantos km se percorrem com um litro de gasolina?:\n");
    scanf("%f", &kmLitrog);
    
    gasolina = g * kmLitrog;
    alcool = a * kmLitroa;
    
    if (gasolina > alcool) {
        printf("O alcool eh mais economico\n");
    } else if (alcool > gasolina) {
        printf("A gasolina eh mais economica\n");
    } else {
        printf("Tanto faz com qual abastecer\n");
    } return 0;
}
