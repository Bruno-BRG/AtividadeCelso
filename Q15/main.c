#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[31];
    char autor[16];
    int ano;
} Livro;

void lerLivro(struct Livro *livro) {
    printf("Digite o titulo do livro (max 30 letras): ");
    scanf(" %[^\n]", livro->titulo);
    printf("Digite o autor do livro (max 15 letras): ");
    scanf(" %[^\n]", livro->autor);
    printf("Digite o ano do livro: ");
    scanf("%d", &livro->ano);
}

void exibirLivro(const struct Livro *livro) {
    printf("Titulo: %s\n", livro->titulo);
    printf("Autor: %s\n", livro->autor);
    printf("Ano: %d\n", livro->ano);
}

int main() {
    struct Livro livros[5];
    char busca[31];
    int encontrou = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados do livro %d:\n", i + 1);
        lerLivro(&livros[i]);
    }

    printf("\nDigite o titulo do livro que deseja buscar: ");
    scanf(" %[^\n]", busca);

    printf("\nLivros encontrados:\n");
    for (int i = 0; i < 5; i++) {
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
