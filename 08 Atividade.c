#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que leia 5 valores inteiros e ao final mostre: a) quantos números são pares; b) quantos números são impares;

int main(){
    int numeros[5];
    int i, pares = 0, impares = 0;

    printf("Digite 5 numeros inteiros: \n");

    for (i=0; i<5; i++){
        printf("Numero %d:", i+1);
        scanf("%d",&numeros[i]);

        if (numeros[i] % 2==0){
            pares++;
        }else{
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n",pares);
    printf("Quantidade de numeros impares: %d\n",impares);

    return 0;
}