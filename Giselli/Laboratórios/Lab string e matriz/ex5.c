#include <stdio.h>
#include <string.h>
#define MESES 6
#define VENDEDORES 3
int main() {
	double vendas[MESES][VENDEDORES], maior=0, maiores[MESES];
	int i, j;
	
	for (i=0;i<MESES;i++) {
		for (j=0;j<VENDEDORES;j++) {
			printf("Forneca o valor das vendas do vendedor %d no mes %d:", j+1, i+1);
			scanf("%lf",&vendas[i][j]);
		}
	}
	
	for (i=0;i<MESES;i++) {
		maior = vendas[i][0];
		for (j=1;j<VENDEDORES;j++) {
			if (vendas[i][j] > maior) {
				maior = vendas[i][j];
			}
		}
		maiores[i] = maior;
	}
	
	for (i=0;i<MESES;i++) {
		printf("Maior valor de vendas do mes %d: %f\n", i+1, maiores[i]);
		printf("Vendedor(es) que venderam o maior valor no mes %d: \n", i);
		for (j=0;j<VENDEDORES;j++) {
			if (maiores[i] == vendas[i][j]) {
				printf("Vendedor %d\n", j+1);
			}
		}
	}
	return 0;
}