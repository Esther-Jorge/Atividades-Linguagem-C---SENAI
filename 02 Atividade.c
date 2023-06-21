#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo para ler um valor e escrever a mensagem: 'É MAIOR QUE 10!' Se o valor lido for maior que 10,
// Caso contrário escrever 'NÃO É MAIOR QUE 10!'. Verifique se o número digitado é igual a 10, caso seja, escreva a
// mensagem: 'O NUMERO É IGUAL A 10!'.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Variaveis
    int num;

    // Solicitando dados ao usuario.
    printf("Digite um número: ");
    scanf("%d", &num);

    // Mostrando dados ao usuario.
    if (num > 10)
    {
        printf("É MAIOR QUE 10!");
    }
    else if (num < 10)
    {
        printf("NÃO É MAIOR QUE 10!");
    }
    else
    {
        printf("O NUMERO É IGUAL A 10!");
    }

    return 0;
}