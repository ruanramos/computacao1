/* 
Descricao: programa que pede um numero e printa se ele eh multiplo de 3
Entrada: quantidade de valores de entrada e os valores
Saida: numeros multiplos de 3
Resticoes:
*/

void multiplo3 (void) {
    int n, val;
    puts("digite a quantidade de valores de entrada:");
    scanf("%d", &n);

    for( ; n>0; n--) {
        scanf("%d", &val);
        if (val < 0) break;
        if (val % 3) continue;
        printf("%d\n", val);
    }
}

