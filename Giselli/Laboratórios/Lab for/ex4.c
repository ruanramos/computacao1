#include <stdio.h>

int main() {
	int m, n, i, soma = 0;
	printf("Digite os valores de m e n: ");
	scanf("%d %d", &m, &n);
	for (i = m+1; i <= m + n; i++) {
		soma = soma + i;
	}
	printf("%d\n", soma);
	return 0;
}
