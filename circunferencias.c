/*
Descricao: Programa que calcula se um dado ponto esta dentro, sobre ou fora de uma dada circunferencia
Entrada: coordenadas do ponto, do centro da circunferencia e o raio
Saida: 1 se estiver dentro, 2 se estiver sobre ou 3 se estiver fora
*/

int pontoCircunferencia(float x, float y, float raio, float xc, float yc) {
    float equacao;
    equacao = (x - xc) * (x - xc) + (y - yc) * (y - yc)
    if (equacao == r*r) {
        return 2
    } else if (equacao < r*r) {
        return 1
    } else {
        return 3
    }
}

/*
Descricao: Programa que checa se duas circunferencias sao interna uma a outra, externas uma da outra ou tangentes externamente
Entrada: coordenadas do centro das circunferencias e os raios
Saida: 1 se estiver dentro, 2 se estiver sobre ou 3 se estiver fora
*/

int comparaCircunferencias(float xc1, float yc1, float xc2, float yc2, float r1, float r2) {
    
}
