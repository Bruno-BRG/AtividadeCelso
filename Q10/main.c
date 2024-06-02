// Rogerio Ceni fez isso aqui

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    char endereco[200];
    char telefone[20];
} Pessoa;

int comparaNomes(const void *a, const void *b) {
    Pessoa *pessoaA = (Pessoa *)a;
    Pessoa *pessoaB = (Pessoa *)b;
    return strcmp(pessoaA->nome, pessoaB->nome);
}

void lerPessoa(Pessoa *pessoa) {
    printf("Digite o nome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    pessoa->nome[strcspn(pessoa->nome, "\n")] = '\0'; 

    printf("Digite o endereco: ");
    fgets(pessoa->endereco, sizeof(pessoa->endereco), stdin);
    pessoa->endereco[strcspn(pessoa->endereco, "\n")] = '\0';

    printf("Digite o telefone: ");
    fgets(pessoa->telefone, sizeof(pessoa->telefone), stdin);
    pessoa->telefone[strcspn(pessoa->telefone, "\n")] = '\0';
}

void imprimePessoa(const Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Endereco: %s\n", pessoa->endereco);
    printf("Telefone: %s\n", pessoa->telefone);
    printf("\n");
}

int main() {
    Pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        lerPessoa(&pessoas[i]);
        printf("\n");
    }

    qsort(pessoas, 5, sizeof(Pessoa), comparaNomes);

    printf("Dados das pessoas em ordem alfabetica:\n");
    for (int i = 0; i < 5; i++) {
        imprimePessoa(&pessoas[i]);
    }

    return 0;
}
