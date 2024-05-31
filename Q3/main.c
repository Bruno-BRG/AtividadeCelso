// Feito por Bruno Guimaraes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define NUM_ALUNOS 5

typedef struct {
    char nomeAbencoado[MAX_LENGTH];
    int matriculaAbencoado;
    char cursoAbencoado[MAX_LENGTH];
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];

    printf("Digite os dados dos %d alunos:\n", NUM_ALUNOS);
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i+1);

        printf("Nome: ");
        fgets(alunos[i].nomeAbencoado, MAX_LENGTH, stdin);
        alunos[i].nomeAbencoado[strcspn(alunos[i].nomeAbencoado, "\n")] = '\0';

        printf("Número de matrícula: ");
        scanf("%d", &alunos[i].matriculaAbencoado);
        while (getchar() != '\n');

        printf("Curso: ");
        fgets(alunos[i].cursoAbencoado, MAX_LENGTH, stdin);
        alunos[i].cursoAbencoado[strcspn(alunos[i].cursoAbencoado, "\n")] = '\0'; 
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nomeAbencoado);
        printf("Número de matrícula: %d\n", alunos[i].matriculaAluno);
        printf("Curso: %s\n", alunos[i].cursoAbencoado);
    }

    return 0;
}

// jo to sem criatividade aqui Celso
