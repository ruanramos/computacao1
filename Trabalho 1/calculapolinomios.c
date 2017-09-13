/*
Descricao: biblioteca que faz diversas operacoes com polinomios de grau maximo 9
*/

#include <stdio.h>
#include "polinomios.h"

int main() {
    opcao = imprimeMenu();
    switch(opcao) {
        case 1:
            calculaValor(polinomio);
            break;
        case 2:
            calculaRaiz(polinomio);
            break;
        case 3:
            calculaDerivada(polinomio);
            break;
        case 4
            calculaSoma(polinomio1, polinomio2);
        default:
            printf("Opcao invalida.\n");
            return 1;
    }
    
}
