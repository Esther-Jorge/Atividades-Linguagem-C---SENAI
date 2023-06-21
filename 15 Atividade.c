#include <stdio.h>

//Crie um programa que leia 5 números, armazenando em um vetor e informe qual é o menor número e o maior.
//Mostre os números informados pelo usuário.

int main() {
    int numeros[5];
    int menor, maior;
    int i;

    printf("Digite 5 números:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];
    maior = numeros[0];

    for (i = 1; i < 5; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nNúmeros informados:\n");
    for (i = 0; i < 5; i++) {
        printf("Número %d: %d\n", i + 1, numeros[i]);
    }

    printf("Menor número: %d\n", menor);
    printf("Maior número: %d\n", maior);

    return 0;
}
