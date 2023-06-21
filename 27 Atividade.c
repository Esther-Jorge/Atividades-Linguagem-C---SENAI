#include <stdio.h>
//Crie uma função em linguagem C que receba 2 números e retorne o menor valor.

int encontrarMenor(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2, menor;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    menor = encontrarMenor(num1, num2);

    printf("Menor valor: %d\n", menor);

    return 0;
}
