#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[100];
    char endereco[200];
    char dataNascimento[11];
    char cidade[100];
    char cep[10];
    char email[100];
} Pessoa;

int validarData(const char* data) {
    int dia, mes, ano;
    if (sscanf(data, "%2d/%2d/%4d", &dia, &mes, &ano) != 3) {
        return 0; 
    }
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 1900) {
        return 0;
    }
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return 0;
    }
    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) { 
            if (dia > 29) {
                return 0;
            }
        } else {
            if (dia > 28) {
                return 0;
            }
        }
    }
    return 1;
}

int validarCep(const char* cep) {
    if (strlen(cep) != 8) {
        return 0; 
    }
    for (int i = 0; i < 8; i++) {
        if (!isdigit(cep[i])) {
            return 0; 
        }
    }
    return 1; 
}

int validarEmail(const char* email) {
    const char* at = strchr(email, '@');
    if (!at || at == email || strchr(at, '.') == NULL) {
        return 0; 
    }
    return 1; 
}

void lerDados(Pessoa *pessoa) {
    printf("Digite o nome: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    pessoa->nome[strcspn(pessoa->nome, "\n")] = '\0'; 

    printf("Digite o endereco: ");
    fgets(pessoa->endereco, sizeof(pessoa->endereco), stdin);
    pessoa->endereco[strcspn(pessoa->endereco, "\n")] = '\0'; 

    printf("Digite a data de nascimento (DD/MM/AAAA): ");
    fgets(pessoa->dataNascimento, sizeof(pessoa->dataNascimento), stdin);
    pessoa->dataNascimento[strcspn(pessoa->dataNascimento, "\n")] = '\0'; 

    printf("Digite a cidade: ");
    fgets(pessoa->cidade, sizeof(pessoa->cidade), stdin);
    pessoa->cidade[strcspn(pessoa->cidade, "\n")] = '\0'; 

    printf("Digite o CEP: ");
    fgets(pessoa->cep, sizeof(pessoa->cep), stdin);
    pessoa->cep[strcspn(pessoa->cep, "\n")] = '\0'; 

    printf("Digite o email: ");
    fgets(pessoa->email, sizeof(pessoa->email), stdin);
    pessoa->email[strcspn(pessoa->email, "\n")] = '\0'; 
}

void imprimirDados(const Pessoa *pessoa) {
    printf("\n--- Dados Pessoais ---\n");
    printf("Nome: %s\n", pessoa->nome);
    printf("Endereco: %s\n", pessoa->endereco);
    printf("Data de Nascimento: %s\n", pessoa->dataNascimento);
    printf("Cidade: %s\n", pessoa->cidade);
    printf("CEP: %s\n", pessoa->cep);
    printf("Email: %s\n", pessoa->email);
}

int main() {
    Pessoa pessoa;

    lerDados(&pessoa);

    int dataValida = validarData(pessoa.dataNascimento);
    int cepValido = validarCep(pessoa.cep);
    int emailValido = validarEmail(pessoa.email);

    if (dataValida && cepValido && emailValido) {
        imprimirDados(&pessoa);
        printf("\nTodas as informações estão corretas.\n");
    } else {
        printf("\nAlguma informação está incorreta:\n");
        if (!dataValida) {
            printf("Data de Nascimento inválida.\n");
        }
        if (!cepValido) {
            printf("CEP inválido.\n");
        }
        if (!emailValido) {
            printf("Email inválido.\n");
        }
    }

    return 0;
}
