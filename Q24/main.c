// mas que p0##4 vc me fez fazer aqui celso 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Telefone{
    int DDD;
    char numero[15];
};

struct Endereco{
    char rua[200];
    int numero;
    char complemento[200];
    char bairro[200];
    char cep[15];
    char cidade[200];
    char estado[200];
    char pais[30];
};

struct Pessoa{ 
    char nome[30];
    char email[30];
    struct Endereco endereco;
    struct Telefone telefone;
    struct Data aniversario;
    char observacoes[200];
};

struct Pessoa agenda[100];
int totalPessoas = 0;

void inserirPessoa() {
    if (totalPessoas >= 100) {
        printf("Agenda cheia.\n");
        return;
    }

    struct Pessoa novaPessoa;
    printf("Nome: ");
    scanf(" %[^\n]", novaPessoa.nome);
    printf("E-mail: ");
    scanf(" %[^\n]", novaPessoa.email);
    printf("Endereco:\n");
    printf("  Rua: ");
    scanf(" %[^\n]", novaPessoa.endereco.rua);
    printf("  Numero: ");
    scanf("%d", &novaPessoa.endereco.numero);
    printf("  Complemento: ");
    scanf(" %[^\n]", novaPessoa.endereco.complemento);
    printf("  Bairro: ");
    scanf(" %[^\n]", novaPessoa.endereco.bairro);
    printf("  CEP: ");
    scanf(" %[^\n]", novaPessoa.endereco.cep);
    printf("  Cidade: ");
    scanf(" %[^\n]", novaPessoa.endereco.cidade);
    printf("  Estado: ");
    scanf(" %[^\n]", novaPessoa.endereco.estado);
    printf("  Pais: ");
    scanf(" %[^\n]", novaPessoa.endereco.pais);
    printf("Telefone:\n");
    printf("  DDD: ");
    scanf("%d", &novaPessoa.telefone.DDD);
    printf("  Numero: ");
    scanf(" %[^\n]", novaPessoa.telefone.numero);
    printf("Data de aniversario:\n");
    printf("  Dia: ");
    scanf("%d", &novaPessoa.aniversario.dia);
    printf("  Mes: ");
    scanf("%d", &novaPessoa.aniversario.mes);
    printf("  Ano: ");
    scanf("%d", &novaPessoa.aniversario.ano);
    printf("Observacoes: ");
    scanf(" %[^\n]", novaPessoa.observacoes);

    int i, j;
    for (i = 0; i < totalPessoas; i++) {
        if (strcmp(novaPessoa.nome, agenda[i].nome) < 0) {
            break;
        }
    }

    for (j = totalPessoas; j > i; j--) {
        agenda[j] = agenda[j - 1];
    }

    agenda[i] = novaPessoa;
    totalPessoas++;
    printf("Pessoa adicionada com sucesso.\n");
}

void buscarPorNome(char *nome) {
    int encontrado = 0;
    for (int i = 0; i < totalPessoas; i++) {
        if (strstr(agenda[i].nome, nome) != NULL) {
            encontrado = 1;
            printf("\nNome: %s\n", agenda[i].nome);
            printf("E-mail: %s\n", agenda[i].email);
            printf("Endereco: %s, %d, %s, %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: (%d) %s\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            printf("Aniversario: %02d/%02d/%04d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observacoes: %s\n", agenda[i].observacoes);
        }
    }
    if (!encontrado) {
        printf("Nenhuma pessoa encontrada com o nome %s.\n", nome);
    }
}

void buscarPorMesAniversario(int mes) {
    int encontrado = 0;
    for (int i = 0; i < totalPessoas; i++) {
        if (agenda[i].aniversario.mes == mes) {
            encontrado = 1;
            printf("\nNome: %s\n", agenda[i].nome);
            printf("E-mail: %s\n", agenda[i].email);
            printf("Endereco: %s, %d, %s, %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: (%d) %s\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            printf("Aniversario: %02d/%02d/%04d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observacoes: %s\n", agenda[i].observacoes);
        }
    }
    if (!encontrado) {
        printf("Nenhuma pessoa encontrada com aniversario no mes %d.\n", mes);
    }
}

void buscarPorDiaMesAniversario(int dia, int mes) {
    int encontrado = 0;
    for (int i = 0; i < totalPessoas; i++) {
        if (agenda[i].aniversario.dia == dia && agenda[i].aniversario.mes == mes) {
            encontrado = 1;
            printf("\nNome: %s\n", agenda[i].nome);
            printf("E-mail: %s\n", agenda[i].email);
            printf("Endereco: %s, %d, %s, %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: (%d) %s\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            printf("Aniversario: %02d/%02d/%04d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observacoes: %s\n", agenda[i].observacoes);
        }
    }
    if (!encontrado) {
        printf("Nenhuma pessoa encontrada com aniversario em %02d/%02d.\n", dia, mes);
    }
}

void removerPessoa(char *nome) {
    int i, j;
    int encontrado = 0;
    for (i = 0; i < totalPessoas; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            encontrado = 1;
            for (j = i; j < totalPessoas - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            totalPessoas--;
            i--; 
        }
    }
    if (encontrado) {
        printf("Pessoa removida com sucesso.\n");
    } else {
        printf("Pessoa com o nome %s nao encontrada.\n", nome);
    }
}

void imprimirAgenda(int opcao) {
    for (int i = 0; i < totalPessoas; i++) {
        if (opcao == 1) {
            printf("Nome: %s, Telefone: (%d) %s, E-mail: %s\n", agenda[i].nome, agenda[i].telefone.DDD, agenda[i].telefone.numero, agenda[i].email);
        } else if (opcao == 2) {
            printf("\nNome: %s\n", agenda[i].nome);
            printf("E-mail: %s\n", agenda[i].email);
            printf("Endereco: %s, %d, %s, %s, %s, %s, %s, %s\n", agenda[i].endereco.rua, agenda[i].endereco.numero, agenda[i].endereco.complemento, agenda[i].endereco.bairro, agenda[i].endereco.cep, agenda[i].endereco.cidade, agenda[i].endereco.estado, agenda[i].endereco.pais);
            printf("Telefone: (%d) %s\n", agenda[i].telefone.DDD, agenda[i].telefone.numero);
            printf("Aniversario: %02d/%02d/%04d\n", agenda[i].aniversario.dia, agenda[i].aniversario.mes, agenda[i].aniversario.ano);
            printf("Observacoes: %s\n", agenda[i].observacoes);
        }
    }
}

int main() {
    int opcao;
    char nome[30];
    int mes, dia;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir pessoa\n");
        printf("2. Buscar por primeiro nome\n");
        printf("3. Buscar por mes de aniversario\n");
        printf("4. Buscar por dia e mes de aniversario\n");
        printf("5. Remover pessoa\n");
        printf("6. Imprimir agenda (nome, telefone e e-mail)\n");
        printf("7. Imprimir agenda (todos os dados)\n");
        printf("8. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirPessoa();
                break;
            case 2:
                printf("Digite o nome para buscar: ");
                scanf(" %[^\n]", nome);
                buscarPorNome(nome);
                break;
            case 3:
                printf("Digite o mes para buscar: ");
                scanf("%d", &mes);
                buscarPorMesAniversario(mes);
                break;
            case 4:
                printf("Digite o dia e o mes para buscar: ");
                scanf("%d %d", &dia, &mes);
                buscarPorDiaMesAniversario(dia, mes);
                break;
            case 5:
                printf("Digite o nome para remover: ");
                scanf(" %[^\n]", nome);
                removerPessoa(nome);
                break;
            case 6:
                imprimirAgenda(1);
                break;
            case 7:
                imprimirAgenda(2);
                break;
            case 8:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 8);

    return 0;
}
