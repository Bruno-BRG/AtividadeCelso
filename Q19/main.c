#include <stdio.h>

struct Voo {
    int origem;
    int destino;
} Voo;

struct Aeroporto {
    int codigo;
    int voosSaida;
    int voosChegada;
} Aeroporto;

void lerVoo(struct Voo *voo) {
    printf("Digite o codigo do aeroporto de origem: ");
    scanf("%d", &voo->origem);
    printf("Digite o codigo do aeroporto de destino: ");
    scanf("%d", &voo->destino);
}

int codigoValido(int codigo) {
    return codigo >= 0 && codigo < 5;
}

int main() {
    struct Voo voos[5];
    struct Aeroporto aeroportos[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Digite os dados do voo %d:\n", i + 1);
        do {
            lerVoo(&voos[i]);
            if (!codigoValido(voos[i].origem) || !codigoValido(voos[i].destino)) {
                printf("Erro: Codigo de aeroporto invalido. Digite novamente.\n");
            }
        } while (!codigoValido(voos[i].origem) || !codigoValido(voos[i].destino));
        aeroportos[voos[i].origem].voosSaida++;
        aeroportos[voos[i].destino].voosChegada++;
    }

    printf("\nDados dos aeroportos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aeroporto %d - Voos de saida: %d - Voos de chegada: %d\n", i, aeroportos[i].voosSaida, aeroportos[i].voosChegada);
    }

    return 0;
}
