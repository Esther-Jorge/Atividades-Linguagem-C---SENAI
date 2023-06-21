#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule: a) quantidade de números pares e ímpares;
//b) média de valores pares. O número que encerrará a leitura será zero.

#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;
    int somaPares = 0, quantidadePares = 0;

    printf("Digite uma quantidade não determinada de números positivos (0 para encerrar):\n");

    do {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero % 2 == 0) {
                pares++;
                somaPares += numero;
                quantidadePares++;
            } else {
                impares++;
            }
        }
    } while (numero != 0);

    printf("\nResultados:\n");
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    if (quantidadePares > 0) {
        float mediaPares = (float)somaPares / quantidadePares;
        printf("Média dos valores pares: %.2f\n", mediaPares);
    } else {
        printf("Não foram digitados números pares.\n");
    }

    return 0;
}

