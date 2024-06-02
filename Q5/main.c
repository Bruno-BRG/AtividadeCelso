// Feito por um avido torcedor do bahia

#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};

struct Vetor somaVetores(struct Vetor vetor1, struct Vetor vetor2) {
    struct Vetor resultado;
    resultado.x = vetor1.x + vetor2.x;
    resultado.y = vetor1.y + vetor2.y;
    resultado.z = vetor1.z + vetor2.z;
    return resultado;
}

int main() {
    struct Vetor vetor1 = {1.0, 2.0, 3.0};
    struct Vetor vetor2 = {4.0, 5.0, 6.0};

    struct Vetor resultado = somaVetores(vetor1, vetor2);

    printf("Resultado da soma dos vetores: (%.2f, %.2f, %.2f)\n", resultado.x, resultado.y, resultado.z);

    return 0;
}
