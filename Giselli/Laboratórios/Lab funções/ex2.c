#include <stdio.h>

double minimo(double n1, double n2, double n3) {
    double minimo = n1;
    if (n2 < minimo)
        minimo = n2;
    if (n3 < minimo)
        minimo = n3;
    return minimo;
}

int main() {
    double n1, n2, n3;
    printf("Digite as tres notas: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("A menor das tres notas eh %.2f\n", minimo(n1,n2,n3));
    return 0;
}
