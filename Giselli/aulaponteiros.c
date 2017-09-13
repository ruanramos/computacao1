#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int x, y; 
} Ponto;

typedef Ponto Vetor;

void f(int x, int y) {
	x += 1;
}

void g(int *x, int y) {
	*x += 1;
}

void vetor(Ponto, Ponto, Vetor*);

int iguais(int *v, int tam, int n) {
	int r = 0, i;
	for (i = 0; i < tam; i++) {
		if (v[i] == n) r++;
	}
	return r;
}

void converte(char *s) {
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			s[i] += 'A' - 'a';
		}
	}
}

void swap(int *x, int *y) {
	int a = *x;
	*x = *y;
	*y = a;
}

void vetor_de_tamanho_variavel();
void ponteiro_para_ponteiro();

int main() {
	int *p, x;
	
	printf("p = %p\n", p);
	
	printf("x = %d e &x = %p\n", x, &x);
	x = 17;
	printf("x = %d e &x = %p\n", x, &x);
	
	p = &x;
	printf("p = %p e &x = %p e x = %d e *p = %d\n", p, &x, x, *p);
	
	*p = 1;
	printf("p = %p e &x = %p e x = %d e *p = %d\n", p, &x, x, *p);
	
	p = NULL;
	printf("p = %p\n", p);
	
	int v[4] = {1, 2, 3, 4};
	printf("v = %p e &v[0] = %p e v[0] = %d e *v = %d\n", v, &v[0], v[0], *v);
	
	v[0] = 10;
	printf("v = %p e &v[0] = %p e v[0] = %d e *v = %d\n", v, &v[0], v[0], *v);
	*v = 1;
	printf("v = %p e &v[0] = %p e v[0] = %d e *v = %d\n", v, &v[0], v[0], *v);
	
	printf("v = %p e &v[1] = %p e v[1] = %d e *v = %d e *(v+1) = %d\n", v, &v[1], v[1], *v, *(v+1));
	v[1] = 20;
	printf("v = %p e &v[1] = %p e v[1] = %d e *v = %d e *(v+1) = %d\n", v, &v[1], v[1], *v, *(v+1));
	*(v+1) = 2;
	printf("v = %p e &v[1] = %p e v[1] = %d e *v = %d e *(v+1) = %d\n", v, &v[1], v[1], *v, *(v+1));
	
	int y = 20;
	x = 10;
	printf("x = %d\n", x);
	f(x, y);
	printf("x = %d\n", x);
	g(&x, y);
	printf("x = %d\n", x);
	
	Ponto a = {0, 0}, b = {1, 1};
	Vetor u;
	vetor(a, b, &u);
	printf("a = (%d, %d) e b = (%d, %d) e u = (%d, %d)\n", a.x, a.y, b.x, b.y, u.x, u.y);
	
	char s[] = "A minha super string muito legal e bonita.";
	converte(s);
	printf("s = %s\n", s);
	
	vetor_de_tamanho_variavel();
	ponteiro_para_ponteiro();
	
	int t = 10, r = 15;
	printf("t = %d e r = %d\n", t, r);
	swap(&t, &r);
	printf("t = %d e r = %d\n", t, r);
	
	return 0;
}

/* Calcula o vetor AB e guarda no Vetor apontado por v. */
void vetor(Ponto a, Ponto b, Vetor *v) {
	v->x = b.x - a.x; /* Equivalente a (*v).x = b.x - a.x; */
	v->y = b.y - a.y; /* Equivalente a (*v).y = b.y - a.y; */
}

void vetor_de_tamanho_variavel() {
	int *v;
	long long n;
	
	puts("Quantas casas no seu vetor?");
	scanf("%lld", &n);
	
	v = (int*) malloc(n * sizeof(int));
	if (v == NULL) {
		printf("Vetor grande demais, sua mula.\n");
		return;
	}
	
	free(v);
}

void ponteiro_para_ponteiro() {
	int **m, i, j, nlin, ncol;
	
	puts("Quantas linhas na matriz?");
	scanf("%d", &nlin);
	puts("Quantas colunas na matriz?");
	scanf("%d", &ncol);
	
	m = (int**) malloc(nlin * sizeof(int*));
	if (m == NULL) {
		puts("Malloc falhou.");
		return;
	}
	for (i = 0; i < nlin; i++) {
		m[i] = (int*) malloc(ncol * sizeof(int));
		if (m[i] == NULL) {
			for (j = 0; j < i; j++) {
				free(m[i]);
			}
			free(m);
			printf("Falhou o malloc da linha %d.\n", i);
			return;
		}
	}
	
	for (i = 0; i < nlin; i++) {
		free(m[i]);
	}
	free(m);
}
