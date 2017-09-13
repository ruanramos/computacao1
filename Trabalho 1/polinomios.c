#include <stdio.h>

//imprime o menu para o usuario escolher o que deseja fazer
int imprimeMenu(void) {
    //dicionario de dados
    int opcao;
    //imprime um pequeno menu para o usuario
    printf("Se deseja calcular o valor de um polinomio para um certo valor de x, digite 1.\n");
    printf("Se deseja calcular as raizes de um polinomio de grau 1 ou 2, digite 2.\n");
    printf("Se deseja calcular a derivada de um polinomio, digite 3.\n");
    printf("Se deseja calcular a soma de dois polinomios, digite 4.\n");
    //repete enquanto a opcao digitada nao for valida
    do {
        scanf("%d", opcao);
        if ((opcao > 0) && (opcao < 5))
            return opcao;
        else 
            puts("Opcao invalida, escolha outra opcao.\n");
    } while((opcao <= 0) || (opcao >= 5));
}

//funcao que guarda o coeficiente recebido numa variavel do tipo tPolinomio de forma a sabermos qual a posicao de cada um deles
tPolinomio guardaCoeficiente(float coeficiente,int expoente) {
    //dicionario de dados
    tPolinomio polinomio;
    //esse switch vai colocar o coeficiente na variavel do tipo tPolinomio, entao a funcao retorna o valor do polinomio ao final, com os coeficientes certos
    switch(expoente) {
        case 0:
            polinomio.coef0 = coeficiente;
            break;
        case 1:
            polinomio.coef1 = coeficiente;
            break;
        case 2:
            polinomio.coef2 = coeficiente;
            break;
        case 3:
            polinomio.coef3 = coeficiente;
            break;
        case 4:
            polinomio.coef4 = coeficiente;
            break;
        case 5:
            polinomio.coef5 = coeficiente;
            break;
        case 6:
            polinomio.coef6 = coeficiente;
            break;
        case 7:
            polinomio.coef7 = coeficiente;
            break;
        case 8:
            polinomio.coef8 = coeficiente;
            break;
        case 9:
            polinomio.coef9 = coeficiente;
            break;
        default:
            puts("Algum problema com o expoente"); //teoricamente o switch nunca vai entrar no default
    }
    return polinomio;
}

//funcao que le um polinomio qualquer digitado pelo usuario e retorna o proprio polinomio
tPolinomio lePolinomio(void) {
    //dicionario de dados
    float coeficiente;
    int numero_termos, expoente, i;
    tPolinomio polinomio;
    //pedimos o numero de termos do polinomio e checamos se eh valido de acordo com as restricoes pedidas
    do {
        printf("Entre com o numero de termos do polinomio:\n");
        scanf("%d", numero_termos);
        if ((numero_termos > 0) && (numero_termos <= 10)) {
            //agora pedimos os coeficientes separadamente
            for (i=0; i < numero_termos; i++) {
                printf("Digite o coeficiente e o expoente do primeiro termo na forma (coeficiente)x^(expoente), sem os parenteses. Nao digite termos que tenham coeficiente 0.\n");
                //vai entrar em um loop ate que seja digitado expoente e coeficientes validos
                do {
                    scanf("%fx^%d", &coeficiente, &expoente);
                    //o coeficiente digitado nao pode ser 0
                    if (coeficiente == 0)
                        printf("Nao digite termos que tenham coeficiente 0. Digite o coeficiente e o expoente novamente.\n");
                    //expoente invalido
                    else if ((expoente > 9) || (expoente < 0))
                        printf("O expoente eh invalido. Digite o coeficiente e o expoente novamente.\n");
                    //caso do coeficiente e expoente valido, agora guarda eles em alguma estrutura
                    else {
                        polinomio = guardaCoeficiente(coeficiente,expoente);
                    }
                } while ((coeficiente == 0) || (expoente < 0) || (expoente > 9));
            }
        }
        else
            printf("Numero de termos invalido.\n");
    } while ((numero_termos <= 0) || (numero_termos > 10));
