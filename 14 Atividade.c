#include <stdio.h>
//Crie um programa que leia 4 notas, armazenando em um vetor e calcule a média aritmética. Verifique a situação do aluno considerando:
//- Média maior ou igual a 7: Aprovado.- Média maior ou igual a 5: Recuperação.- Média menor que 5: Reprovado.
//Mostre as 4 notas informadas pelo usuário e informe a média.

int main() {
    float notas[4];
    float soma = 0;
    float media;
    int i;

    printf("Digite as 4 notas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }

    media = soma / 4;

    printf("\nNotas informadas:\n");
    for (i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    printf("Média: %.2f\n", media);

    if (media >= 7) {
        printf("Situação: Aprovado\n");
    } else if (media >= 5) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
