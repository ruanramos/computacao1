#include <stdio.h>
#define pi 3.1415

double calcula_volume(double r) {
    return (1.0*4/3) * pi * r*r*r;
}

int main() {
    double r;
    printf("Digite o raio da esfera que deseja saber o volume: ");
    scanf("%lf", &r);
    printf("%.2f\n", calcula_volume(r));
    return 0;
}
