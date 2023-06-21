#include <stdio.h>

int main() {
    int diaSemana;

    printf("Digite um número de 1 a 7 para representar o dia da semana: ");
    scanf("%d", &diaSemana);

    switch (diaSemana) {
        case 1:
        case 7:
            printf("Final de semana\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia útil\n");
            break;
        default:
            printf("Dia inválido\n");
            break;
    }

    return 0;
}
