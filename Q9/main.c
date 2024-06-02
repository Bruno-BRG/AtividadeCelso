// Celso


#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double imaginario;
} Complexo;

Complexo lerComplexo(const char* nome) {
    Complexo z;
    printf("Digite a parte real de %s: ", nome);
    scanf("%lf", &z.real);
    printf("Digite a parte imaginaria de %s: ", nome);
    scanf("%lf", &z.imaginario);
    return z;
}

Complexo somaComplexo(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginario = z.imaginario + w.imaginario;
    return resultado;
}

Complexo subtraiComplexo(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginario = z.imaginario - w.imaginario;
    return resultado;
}

Complexo multiplicaComplexo(Complexo z, Complexo w) {
    Complexo resultado;
    resultado.real = z.real * w.real - z.imaginario * w.imaginario;
    resultado.imaginario = z.real * w.imaginario + z.imaginario * w.real;
    return resultado;
}

double moduloComplexo(Complexo z) {
    return sqrt(z.real * z.real + z.imaginario * z.imaginario);
}

void imprimeComplexo(const char* nome, Complexo z) {
    printf("%s = %.2f + %.2fi\n", nome, z.real, z.imaginario);
}

int main() {
    Complexo z, w;
    Complexo soma, subtracao, produto;
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
