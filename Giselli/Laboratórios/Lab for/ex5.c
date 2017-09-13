#include <stdio.h>

int main() {
	int n, fatorial, i;
	printf("Escreva um numero n: ");
	scanf("%d", &n);
	if (n > 0) {
		printf("O numero eh positivo\n");
		if (n == 0 || n == 1)
			fatorial = 1;
		else {
			fatorial = 1;
			for (i = 1; i <= n; i++) {
				fatorial = fatorial * i;
			}
		}
		printf("%d! = %d\n", n, fatorial);
	}else
		printf("O numero nao eh positivo\n");
	
	return 0;
}
