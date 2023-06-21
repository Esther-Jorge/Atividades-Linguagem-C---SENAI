#include <stdio.h>

//Crie um algoritmo que leia o nome e a idade de 5 pessoas, armazenando em vetores.- Liste o nome e a idade de cada pessoa.

int main() {
    int tamanho = 5;

    char nomes[tamanho][50];
    int idades[tamanho];
    int i;

    printf("Digite o nome e a idade de %d pessoas:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    printf("\nListagem das pessoas:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
    }

    return 0;
}
