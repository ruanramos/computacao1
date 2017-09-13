#include <stdio.h>

int main() {
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	for(;n > 0; n--) {
		printf("%d\n", n);
	}
	return 0;
}
