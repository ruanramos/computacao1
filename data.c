/* 
Autor: Ruan da Fonseca Ramos
Data: 18/09/2014
Descricao: programa que diz se uma data eh valida
Entrada: dia mes e ano
Saida: 1 ou 0
Restricoes:
*/

int datavalida(int x, int y, int z) {
    if ((x <= 0) || (y <= 0) || (z <= 0))
        return 0;
    else {
        if (y == 2) {
            if (x <= 28) 
                return 1;
            else
                return 0;
        }
        else if (y % 2 != 0) {
            if (x <= 31)
                return 1;
            else
                return 0;
        }
        else {
            if (x <= 30)
                return 1;
            else
                return 0;
        }
    }
}


/* 
Descricao: programa que qual data é mais recente
Entrada: duas datas validas
Saida: 1 ou 2
Resticoes:
*/

int datarecente(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    if ((datavalida(dia1, mes1, ano1) == 0) || (datavalida(dia2, mes2, ano2) == 0)) {
        return -1;
    } else {
        if (ano1 > ano2)
            return 1;
        else if (ano2 > ano1)
            return 2;
        else {
            if (mes1 > mes2)
                return 1;
            else if (mes2 > mes1)
                return 2;
            else {
                if (dia1 > dia2)
                    return 1;
                else if (dia2 > dia1)
                    return 2;
            }
        }
    }
    return -1;
}
