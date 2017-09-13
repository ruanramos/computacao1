#include <stdio.h>
#include <string.h>
#define TAMANHO 10

int main() {
	int vet1[TAMANHO], vet2[TAMANHO], vet_res[TAMANHO];
	char vet_op[TAMANHO];
	int i;
	for (i=0; i < TAMANHO; i++) {
		printf("Digite o proximo valor para o primeiro vetor: ");
		scanf("%d", &vet1[i]);
	}
	for (i=0; i < TAMANHO; i++) {
		printf("Digite o proximo valor para o segundo vetor: ");
		scanf("%d", &vet2[i]);
	}
	for (i=0; i < TAMANHO; i++) {
		printf("Digite a proxima operacao para o vetor de operacoes (+ ou - ou * ou /): ");
		getchar();
		scanf("%c", &vet_op[i]);
	}
	
	printf("VETOR RESULTANTE:\n\n");
	
	for (i=0; i < TAMANHO; i++) {
		switch(vet_op[i]) {
			case '+':
				vet_res[i] = vet1[i] + vet2[i];
				break;
			case '-':
				vet_res[i] = vet1[i] - vet2[i];
				break;
			case '*':
				vet_res[i] = vet1[i] * vet2[i];
				break;
			case '/':
				vet_res[i] = vet1[i] / vet2[i];
				break;
		}
		printf("%d\n", vet_res[i]);
	}
	return 0;
}