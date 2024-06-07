// grito alto e muito agudo use a imaginação

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cadastro {
    char nome[50];
    char endereco[100];
    float salario;
    char identidade[50];
    char cpf[50];
    char estadoCivil[20];
    char telefone[15];
    int idade;
    char sexo[10];
} Cadastro;

// Pra que c++ se com as coisas certas vc pode ter objetos em c
void lerCadastro(struct Cadastro *cadastro) {
    printf("Nome: ");
    scanf(" %[^\n]", cadastro->nome);
    printf("Endereco (Rua, bairro, cidade, estado, CEP): ");
    scanf(" %[^\n]", cadastro->endereco);
    printf("Salario: ");
    scanf("%f", &cadastro->salario);
    printf("Identidade: ");
    scanf(" %[^\n]", cadastro->identidade);
    printf("CPF: ");
    scanf(" %[^\n]", cadastro->cpf);
    printf("Estado civil: ");
    scanf(" %[^\n]", cadastro->estadoCivil);
    printf("Telefone: ");
    scanf(" %[^\n]", cadastro->telefone);
    printf("Idade: ");
    scanf("%d", &cadastro->idade);
    printf("Sexo: ");
    scanf(" %[^\n]", cadastro->sexo);
}

void imprimirCadastro(const struct Cadastro *cadastro) {
    printf("\nNome: %s\n", cadastro->nome);
    printf("Endereco: %s\n", cadastro->endereco);
    printf("Salario: %.2f\n", cadastro->salario);
    printf("Identidade: %s\n", cadastro->identidade);
    printf("CPF: %s\n", cadastro->cpf);
    printf("Estado civil: %s\n", cadastro->estadoCivil);
    printf("Telefone: %s\n", cadastro->telefone);
    printf("Idade: %d\n", cadastro->idade);
    printf("Sexo: %s\n", cadastro->sexo);
}

int main() {
    struct Cadastro cadastros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nLendo dados do cadastro %d:\n", i + 1);
        lerCadastro(&cadastros[i]);
    }

    int indiceMaiorIdade = 0;
    for (i = 1; i < 5; i++) {
        if (cadastros[i].idade > cadastros[indiceMaiorIdade].idade) {
            indiceMaiorIdade = i;
        }
    }
    printf("\nPessoa com a maior idade:\n");
    printf("Nome: %s\n", cadastros[indiceMaiorIdade].nome);
    printf("CPF: %s\n", cadastros[indiceMaiorIdade].cpf);

    printf("\nPessoas do sexo masculino:\n");
    for (i = 0; i < 5; i++) {
        if (strcmp(cadastros[i].sexo, "Masculino") == 0 || strcmp(cadastros[i].sexo, "masculino") == 0) {
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Identidade: %s\n", cadastros[i].identidade);
        }
    }

    printf("\nPessoas com salario maior que 1000:\n");
    for (i = 0; i < 5; i++) {
        if (cadastros[i].salario > 1000) {
            printf("Nome: %s\n", cadastros[i].nome);
            printf("Salario: %.2f\n", cadastros[i].salario);
        }
    }

    char identidadeBusca[50];
    printf("\nDigite a identidade a ser buscada: ");
    scanf(" %[^\n]", identidadeBusca);
    int encontrado = 0;
    for (i = 0; i < 5; i++) {
        if (strcmp(cadastros[i].identidade, identidadeBusca) == 0) {
            printf("\nPessoa com a identidade %s encontrada:\n", identidadeBusca);
            imprimirCadastro(&cadastros[i]);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("\nPessoa com a identidade %s nao encontrada.\n", identidadeBusca);
    }

    return 0;
}

//PS: N gosto de OOP prefiro programacao funcional
