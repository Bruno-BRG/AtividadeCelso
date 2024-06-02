#include <stdio.h>

#define MAX_ELETRODOMESTICOS 5
#define TAM_NOME 16

typedef struct {
    char nome[TAM_NOME];
    float potencia; 
    float tempoAtivo;
} Eletrodomestico;

void lerEletrodomestico(Eletrodomestico *eletrodomestico) {
    printf("Digite o nome do eletrodomestico (max 15 letras): ");
    scanf(" %[^\n]", eletrodomestico->nome);
    printf("Digite a potencia do eletrodomestico (em kW): ");
    scanf("%f", &eletrodomestico->potencia);
    printf("Digite o tempo ativo por dia do eletrodomestico (em horas): ");
    scanf("%f", &eletrodomestico->tempoAtivo);
}

float calcularConsumoTotal(const Eletrodomestico eletrodomesticos[], int numEletrodomesticos, float tempo) {
    float consumoTotal = 0;
    for (int i = 0; i < numEletrodomesticos; i++) {
        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo;
    }
    return consumoTotal;
}

int main() {
    Eletrodomestico eletrodomesticos[MAX_ELETRODOMESTICOS];
    float tempo;

    for (int i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        printf("Digite os dados do eletrodomestico %d:\n", i + 1);
        lerEletrodomestico(&eletrodomesticos[i]);
    }

    printf("\nDigite o tempo em dias: ");
    scanf("%f", &tempo);

    float consumoTotal = calcularConsumoTotal(eletrodomesticos, MAX_ELETRODOMESTICOS, tempo);

    printf("\nConsumo total na casa: %.2f kWh\n", consumoTotal);
    printf("Consumo relativo de cada eletrodomestico:\n");
    for (int i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        float consumoRelativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo) / consumoTotal * 100;
        printf("%s: %.2f%%\n", eletrodomesticos[i].nome, consumoRelativo);
    }

    return 0;
}
