#include <stdio.h>

//considerando 0 como falso e 1 como verdadeiro
int vogal(char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || || letra == 'O' || letra == 'U') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char caract;
    puts("Digite um caracter para saber se eh uma vogal ou nao: ");
    caract = getchar();
    if (vogal(caract) == 0)
        puts("Nao eh uma vogal");
    else
        puts("Eh uma vogal");
    return 0;
}
