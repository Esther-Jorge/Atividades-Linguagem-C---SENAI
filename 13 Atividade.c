#include <stdio.h>
//  Crie um programa que leia 3 notas, armazenando em um vetor e calcule a média aritmética.
//Mostre as 3 notas informadas pelo usuário e informe a média.
int main() {
    float notas[3];
    float soma = 0;
    float media;
    int i;

    printf("Digite as 3 notas:\n");
    for (i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma / 3;

    printf("\nNotas informadas:\n");
    for (i = 0; i < 3; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    printf("Média: %.2f\n", media);

    return 0;
}
