// Celso

#include <stdio.h>
#include <math.h>

struct Complexo {
    double real;
    double imaginario;
};

Complexo lerComplexo(const struct char* nome) {
    struct Complexo z;
    printf("Digite a parte real de %s: ", nome);
    scanf("%lf", &z.real);
    printf("Digite a parte imaginaria de %s: ", nome);
    scanf("%lf", &z.imaginario);
    return z;
}

Complexo somaComplexo(struct Complexo z, struct Complexo w) {
    struct omplexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginario = z.imaginario + w.imaginario;
    return resultado;
}

Complexo subtraiComplexo(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginario = z.imaginario - w.imaginario;
    return resultado;
}

Complexo multiplicaComplexo(struct Complexo z, struct Complexo w) {
    struct Complexo resultado;
    resultado.real = z.real * w.real - z.imaginario * w.imaginario;
    resultado.imaginario = z.real * w.imaginario + z.imaginario * w.real;
    return resultado;
}

double moduloComplexo(struct Complexo z) {
    return sqrt(z.real * z.real + z.imaginario * z.imaginario);
}

void imprimeComplexo(const char* nome, struct Complexo z) {
    printf("%s = %.2f + %.2fi\n", nome, z.real, z.imaginario);
}

int main() {
    struct Complexo z, w;
    struct Complexo soma, subtracao, produto;
    double moduloZ, moduloW;

    z = lerComplexo("z");
    w = lerComplexo("w");

    soma = somaComplexo(z, w);
    subtracao = subtraiComplexo(z, w);
    produto = multiplicaComplexo(z, w);
    moduloZ = moduloComplexo(z);
    moduloW = moduloComplexo(w);

    imprimeComplexo("z", z);
    imprimeComplexo("w", w);
    imprimeComplexo("z + w", soma);
    imprimeComplexo("z - w", subtracao);
    imprimeComplexo("z * w", produto);
    printf("|z| = %.2f\n", moduloZ);
    printf("|w| = %.2f\n", moduloW);

    return 0;
}
