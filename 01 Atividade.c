#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Elabore um algoritmo para ler um valor e escrever a mensagem: '� MAIOR QUE 10!' Se o valor lido for maior que 10.
//Caso contr�rio escrever 'N�O � MAIOR QUE 10!'.

int main(){
    setlocale(LC_ALL,"Portuguese");

//Variaveis
 int num;

//Solicitando dados ao usuario.
printf("Digite um n�mero: ");
scanf("%d", &num);


//Mostrando dados ao usuario.

if (num  > 10){
    printf("� MAIOR QUE 10!");
}else {
    printf("N�O � MAIOR QUE 10!");
}


    return 0;
}