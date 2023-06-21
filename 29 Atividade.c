#include <stdio.h>
//Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em centímetros.
float converterMetrosParaCentimetros(float metros) {
    float centimetros = metros * 100;
    return centimetros;
}

int main() {
    float metros, centimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    centimetros = converterMetrosParaCentimetros(metros);

    printf("%.2f metros equivalem a %.2f centímetros\n", metros, centimetros);

    return 0;
}
