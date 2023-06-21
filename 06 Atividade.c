#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo usando operações lógicas para informar se uma pessoa é obrigada a votar.
// Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar.

int main()
{
    setlocale(LC_ALL, "");

    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18){
        printf("NÃO É OBRIGADO A VOTAR!");
    }
    else if (idade > 65){
        printf("NÃO É OBRIGADO A VOTAR!");
    }else{
        printf("VOTO OBRIGATORIO");
    }

    return 0;
}