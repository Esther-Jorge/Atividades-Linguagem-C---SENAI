#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as três notas. Calcular a média anual do aluno.
// Caso a média do aluno seja menor que 7, o aluno está reprovado. Imprimir: nome, idade, media e se está aprovado ou reprovado.

int main()
{
    setlocale(LC_ALL, "");

    // Variaveis
    char nome[250];
    int idade; 
    int nota1, nota2, nota3;
    float media;

    // Solicitando
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    system("cls");

    // Mostrando

    printf("Nome: %s \n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Media: %.1f \n", media);

    if(media > 7){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }



    return 0;
}