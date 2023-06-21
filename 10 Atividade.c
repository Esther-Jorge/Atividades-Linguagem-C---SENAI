#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um algoritmo que leia a média de um aluno. Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.
//Após receber a média, verifique se o aluno está aprovado ou reprovado considerando que a média para aprovação é maior ou igual
//a 7. Caso a média seja até 5, o aluno está em recuperação, caso seja menor que 5, o aluno está reprovado.

int main(){

    float media;

    do {
        printf("Digite a media do aluno (0 a 10): ");
        scanf("f",&media);

        if (media < 0 || media > 10){
            printf("Media invalida. Por favor digite novamente. \n");

        }
    }while (media < 0 || media > 10);

    if (media >= 7){
        printf("O aluno esta APROVADO! \n");
    }else if (media >= 5){
        printf("O aluno esta em RECUPERACAO!\n");
    }else{
        printf("O aluno esta APROVADO");
    }


    return 0;
}