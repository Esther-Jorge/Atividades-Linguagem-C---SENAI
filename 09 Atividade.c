#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escrever um programa de computador que leia 5 números inteiros e, ao final, apresente a soma de todos os números lidos.

int main(){
    int numeros[5];
    int i, soma = 0;

    printf("Digite 5 numeros inteiros: \n");

    for (i=0; i<5; i++){
        printf("Numero %d: ", i+1);
        scanf("%d",&numeros[i]);

        soma += numeros[i];
    }

    printf("A soma dos numeros é: %d\n", soma);

    return 0;
}