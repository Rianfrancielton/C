#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    int i;

    printf("Digite seu nome: ");
    fgets(nome, 30, stdin);

    i = strlen(nome); //strlen é uma função que exibe o tamanho da string. i recebe o resultado da função.

    printf("Tamanho do texto: %d", i);

    
}