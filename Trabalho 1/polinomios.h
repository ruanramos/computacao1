//tipo tPolinomio criado para guardar os coeficientes de um polinomio qualquer
typedef struct {
    float coef0, coef1, coef2, coef3, coef4, coef5, coef6, coef7, coef8, coef9;
}tPolinomio;

//imprime o menu para o usuario escolher o que deseja fazer
int imprimeMenu(void);

//funcao que le um polinomio qualquer digitado pelo usuario e retorna o proprio polinomio
tPolinomio lePolinomio(void);

//funcao que guarda os coeficientes digitados numa variavel do tipo tPolinomio de forma a sabermos qual a posicao de cada um deles
tPolinomio guardaCoeficiente(float coeficiente, int expoente);

//funcao que calcula o valor de um polinomio para um dado valor de x

//funcao que calcula as raizes de um polinomio de grau 1 ou 2

//funcao que calcula a derivada de um polinomio

//funcao que calcula a soma de 2 polinomios

