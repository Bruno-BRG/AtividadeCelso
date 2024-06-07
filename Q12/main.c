
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Carta {
    char valor[3];
    char naipe[9];
};

void inicializarBaralho(struct Carta baralho[52]) {
    const char* valores[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const char* naipes[] = {"Copas", "Ouros", "Espadas", "Paus"};

    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            snprintf(baralho[index].valor, sizeof(baralho[index].valor), "%s", valores[j]);
            snprintf(baralho[index].naipe, sizeof(baralho[index].naipe), "%s", naipes[i]);
            index++;
        }
    }
}

void embaralharBaralho(struct Carta baralho[52]) {
    for (int i = 0; i < 52; i++) {
        int r = rand() % 52;
        struct Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }
}

void distribuirCartas(struct Carta baralho[52], struct Carta jogador1[5], struct Carta jogador2[5]) {
    for (int i = 0; i < 5; i++) {
        jogador1[i] = baralho[i * 2];
        jogador2[i] = baralho[i * 2 + 1];
    }
}

void imprimirCartas(const char* nomeJogador, struct Carta cartas[5]) {
    printf("Cartas do %s:\n", nomeJogador);
    for (int i = 0; i < 5; i++) {
        printf("%s de %s\n", cartas[i].valor, cartas[i].naipe);
    }
    printf("\n");
}

int main() {
    struct Carta baralho[52];
    struct Carta jogador1[5];
    struct Carta jogador2[5];

    srand(time(NULL));

    inicializarBaralho(baralho);
    embaralharBaralho(baralho);

    distribuirCartas(baralho, jogador1, jogador2);

    imprimirCartas("Jogador 1", jogador1);
    imprimirCartas("Jogador 2", jogador2);

    return 0;
}
