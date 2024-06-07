// Feito por Bruno Guimaraes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nomeAbencoado[100];
    int matriculaAbencoado;
    char cursoAbencoado[100];
};

int main() {
    struct Aluno alunos[5];

    printf("Digite os dados dos %d alunos:\n", 5);
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);

        printf("Nome: ");
        fgets(alunos[i].nomeAbencoado, 100, stdin);
        alunos[i].nomeAbencoado[strcspn(alunos[i].nomeAbencoado, "\n")] = '\0';

        printf("Número de matrícula: ");
        scanf("%d", &alunos[i].matriculaAbencoado);
        while (getchar() != '\n');

        printf("Curso: ");
        fgets(alunos[i].cursoAbencoado, 100, stdin);
        alunos[i].cursoAbencoado[strcspn(alunos[i].cursoAbencoado, "\n")] = '\0'; 
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nomeAbencoado);
        printf("Número de matrícula: %d\n", alunos[i].matriculaAluno);
        printf("Curso: %s\n", alunos[i].cursoAbencoado);
    }

    return 0;
}

// jo to sem criatividade aqui Celso
