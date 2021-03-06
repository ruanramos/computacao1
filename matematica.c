/* 
Implementa o conjunto de funcoes para operacoes matematicas basicas declaradas em matematica.h
*/

/* 
Descricao: soma dois numeros inteiros
Entrada: os dois numeros inteiros
Saida: a soma dos dois numeros
Resticoes:
*/
int soma (int x, int y) {
   return x + y;
}

/* 
Descricao: subtrai dois numeros inteiros
Entrada: os dois numeros (minuendo e subtraendo)
Saida: o resto da subtracao
Resticoes:
*/
int subtrai (int x, int y) {
   return x - y;
}

/* 
Descricao: divide dois numeros inteiros
Entrada: os dois numeros (dividendo e divisor)
Saida: o quociente da divisao
Resticoes: o divisor deve ser diferente de zero
*/
int divide (int x, int y) {
   return x / y;
}

/* 
Descricao: multiplica dois numeros inteiros
Entrada: os dois numeros inteiros
Saida: o produto dos dois numeros
Resticoes:
*/
int multiplica (int x, int y) {
   return x * y;
}

/* 
Descricao: faz a potencia de um numero por outro
Entrada: os dois numeros inteiros
Saida: um elevado ao outro
Resticoes: y >= 0
*/

int potencia(int x, int y) {
    int n;
    n = 1;
    while (y != 0) {
        n = n * x;
        y--;
    }
    return n;
}
