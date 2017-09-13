#include <stdio.h>

int main() {
	int i;
	float a, b, S;
	a = 1;
	b = 1;
	S = 0;
	for (i = 0; i <= 50; i++) {
		S += a/b;
		a += 2;
		b++;
	}
	printf("%f\n", S);
	return 0;
}