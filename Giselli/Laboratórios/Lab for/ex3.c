#include <stdio.h>

int main () {
	int a, b, aux;
	printf("Escreva os valores de a e b: ");
	scanf("%d %d", &a, &b);
	if (a > b) {
		aux = a;
		a = b;
		b = aux;
	}
	for (;a <= b; a++) {
		if (a % 2 == 0)
			printf("%d\n", a);
	}
	return 0;
}
