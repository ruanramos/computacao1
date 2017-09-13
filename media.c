/*
Descricao: Programa que calcula a media final de um aluno e diz se ele foi aprovado ou nao
Entrada: notas dos alunos
Saida: texto dizendo se foi aprovado ou nao
*/

#include <stdio.h>

int main(void) {
    float p1, p2, pf, M;
    
    printf("Quais foram as notas da p1 e da p2 do aluno?\n");
    scanf("%f %f", &p1, &p2);
    M = (p1 + p2)/2;
    if (M < 3) {
        printf("O aluno foi reprovado por nao atingir media 3 nas duas primeiras provas com media %f \n", M);
    }
    else {
        if (M >= 7) {
            printf("O aluno foi aprovado diretamente com a media das 2 primeiras provas com media %f \n", M);
        }
        else {
            printf("Qual foi a nota da prova final do aluno?\n");
            scanf("%f", &pf);
            M = (M + pf)/2;
            if (M >= 5) {
                printf("O aluno foi aprovado apos a prova final com media %f \n", M);
            }
            else {
                printf("O aluno foi reprovado apos a prova final com media %f \n", M);
            }
        }
    }
    return 0;
}
