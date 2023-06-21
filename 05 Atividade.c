#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Elabore um algoritmo para receber o login e a senha de um usuario.Caso o usuario e a senha estejam corretos, mostre a mensagem "BEM VINDO!",
// caso contrário, mostre a mensagem "LOGIN OU SENHA INVÁLIDO".

int main(){
setlocale(LC_ALL,"");

char nomeSalvo[250] = "Aluno", senhaSalva[50] = "Caderno";
char login[50], senha[50];

printf("Digite seu login: ");
gets(login);

fflush(stdin);

printf("Digite sua senha: ");
gets(senha);

if (strcmp(login, nomeSalvo) == 0 && strcmp(senha, senhaSalva) == 0){
    printf("BEM VINDO.");
}else{
    printf("LOGIN OU SENHA INVÁLIDO. ");
}

    return 0;
}