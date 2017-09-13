#include <stdio.h>

int ehMultiplo(int r, int s) {
    if (r % s)
        return 0;
    return 1;
}

void multiplos(int q, int x, int y) {
    int contador = 0, natural = 0;
    while (contador < 0) {
        if ((ehMultiplo(natural, x)) || (ehMultiplo(natural,y))) {
            contador++;
            printf("%d ", natural);
        }
        natural++;
    }
    printf("\n");
}

int main() {
    int q, x, y;
    printf("Informe os valores de n, a, b\n");
    scanf("%d %d %d", &q, &x, &y);
    if ((x <= 0) || (y <= 0) || (q < 0)) {
        puts("Parâmetros invalidos");
        return -1;
    }
    multiplos(q,x,y);
    return 0;
}
