#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//escrever um algoritmo que pergunte ao usuário se deseja inserir mais uma nota, se a resposta do usuário for “NÃO”, o programa fará a média 
//aritmética das notas informadas e mostrará a média aritmética para o usuário.Obs.: Use um contador dentro do laço de repetição para contar a
//quantidade e iterações (loops).

int main(){
    int contador = 0;
    float nota, soma = 0;
    char resposta;

    do {
        printf("Digite uma nota: ");
        scanf("%f",&nota);

        soma += nota;
        contador++;

        printf("\nDeseja inserir mais uma nota? (S/N): ");
        scanf("%c", &resposta);   

        fflush(stdin);

    }while (resposta != 'N' && resposta !='n');

    float media = soma / contador;

    printf("A média aritimética das notas informadas é: %.2f\n",media);

    return 0;
}