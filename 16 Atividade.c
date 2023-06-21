#include <stdio.h>

//Crie um programa que leia 6 números, armazenando em um vetor e informe quantos são pares e quantos são ímpares.
//Mostre os números informados pelo usuário.

int main() {
    int numeros[6];
    int pares = 0, impares = 0;
    int i;

    printf("Digite 6 números:\n");
    for (i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nNúmeros informados:\n");
    for (i = 0; i < 6; i++) {
        printf("Número %d: %d\n", i + 1, numeros[i]);
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
