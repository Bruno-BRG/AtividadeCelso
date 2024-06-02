
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[100];
    int matricula;
    float mediaFinal;
} Aluno;

void lerAluno(Aluno *aluno) {
    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0';

    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno->matricula);

    printf("Digite a media final do aluno: ");
    scanf("%f", &aluno->mediaFinal);

    getchar(); 
}

void imprimeAluno(const Aluno *aluno) {
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("Media Final: %.2f\n", aluno->mediaFinal);
    printf("\n");
}

int main() {
    Aluno alunos[10];
    Aluno aprovados[10];
    Aluno reprovados[10];
    int countAprovados = 0;
    int countReprovados = 0;
    float mediaMinima = 5.0;

    for (int i = 0; i < 10; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        lerAluno(&alunos[i]);
        printf("\n");
    }

    for (int i = 0; i < 10; i++) {
        if (alunos[i].mediaFinal >= mediaMinima) {
            aprovados[countAprovados++] = alunos[i];
        } else {
            reprovados[countReprovados++] = alunos[i];
        }
    }

    printf("Alunos Aprovados:\n");
    for (int i = 0; i < countAprovados; i++) {
        imprimeAluno(&aprovados[i]);
    }

    printf("Alunos Reprovados:\n");
    for (int i = 0; i < countReprovados; i++) {
        imprimeAluno(&reprovados[i]);
    }

    return 0;
}
