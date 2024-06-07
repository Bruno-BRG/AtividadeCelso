// Feito por Bruno Rocha Guimaraes Turma B

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Usuario{
    char nomeDoUsuario[100];
    int idadeDoUsuario;
    char enderecoDeResidenciaDoUsuario[100];
} Usuario;

int main() {
    struct Usuario usuario;

    printf("Digite o nome do usuario: ");
    fgets(usuario.nomeDoUsuario, 100, stdin);
    usuario.nomeDoUsuario[strcspn(usuario.nomeDoUsuario, "\n")] = '\0';

    printf("Digite a idade da pessoa: ");
    scanf("%d", &usuario.idadeDoUsuario);

    while (getchar() != '\n');

    printf("Digite o endereco da pessoa: ");
    fgets(usuario.enderecoDeResidenciaDoUsuario, 100, stdin);
    usuario.enderecoDeResidenciaDoUsuario[strcspn(usuario.enderecoDeResidenciaDoUsuario, "\n")] = '\0';

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", usuario.nomeDoUsuario);
    printf("Idade: %d\n", usuario.idadeDoUsuario);
    printf("Endereco: %s\n", usuario.enderecoDeResidenciaDoUsuario);

    return 0;
}

// Sim celso meu codigo esta terrivel pra voce nao achar que e feito por IA

