#include <stdio.h>


struct Eletrodomestico {
    char nome[16];
    float potencia; 
    float tempoAtivo;
} Eletrodomestico;

void lerEletrodomestico(struct Eletrodomestico *eletrodomestico) {
    printf("Digite o nome do eletrodomestico (max 15 letras): ");
    scanf(" %[^\n]", eletrodomestico->nome);
    printf("Digite a potencia do eletrodomestico (em kW): ");
    scanf("%f", &eletrodomestico->potencia);
    printf("Digite o tempo ativo por dia do eletrodomestico (em horas): ");
    scanf("%f", &eletrodomestico->tempoAtivo);
}

float calcularConsumoTotal(const struct Eletrodomestico eletrodomesticos[], int numEletrodomesticos, float tempo) {
    float consumoTotal = 0;
    for (int i = 0; i < numEletrodomesticos; i++) {
        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo;
    }
    return consumoTotal;
}

int main() {
    struct Eletrodomestico eletrodomesticos[5];
    float tempo;

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados do eletrodomestico %d:\n", i + 1);
        lerEletrodomestico(&eletrodomesticos[i]);
    }

    printf("\nDigite o tempo em dias: ");
    scanf("%f", &tempo);

    float consumoTotal = calcularConsumoTotal(eletrodomesticos, 5, tempo);

    printf("\nConsumo total na casa: %.2f kWh\n", consumoTotal);
    printf("Consumo relativo de cada eletrodomestico:\n");
    for (int i = 0; i < 5; i++) {
        float consumoRelativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo) / consumoTotal * 100;
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumoRelativo);
    }

    return 0;
}
