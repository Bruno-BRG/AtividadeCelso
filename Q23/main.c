#include <stdio.h>

struct dma{
    int dia;
    int mes;
    int ano;
};

int bissextoPontoDeInterrogacao(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    }
    return 0;
}

int converterParaDias(struct dma data) {
    int dias = data.dia;
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < data.ano; i++) {
        dias += bissextoPontoDeInterrogacao(i) ? 366 : 365;
    }

    for (int i = 0; i < data.mes - 1; i++) {
        dias += diasPorMes[i];
        if (i == 1 && bissextoPontoDeInterrogacao(data.ano)) { 
            dias += 1;
        }
    }

    return dias;
}

int diferencaDias(struct dma data1, struct dma data2) {
    int dias1 = converterParaDias(data1);
    int dias2 = converterParaDias(data2);

    return dias2 - dias1;
}

int main() {
    struct dma data1, data2;
    
    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diferenca = diferencaDias(data1, data2);

    printf("A diferença em dias entre as datas é: %d\n", diferenca);

    return 0;
}
