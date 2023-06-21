#include <stdio.h>

//Fazer um programa em C que lê o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou
//igual a 100.

float inflacionarPreco(float preco) {
    if (preco < 100) {
        preco *= 1.1; // inflaciona em 10%
    } else {
        preco *= 1.2; // inflaciona em 20%
    }
    return preco;
}

int main() {
    float preco, precoInflacionado;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    precoInflacionado = inflacionarPreco(preco);

    printf("Preço original: R$ %.2f\n", preco);
    printf("Preço inflacionado: R$ %.2f\n", precoInflacionado);

    return 0;
}
