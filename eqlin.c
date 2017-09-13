/*
Descricao: resolver a equacao de primeiro grau ax + b = 0
Entrada: coeficientes reais a e b da equacao ax + b = 0
Saida: resultado da equacao (valor de x)
*/

#include <stdio.h>

int main(void) {
	//dicionario de dados
	float a, b, x;

	//obtem os coeficientes
	printf("Digite os coeficientes a e b nesta ordem, separados por espaco: \n");
	scanf("%f, %f", &a, &b);
	if (a == 0) {
		printf("valor de a nao e valido \n");
	}else{
		//calcula x
		x = -b/a;
	}
	printf("O valor de x e: %f \n", x);
	
	return 0;
}