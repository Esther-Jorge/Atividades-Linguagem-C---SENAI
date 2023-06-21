#include <stdio.h>
// Crie um algoritmo que leia 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.
int main() {
    int numeros[6];
    int i = 0;
    int contadorPares = 0;

    printf("Digite 6 valores inteiros pares:\n");

    while (contadorPares < 6) {
        int valor;
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            numeros[i] = valor;
            contadorPares++;
            i++;
        } else {
            printf("O valor digitado não é par. Tente novamente.\n");
        }
    }

    printf("\nValores lidos na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
