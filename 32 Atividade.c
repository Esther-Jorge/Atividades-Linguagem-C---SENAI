#include <stdio.h>

float calcularIMC(float peso, float altura) {
    float imc = peso / (altura * altura);
    return imc;
}

int main() {
    float peso, altura, imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = calcularIMC(peso, altura);

    printf("O seu IMC é %.2f\n", imc);

    return 0;
}
