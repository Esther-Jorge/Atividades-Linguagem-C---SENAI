#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;
    return media;
}

void verificarAprovacao(float media) {
    if (media >= 7.0) {
        printf("Aluno APROVADO com média %.2f\n", media);
    } else {
        printf("Aluno REPROVADO com média %.2f\n", media);
    }
}

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = calcularMedia(nota1, nota2, nota3);
    verificarAprovacao(media);

    return 0;
}
