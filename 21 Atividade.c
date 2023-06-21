#include <stdio.h>

#define SEMESTRES 2
#define NOTAS 3

int main() {
    int notas[SEMESTRES][NOTAS];
    int semestre, nota;

    // Leitura das notas
    for (semestre = 0; semestre < SEMESTRES; semestre++) {
        printf("%do semestre:\n", semestre + 1);
        for (nota = 0; nota < NOTAS; nota++) {
            printf("%da nota: ", nota + 1);
            scanf("%d", &notas[semestre][nota]);
        }
    }

    // Exibição das notas
    for (semestre = 0; semestre < SEMESTRES; semestre++) {
        printf("\n%do semestre:\n", semestre + 1);
        for (nota = 0; nota < NOTAS; nota++) {
            printf("%da nota: %d\n", nota + 1, notas[semestre][nota]);
        }
    }

    return 0;
}
