#include <stdio.h>

#define DISCIPLINAS 3
#define NOTAS 2

int main() {
    char disciplinas[DISCIPLINAS][100];
    float notas[DISCIPLINAS][NOTAS];
    float media;
    int disciplina, nota;

    // Leitura dos nomes das disciplinas
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        printf("Nome da disciplina %d: ", disciplina + 1);
        scanf("%s", disciplinas[disciplina]);
    }

    // Leitura das notas
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        printf("\n%s:\n", disciplinas[disciplina]);
        for (nota = 0; nota < NOTAS; nota++) {
            printf("%da nota: ", nota + 1);
            scanf("%f", &notas[disciplina][nota]);
        }
    }

    // Cálculo da média e exibição das notas
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        printf("\n%s:\n", disciplinas[disciplina]);
        media = 0;
        for (nota = 0; nota < NOTAS; nota++) {
            printf("%da nota: %.1f\n", nota + 1, notas[disciplina][nota]);
            media += notas[disciplina][nota];
        }
        media /= NOTAS;
        printf("Média: %.1f\n", media);
    }

    return 0;
}
