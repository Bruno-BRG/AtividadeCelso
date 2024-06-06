// Eu odeio malloc celso

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIRETORES 5
#define MAX_NOME 21
#define MAX_NOME_FILME 50

typedef struct {
    char nome[MAX_NOME_FILME];
    int ano;
    int duracao; 
} Filme;

typedef struct {
    char nome[MAX_NOME];
    int quantidadeFilmes;
    Filme *filmes; 
} Diretor;

void lerFilme(Filme *filme) {
    printf("Nome do filme: ");
    scanf(" %[^\n]", filme->nome);
    printf("Ano do filme: ");
    scanf("%d", &filme->ano);
    printf("Duracao do filme (em minutos): ");
    scanf("%d", &filme->duracao);
}

void lerDiretor(Diretor *diretor) {
    printf("Nome do diretor: ");
    scanf(" %[^\n]", diretor->nome);
    printf("Quantidade de filmes: ");
    scanf("%d", &diretor->quantidadeFilmes);
    
    diretor->filmes = (Filme*) malloc(diretor->quantidadeFilmes * sizeof(Filme));
    for (int i = 0; i < diretor->quantidadeFilmes; i++) {
        printf("\nLendo dados do filme %d:\n", i + 1);
        lerFilme(&diretor->filmes[i]);
    }
}

void mostrarFilmes(Diretor *diretor) {
    printf("\nFilmes do diretor %s:\n", diretor->nome);
    for (int i = 0; i < diretor->quantidadeFilmes; i++) {
        printf("Filme %d: %s\n", i + 1, diretor->filmes[i].nome);
        printf("Ano: %d\n", diretor->filmes[i].ano);
        printf("Duracao: %d minutos\n", diretor->filmes[i].duracao);
    }
}

int main() {
    Diretor diretores[MAX_DIRETORES];
    char nomeBusca[MAX_NOME];

    for (int i = 0; i < MAX_DIRETORES; i++) {
        printf("\nLendo dados do diretor %d:\n", i + 1);
        lerDiretor(&diretores[i]);
    }

    while (1) {
        printf("\nDigite o nome do diretor para buscar (ou uma string vazia para sair): ");
        scanf(" %[^\n]", nomeBusca);

        if (strlen(nomeBusca) == 0) {
            break;
        }

        int encontrado = 0;
        for (int i = 0; i < MAX_DIRETORES; i++) {
            if (strcmp(diretores[i].nome, nomeBusca) == 0) {
                mostrarFilmes(&diretores[i]);
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Diretor nao encontrado.\n");
        }
    }

    for (int i = 0; i < MAX_DIRETORES; i++) {
        free(diretores[i].filmes);
    }

    return 0;
}

// Eu ja falei que odeio malloc celso?
