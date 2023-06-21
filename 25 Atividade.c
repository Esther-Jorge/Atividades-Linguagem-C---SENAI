#include <stdio.h>
// Crie um algoritmo que receba o nome de três disciplinas, receba três notas para cada disciplina e mostre a média ponderada de cada disciplina:
#define DISCIPLINAS 3
#define NOTAS 3

int main() {
    char disciplinas[DISCIPLINAS][100];
    float notas[DISCIPLINAS][NOTAS];
    float pesos[DISCIPLINAS][NOTAS];
    float media[DISCIPLINAS];
    int disciplina, nota;

    // Leitura dos nomes das disciplinas
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        printf("Nome da disciplina %d: ", disciplina + 1);
        scanf("%s", disciplinas[disciplina]);
    }

    // Leitura das notas e pesos
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        printf("\n%s:\n", disciplinas[disciplina]);
        for (nota = 0; nota < NOTAS; nota++) {
            printf("Nota %d: ", nota + 1);
            scanf("%f", &notas[disciplina][nota]);
            printf("Peso %d: ", nota + 1);
            scanf("%f", &pesos[disciplina][nota]);
        }
    }

    // Cálculo das médias ponderadas
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        float soma_notas = 0;
        float soma_pesos = 0;
        for (nota = 0; nota < NOTAS; nota++) {
            soma_notas += notas[disciplina][nota] * pesos[disciplina][nota];
            soma_pesos += pesos[disciplina][nota];
        }
        media[disciplina] = soma_notas / soma_pesos;
    }

    // Exibição das médias ponderadas
    printf("\n--- Médias Ponderadas ---\n");
    for (disciplina = 0; disciplina < DISCIPLINAS; disciplina++) {
        printf("\n%s: %.2f\n", disciplinas[disciplina], media[disciplina]);
    }

    return 0;
}
