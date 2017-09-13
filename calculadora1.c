/*
Descricao: permite realizar as operacoes matematicas basicas sobre inteiros 
(somar, subtrair, dividir, multiplicar, elevar a potencia)
*/

#include "matematica.h"
#include <stdio.h>

int main (void) {
   //dicionario de dados
   int a, b, i, N; //operandos
   char operador; //operador a ser usado
   
   //le o operando 1, o operador, e o operando 2
   printf("Quantas operacoes voce quer fazer?\n");
   scanf("%d", &N);
   for (i = 0;i < N;i++) {
       puts("Digite o operando 1, o operador (+, -, /, *, ^) e o operando 2");
       scanf("%d %c %d", &a, &operador, &b);

       //executa a operacao solicitada
       if (operador == '+') {
          printf("%d\n", soma(a,b));
       } else if (operador == '-') {
          printf("%d\n", subtrai(a,b));
       } else if (operador == '/') {
          if (b!=0) 
             printf("%d\n", divide(a,b));
       } else if (operador == '*') {
          printf("%d\n", multiplica(a,b));
       } else if (operador == '^') {
          printf("%d\n", potencia(a,b));
       } else {
          puts("Operador nao definido!");
       }
   }
   return 0;   
}
