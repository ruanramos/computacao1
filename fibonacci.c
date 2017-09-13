#include <stdio.h>

int main() {
	int n, termo1, termo2, soma;
	printf("Quantos termos voce deseja?\n");
	scanf("%d", &n);
	if (n < 0) {
		printf("numero invalido\n");
		return 0;
	}
	termo1 = 1;
	termo2 = 1;
	if (n == 1) {
		printf("%d", termo1);
		printf("\n");
	}
	else if (n == 2) {
		printf("%d ", termo1);
		printf("%d", termo2);
		printf("\n");
	}
	else {
		printf("%d ", termo1);
		printf("%d ", termo2);
		for(;n > 2; n--) {
			soma = termo1 + termo2;
			printf("%d ", soma);
			termo1 = termo2;
			termo2 = soma;
		}
		printf("\n");
	}
	return 0;
}
