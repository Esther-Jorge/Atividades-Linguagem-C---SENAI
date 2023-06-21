#include <stdio.h>

float somarValorUnitario(int codigo) {
    float valor;

    switch (codigo) {
        case 100:
            valor = 1.59;
            break;
        case 101:
            valor = 4.59;
            break;
        case 102:
            valor = 1.79;
            break;
        default:
            valor = 0.0; // Valor padrão caso o código seja inválido
            break;
    }

    return valor;
}

int main() {
    int codigo;
    float valorTotal = 0.0;
    char opcao;

    do {
        printf("Escolha um produto:\n");
        printf("1. Detergente\n");
        printf("2. Esponja\n");
        printf("3. Lã de aço\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                valorTotal += somarValorUnitario(100);
                break;
            case 2:
                valorTotal += somarValorUnitario(101);
                break;
            case 3:
                valorTotal += somarValorUnitario(102);
                break;
            case 0:
                printf("Compra finalizada!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

    } while (codigo != 0);

    printf("Valor total da compra: R$ %.2f\n", valorTotal);

    return 0;
}
