#include <stdio.h>

//Usando funções, crie um algoritmo que leia 3 disciplinas e 2 notas para cada uma delas.
//[ 1 ] – Mostrar nome da disciplina e a média;
//[ 2 ] – O nome da disciplina e a situação (aprovado, reprovado ou recuperação);
//[ 3 ] – Exibir todas as informações;
//[ 0 ] – Sair do programa.
// Utilize o switch-case.• Verifique cada nota, impedindo que o programa continue caso a nota informada seja
//maior que 10 ou menor que 0;



void calcularMedia(float nota1, float nota2, float* media) {
    *media = (nota1 + nota2) / 2;
}

char* verificarSituacao(float media) {
    if (media >= 7.0) {
        return "Aprovado";
    } else if (media >= 5.0) {
        return "Recuperação";
    } else {
        return "Reprovado";
    }
}

void exibirDisciplina(char* nomeDisciplina, float nota1, float nota2) {
    float media;
    calcularMedia(nota1, nota2, &media);
    printf("Disciplina: %s\n", nomeDisciplina);
    printf("Média: %.2f\n", media);
}

void exibirSituacao(char* nomeDisciplina, float nota1, float nota2) {
    float media;
    calcularMedia(nota1, nota2, &media);
    char* situacao = verificarSituacao(media);
    printf("Disciplina: %s\n", nomeDisciplina);
    printf("Situação: %s\n", situacao);
}

void exibirTodasInformacoes(char* nomeDisciplina1, float nota11, float nota12,
                            char* nomeDisciplina2, float nota21, float nota22,
                            char* nomeDisciplina3, float nota31, float nota32) {
    printf("=== Informações ===\n");
    exibirDisciplina(nomeDisciplina1, nota11, nota12);
    exibirSituacao(nomeDisciplina1, nota11, nota12);
    printf("\n");
    exibirDisciplina(nomeDisciplina2, nota21, nota22);
    exibirSituacao(nomeDisciplina2, nota21, nota22);
    printf("\n");
    exibirDisciplina(nomeDisciplina3, nota31, nota32);
    exibirSituacao(nomeDisciplina3, nota31, nota32);
}

int main() {
    char nomeDisciplina1[50], nomeDisciplina2[50], nomeDisciplina3[50];
    float nota11, nota12, nota21, nota22, nota31, nota32;
    int opcao;

    printf("=== Notas das Disciplinas ===\n");

    printf("Digite o nome da disciplina 1: ");
    fgets(nomeDisciplina1, sizeof(nomeDisciplina1), stdin);

    printf("Digite a primeira nota da disciplina 1: ");
    scanf("%f", &nota11);
    if (nota11 < 0 || nota11 > 10) {
        printf("Nota inválida!\n");
        return 1;
    }

    printf("Digite a segunda nota da disciplina 1: ");
    scanf("%f", &nota12);
    if (nota12 < 0 || nota12 > 10) {
        printf("Nota inválida!\n");
        return 1;
    }

    getchar(); // Limpar o buffer do teclado

    printf("Digite o nome da disciplina 2: ");
    fgets(nomeDisciplina2, sizeof(nomeDisciplina2), stdin);

    printf("Digite a primeira nota da disciplina 2: ");
    scanf("%f", &nota21);
    if (nota21 < 0 || nota21 > 10) {
        printf("Nota inválida!\n");
        return 1;
    }

    printf("Digite a segunda nota da disciplina 2: ");
    scanf("%f", &nota22);
    if (nota22 < 0 || nota22 > 10) {
        printf("Nota inválida!\n");
        return 1;
    }

    getchar(); // Limpar o buffer do teclado

    printf("Digite o nome da disciplina 3: ");
    fgets(nomeDisciplina3, sizeof(nomeDisciplina3), stdin);

    printf("Digite a primeira nota da disciplina 3: ");
    scanf("%f", &nota31);
    if (nota31 < 0 || nota31 > 10) {
        printf("Nota inválida!\n");
        return 1;
    }

    printf("Digite a segunda nota da disciplina 3: ");
    scanf("%f", &nota32);
    if (nota32 < 0 || nota32 > 10) {
        printf("Nota inválida!\n");
        return 1;
    }

    while (1) {
        printf("\n=== Menu ===\n");
        printf("[ 1 ] - Mostrar nome da disciplina e a média\n");
        printf("[ 2 ] - O nome da disciplina e a situação\n");
        printf("[ 3 ] - Exibir todas as informações\n");
        printf("[ 0 ] - Sair do programa\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do programa...\n");
                return 0;
            case 1:
                exibirDisciplina(nomeDisciplina1, nota11, nota12);
                exibirDisciplina(nomeDisciplina2, nota21, nota22);
                exibirDisciplina(nomeDisciplina3, nota31, nota32);
                break;
            case 2:
                exibirSituacao(nomeDisciplina1, nota11, nota12);
                exibirSituacao(nomeDisciplina2, nota21, nota22);
                exibirSituacao(nomeDisciplina3, nota31, nota32);
                break;
            case 3:
                exibirTodasInformacoes(nomeDisciplina1, nota11, nota12,
                                       nomeDisciplina2, nota21, nota22,
                                       nomeDisciplina3, nota31, nota32);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    return 0;
}
