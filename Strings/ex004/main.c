#include <stdio.h>
#include <string.h>

int main(){
    char nome[30] = {"Rian"};
    char sobrenome[30] = {" Francielton"};

    strcat(nome, sobrenome); //strcat é uma função para colar uma string na outra.

    puts(nome);
    
}