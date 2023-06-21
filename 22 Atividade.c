#include <stdio.h>

#define SEMESTRES 2
#define NOTAS 3

int main() {
    int notas[SEMESTRES][NOTAS];
    int semestre, nota;
    float media;

    // Leitura das notas
    for (semestre = 0; semestre < SEMESTRES; semestre++) {
        printf("%do semestre:\n", semestre + 1);
        for (nota = 0; nota < NOTAS; nota++) {
            printf("%da nota: ", nota + 1);
            scanf("%d", &notas[semestre][nota]);
        }
    }

    // Cálculo da média e exibição das notas
    for (semestre = 0; semestre < SEMESTRES; semestre++) {
        printf("\n%dº semestre:\n", semestre + 1);
        media = 0;
        for (nota = 0; nota < NOTAS; nota++) {
            printf("%da nota: %d\n", nota + 1, notas[semestre][nota]);
            media += notas[semestre][nota];
        }
        media /= NOTAS;
        printf("Média: %.2f\n", media);
    }

    return 0;
}
