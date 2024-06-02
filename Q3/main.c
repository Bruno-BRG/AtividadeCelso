// Feito por Bruno Guimaraes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define NUM_ALUNOS 5

typedef struct {
    char nomeAluno[MAX_LENGTH];
    int matriculaAluno;
    char cursoAluno[MAX_LENGTH];
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];

    printf("Digite os dados dos %d alunos:\n", NUM_ALUNOS);
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i+1);

        printf("Nome: ");
        fgets(alunos[i].nomeAluno, MAX_LENGTH, stdin);
        alunos[i].nomeAluno[strcspn(alunos[i].nomeAluno, "\n")] = '\0';

        printf("Número de matrícula: ");
        scanf("%d", &alunos[i].matriculaAluno);
        while (getchar() != '\n');

        printf("Curso: ");
        fgets(alunos[i].cursoAluno, MAX_LENGTH, stdin);
        alunos[i].cursoAluno[strcspn(alunos[i].cursoAluno, "\n")] = '\0'; 
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nomeAluno);
        printf("Número de matrícula: %d\n", alunos[i].matriculaAluno);
        printf("Curso: %s\n", alunos[i].cursoAluno);
    }

    return 0;
}

// jo to sem criatividade aqui Celso
