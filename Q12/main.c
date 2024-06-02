
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char valor[3];
    char naipe[9];
} Carta;

void inicializarBaralho(Carta baralho[52]) {
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

void embaralharBaralho(Carta baralho[52]) {
    for (int i = 0; i < 52; i++) {
        int r = rand() % 52;
        Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }
}

void distribuirCartas(Carta baralho[52], Carta jogador1[5], Carta jogador2[5]) {
    for (int i = 0; i < 5; i++) {
        jogador1[i] = baralho[i * 2];
        jogador2[i] = baralho[i * 2 + 1];
    }
}

void imprimirCartas(const char* nomeJogador, Carta cartas[5]) {
    printf("Cartas do %s:\n", nomeJogador);
    for (int i = 0; i < 5; i++) {
        printf("%s de %s\n", cartas[i].valor, cartas[i].naipe);
    }
    printf("\n");
}

int main() {
    Carta baralho[52];
    Carta jogador1[5];
    Carta jogador2[5];

    srand(time(NULL));

    inicializarBaralho(baralho);
    embaralharBaralho(baralho);

    distribuirCartas(baralho, jogador1, jogador2);

    imprimirCartas("Jogador 1", jogador1);
    imprimirCartas("Jogador 2", jogador2);

    return 0;
}
