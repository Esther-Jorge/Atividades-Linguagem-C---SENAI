#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela:
//  A media, a soma, o produto, o menor valor e o maior valor. Além disso, verifique se os números informados pelo usuário são iguais.
// Usando uma linha para cada resultado.

int main()
{
    setlocale(LC_ALL, "");

    // Variaveis

    int numero1, numero2;
    int soma, produto;
    float media;
    int maiorValor, menorValor;

    // Solicitando dados ao usuario

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    produto = numero1 * numero2;
    media = (numero1 + numero2) / 2;

    if (numero1 > numero2)
    {
        maiorValor = numero1;
        menorValor = numero2;
    }
    else
    {
        maiorValor = numero2;
        menorValor = numero1;
    }

    system("cls");

    // Mostrando dados ao usuario

    printf("Soma: %d \n", soma);
    printf("Produto: %d \n", produto);
    printf("Media: %.1f \n", media);
    printf("Maior Valor: %d \n", maiorValor);
    printf("Menor valor: %d \n", menorValor);

    if (numero1 == numero2)
    {
        printf("Os números são iguais");
    }

    return 0;
}