#include <stdio.h>
//Faça um programa em C que imprime uma tabela com a tabuada de um número informado pelo usuário de 1 a 10.



void imprimirTabuada(int numero) {
    int i;

    printf("Tabuada do %d:\n", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int numero;

    printf("Digite um número para calcular a tabuada: ");
    scanf("%d", &numero);

    imprimirTabuada(numero);

    return 0;
}
