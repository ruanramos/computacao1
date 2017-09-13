#include <stdio.h>

int fatorial(int n) {
    int res=1;
    for (;n>0;n--) {
        res = res * n;
    }
    return res;
}

int main() {
    int n;
    puts("Digite o um valor para calcular o fatorial: ");
    scanf("%d", &n);
    printf("O resultado eh %d\n", fatorial(n));
    return 0;
}
