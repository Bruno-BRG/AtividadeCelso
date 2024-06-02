#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 5
#define TAM_TITULO 31
#define TAM_AUTOR 16

typedef struct {
    char titulo[TAM_TITULO];
    char autor[TAM_AUTOR];
    int ano;
} Livro;

void lerLivro(Livro *livro) {
    printf("Digite o titulo do livro (max 30 letras): ");
    scanf(" %[^\n]", livro->titulo);
    printf("Digite o autor do livro (max 15 letras): ");
    scanf(" %[^\n]", livro->autor);
    printf("Digite o ano do livro: ");
    scanf("%d", &livro->ano);
}

void exibirLivro(const Livro *livro) {
    printf("Titulo: %s\n", livro->titulo);
    printf("Autor: %s\n", livro->autor);
    printf("Ano: %d\n", livro->ano);
}

int main() {
    Livro livros[MAX_LIVROS];
    char busca[TAM_TITULO];
    int encontrou = 0;

    for (int i = 0; i < MAX_LIVROS; i++) {
        printf("Digite os dados do livro %d:\n", i + 1);
        lerLivro(&livros[i]);
    }

    printf("\nDigite o titulo do livro que deseja buscar: ");
    scanf(" %[^\n]", busca);

    printf("\nLivros encontrados:\n");
    for (int i = 0; i < MAX_LIVROS; i++) {
        if (strcmp(livros[i].titulo, busca) == 0) {
            exibirLivro(&livros[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum livro encontrado com o titulo '%s'.\n", busca);
    }

    return 0;
}
