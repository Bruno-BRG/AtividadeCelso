#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
} Data;

struct Compromisso {
    char compromisso[61];
    struct Data data;
} Compromisso;

void lerCompromisso(struct Compromisso *compromisso) {
    printf("Digite o compromisso (max 60 letras): ");
    scanf(" %[^\n]", compromisso->compromisso);
    printf("Digite a data (DD MM AAAA): ");
    scanf("%d %d %d", &compromisso->data.dia, &compromisso->data.mes, &compromisso->data.ano);
}

void exibirCompromisso(const struct Compromisso *compromisso) {
    printf("Compromisso: %s\n", compromisso->compromisso);
    printf("Data: %02d/%02d/%04d\n", compromisso->data.dia, compromisso->data.mes, compromisso->data.ano);
}

int main() {
    struct Compromisso compromissos[5];
    int mes, ano;

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados do compromisso %d:\n", i + 1);
        lerCompromisso(&compromissos[i]);
    }

    do {
        printf("\nDigite o mes e o ano para visualizar os compromissos (M A): ");
        scanf("%d %d", &mes, &ano);

        if (mes != 0) {
            printf("\nCompromissos para o mes %d do ano %d:\n", mes, ano);
            int encontrou = 0;
            for (int i = 0; i < 5; i++) {
                if (compromissos[i].data.mes == mes && compromissos[i].data.ano == ano) {
                    exibirCompromisso(&compromissos[i]);
                    encontrou = 1;
                }
            }
            if (!encontrou) {
                printf("Nenhum compromisso encontrado para o mes %d do ano %d.\n", mes, ano);
            }
        }
    } while (mes != 0);

    printf("Programa encerrado.\n");

    return 0;
}
