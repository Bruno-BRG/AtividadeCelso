#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 5
#define TAM_NOME 16

typedef struct {
    int codigo;
    char nome[TAM_NOME];
    float preco;
    int quantidade;
} Produto;

void lerProduto(Produto *produto) {
    printf("Digite o codigo do produto: ");
    scanf("%d", &produto->codigo);
    printf("Digite o nome do produto (max 15 letras): ");
    scanf(" %[^\n]", produto->nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto->preco);
    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &produto->quantidade);
}

int encontrarProduto(const Produto produtos[], int codigo, int numProdutos) {
    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            return i;
        }
    }
    return -1; 
}

void processarPedido(Produto produtos[], int numProdutos) {
    int codigo, quantidade;
    printf("Digite o codigo do produto (ou 0 para sair): ");
    scanf("%d", &codigo);
    if (codigo == 0) {
        return;
    }
    int indice = encontrarProduto(produtos, codigo, numProdutos);
    if (indice != -1) {
        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);
        if (quantidade <= produtos[indice].quantidade) {
            produtos[indice].quantidade -= quantidade;
            printf("Pedido realizado com sucesso!\n");
        } else {
            printf("Erro: Quantidade em estoque insuficiente.\n");
        }
    } else {
        printf("Erro: Produto nao encontrado.\n");
    }
}

int main() {
    Produto produtos[MAX_PRODUTOS];

    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Digite os dados do produto %d:\n", i + 1);
        lerProduto(&produtos[i]);
    }

    while (1) {
        processarPedido(produtos, MAX_PRODUTOS);
    }

    return 0;
}
