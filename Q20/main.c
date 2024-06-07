#include <stdio.h>
#include <string.h>

struct Ingrediente {
    char nome[31];
    int quantidade;
} Ingrediente;

struct Receita {
    char nome[26];
    int qtdIngredientes;
    struct Ingrediente ingredientes[10];
} Receita;

void lerIngrediente(struct Ingrediente *ingrediente) {
    printf("Digite o nome do ingrediente (max 30 letras): ");
    scanf(" %[^\n]", ingrediente->nome);
    printf("Digite a quantidade necessaria: ");
    scanf("%d", &ingrediente->quantidade);
}

void lerReceita(struct Receita *receita) {
    printf("Digite o nome da receita (max 25 letras): ");
    scanf(" %[^\n]", receita->nome);
    printf("Digite a quantidade de ingredientes: ");
    scanf("%d", &receita->qtdIngredientes);
    printf("Agora, digite os ingredientes:\n");
    for (int i = 0; i < receita->qtdIngredientes; i++) {
        printf("Ingrediente %d:\n", i + 1);
        lerIngrediente(&receita->ingredientes[i]);
    }
}

void buscarReceita(const struct Receita receitas[], int numReceitas, const char nome[]) {
    int encontrou = 0;
    for (int i = 0; i < numReceitas; i++) {
        if (strcmp(receitas[i].nome, nome) == 0) {
            printf("Receita encontrada!\n");
            printf("Nome: %s\n", receitas[i].nome);
            printf("Ingredientes:\n");
            for (int j = 0; j < receitas[i].qtdIngredientes; j++) {
                printf("- %s: %d\n", receitas[i].ingredientes[j].nome, receitas[i].ingredientes[j].quantidade);
            }
            encontrou = 1;
            break;
        }
    }
    if (!encontrou) {
        printf("Receita nao encontrada.\n");
    }
}

int main() {
    struct Receita receitas[5];
    char nomeBusca[26];

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados da receita %d:\n", i + 1);
        lerReceita(&receitas[i]);
    }

    while (1) {
        printf("\nDigite o nome da receita que deseja buscar (ou deixe em branco para sair): ");
        scanf(" %[^\n]", nomeBusca);
        if (strlen(nomeBusca) == 0) {
            break;
        }
        buscarReceita(receitas, 5, nomeBusca);
    }

    return 0;
}
