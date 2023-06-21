#include <stdio.h>

#define BANDAS 3
#define INTEGRANTES 5

int main() {
    char bandas[BANDAS][100];
    char integrantes[BANDAS][INTEGRANTES][100];
    int banda, integrante;

    // Leitura dos nomes das bandas
    for (banda = 0; banda < BANDAS; banda++) {
        printf("Nome da banda %d: ", banda + 1);
        scanf("%s", bandas[banda]);
    }

    // Leitura dos nomes dos integrantes
    for (banda = 0; banda < BANDAS; banda++) {
        printf("\n%s:\n", bandas[banda]);
        for (integrante = 0; integrante < INTEGRANTES; integrante++) {
            printf("Nome do integrante %d: ", integrante + 1);
            scanf("%s", integrantes[banda][integrante]);
        }
    }

    // Exibição das bandas e integrantes
    printf("\n--- Bandas e Integrantes ---\n");
    for (banda = 0; banda < BANDAS; banda++) {
        printf("\n%s:\n", bandas[banda]);
        for (integrante = 0; integrante < INTEGRANTES; integrante++) {
            printf("Integrante %d: %s\n", integrante + 1, integrantes[banda][integrante]);
        }
    }

    return 0;
}
