#include <stdio.h>
#include <string.h>

#define MAX_CARROS 5
#define TAM_MARCA 16

typedef struct {
    char marca[TAM_MARCA];
    int ano;
    float preco;
} Carro;

void lerCarro(Carro *carro) {
    printf("Digite a marca do carro (max 15 letras): ");
    scanf("%15s", carro->marca);
    printf("Digite o ano do carro: ");
    scanf("%d", &carro->ano);
    printf("Digite o preco do carro: ");
    scanf("%f", &carro->preco);
}

void exibirCarro(const Carro *carro) {
    printf("Marca: %s\n", carro->marca);
    printf("Ano: %d\n", carro->ano);
    printf("Preco: %.2f\n", carro->preco);
}

int main() {
    Carro carros[MAX_CARROS];
    float p;

    for (int i = 0; i < MAX_CARROS; i++) {
        printf("Digite os dados do carro %d:\n", i + 1);
        lerCarro(&carros[i]);
    }

    do {
        printf("\nDigite um valor de p (preco): ");
        scanf("%f", &p);

        if (p != 0) {
            printf("\nCarros com preco menor que %.2f:\n", p);
            int encontrou = 0;
            for (int i = 0; i < MAX_CARROS; i++) {
                if (carros[i].preco < p) {
                    exibirCarro(&carros[i]);
                    encontrou = 1;
                }
            }
            if (!encontrou) {
                printf("Nenhum carro encontrado com preco menor que %.2f\n", p);
            }
        }
    } while (p != 0);

    printf("Programa encerrado.\n");

    return 0;
}
