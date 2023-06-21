#include <stdio.h>
//Crie um algoritmo que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma 
//dos números positivos desse vetor.

int main() {
    int tamanho = 10;
    float numeros[tamanho];
    int i;
    int quantidadeNegativos = 0;
    float somaPositivos = 0.0;

    printf("Digite %d números reais:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("\nQuantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
