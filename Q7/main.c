// Feito por everton riberio

#include <stdio.h>
#include <math.h>

struct CoordenadaPolar {
    double raio;
    double argumento; 
};

typedef struct {
    double x;
    double y;
} CoordenadaCartesiana;

CoordenadaCartesiana converteParaCartesiana(struct CoordenadaPolar polar) {
    CoordenadaCartesiana cartesiana;
    cartesiana.x = polar.raio * cos(polar.argumento);
    cartesiana.y = polar.raio * sin(polar.argumento);
    return cartesiana;
}

int main() {
    struct CoordenadaPolar pontoPolar;
    CoordenadaCartesiana pontoCartesiano;

    printf("Digite o raio: ");
    scanf("%lf", &pontoPolar.raio);
    printf("Digite o argumento (em radianos): ");
    scanf("%lf", &pontoPolar.argumento);

    pontoCartesiano = converteParaCartesiana(pontoPolar);

    printf("Coordenadas cartesiana: x = %.2f, y = %.2f\n", pontoCartesiano.x, pontoCartesiano.y);

    return 0;
}
