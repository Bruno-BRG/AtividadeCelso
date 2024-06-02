//Feito por Bruno Rocha Guimaraes

#include <stdio.h>

typedef struct {
    int horaQueExisteNoRelogio;
    int minutosQueExistemNoRelogio;
    int segundosQueExistemNoRelogio;
} horario;

typedef struct {
    int diaQueExisteNoCalendario;
    int mesQueExisteNoCalendario;
    int anoQueExisteNoCalendario;
} data;

typedef struct {
    data data;
    horario horario;
    char descricao[100]; 
} compromisso;

int main() {
    horario horario = {10, 30, 0};
    printf("Horario: %02d:%02d:%02d\n", horario.horaQueExisteNoRelogio, horario.minutosQueExistemNoRelogio, horario.segundosQueExistemNoRelogio);

    data data = {1, 6, 2024};
    printf("Data: %02d/%02d/%04d\n", data.diaQueExisteNoCalendario, data.mesQueExisteNoCalendario, data.anoQueExisteNoCalendario);

    compromisso compromisso = {data, horario, "Reuniao com equipe de desenvolvimento"};
    printf("Compromisso: %s, marcado para %02d/%02d/%04d, as %02d:%02d:%02d\n", compromisso.descricao, 
           compromisso.data.diaQueExisteNoCalendario, compromisso.data.mesQueExisteNoCalendario, compromisso.data.anoQueExisteNoCalendario, 
           compromisso.horario.horaQueExisteNoRelogio, compromisso.horario.minutosQueExistemNoRelogio, compromisso.horario.segundosQueExistemNoRelogio);

    return 0;
}

// Nao sei mais o que e clean code e nomes de variaveis boas
