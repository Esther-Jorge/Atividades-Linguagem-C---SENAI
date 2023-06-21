#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura
//deseja saber: a) total de famílias que responderam a pesquisa; b) média do salário da população;c) média do número de filhos;
//O final da leitura de dados se dará com a entrada de um salário negativo.

int main(){
    int familias = 0;
    float salario, somaSalario = 0;
    int filhos, somaFilhos = 0;

    printf("Digite o salario e o numeros de filhos (salario negativo para sair):\n");

    while (1){
        printf("Salario: ");
        scanf("%f",&salario);

        if (salario < 0){
            break;
        }

        printf("Numero de filhos: ");
        scanf("%d",&filhos);

        familias++;
        somaSalario += salario;
        somaFilhos += filhos;
    }

    if (familias > 0){
        float mediaSalario = somaSalario / familias;
        float mediaFilhos = (float)somaFilhos / familias;

        printf("\nResultados:\n");
        printf("Total de familias que responderam a pesquisa: %d\n",familias);
        printf("Media do salario da populacao: %.2f\n",mediaSalario);
        printf("Media do numero de filhos %.2f\n",mediaFilhos);
    }else {
        printf("Nenhum dado foi inserido.\n");
    }



    return 0;
}