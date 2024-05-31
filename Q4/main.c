// Feito por mim mesmo sei la

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_ABENCOADOS 5

typedef struct {
    int matriculaDoSerAbencoado;
    char nomeAbencoado[100];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Abencoado;

int main() {
    Abencoado alunos[NUM_ABENCOADOS];
    float maiorNota1 = 0;
    int indiceMaiorNota1;
    float maiorMedia = 0;
    int indiceMaiorMedia;
    float menorMedia = 10; 
    int indiceMenorMedia;

    for (int i = 0; i < NUM_ABENCOADOS; i++) {
        printf("Digite os dados do aluno %d:\n", i+1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matriculaDoSerAbencoado);
        printf("Nome: ");
        scanf("%s", alunos[i].nomeAbencoado);
        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);
        
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            indiceMaiorNota1 = i;
        }

        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media;
            indiceMaiorMedia = i;
        }

        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media;
            indiceMenorMedia = i;
        }
    }

    printf("\nAbencodo com maior nota na primeira prova:\n");
    printf("Matrícula: %d\n", alunos[indiceMaiorNota1].matriculaDoSerAbencoado);
    printf("Nome: %s\n", alunos[indiceMaiorNota1].nomeAbencoado);
    printf("Nota da primeira prova: %.2f\n\n", alunos[indiceMaiorNota1].nota1);

    printf("Abencoado com maior média geral:\n");
    printf("Matrícula: %d\n", alunos[indiceMaiorMedia].matriculaDoSerAbencoado);
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nomeAbencoado);
    printf("Média geral: %.2f\n\n", alunos[indiceMaiorMedia].media);

    printf("Abencoado com menor média geral:\n");
    printf("Matrícula: %d\n", alunos[indiceMenorMedia].matriculaDoSerAbencoado);
    printf("Nome: %s\n", alunos[indiceMenorMedia].nomeAbencoado);
    printf("Média geral: %.2f\n\n", alunos[indiceMenorMedia].media);

    printf("Situação dos abencoados:\n");
    for (int i = 0; i < NUM_ABENCOADOS; i++) {
        printf("%s - ", alunos[i].nomeAbencoado);
        if (alunos[i].media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}

//Celso bahia e um otimo time 
