#include <stdio.h>
#include <string.h>

#define MAX_RECEITAS 5
#define MAX_INGREDIENTES 10
#define TAM_NOME_RECEITA 26
#define TAM_NOME_INGREDIENTE 31

typedef struct {
    char nome[TAM_NOME_INGREDIENTE];
    int quantidade;
} Ingrediente;

typedef struct {
    char nome[TAM_NOME_RECEITA];
    int qtdIngredientes;
    Ingrediente ingredientes[MAX_INGREDIENTES];
} Receita;

void lerIngrediente(Ingrediente *ingrediente) {
    printf("Digite o nome do ingrediente (max 30 letras): ");
    scanf(" %[^\n]", ingrediente->nome);
    printf("Digite a quantidade necessaria: ");
    scanf("%d", &ingrediente->quantidade);
}

void lerReceita(Receita *receita) {
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

void buscarReceita(const Receita receitas[], int numReceitas, const char nome[]) {
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
    Receita receitas[MAX_RECEITAS];
    char nomeBusca[TAM_NOME_RECEITA];

    for (int i = 0; i < MAX_RECEITAS; i++) {
        printf("Digite os dados da receita %d:\n", i + 1);
        lerReceita(&receitas[i]);
    }

    while (1) {
        printf("\nDigite o nome da receita que deseja buscar (ou deixe em branco para sair): ");
        scanf(" %[^\n]", nomeBusca);
        if (strlen(nomeBusca) == 0) {
            break;
        }
        buscarReceita(receitas, MAX_RECEITAS, nomeBusca);
    }

    return 0;
}
