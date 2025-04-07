#include <stdio.h>
#include <string.h>

int main(){
    char origem[30] = {"Rian Francielton"};
    char destino[30];

    strcpy(destino, origem); //strcpy é uma função que permite que uma variável atribua o mesmo valor de outra.

    puts(origem); //puts é uma função que printa valores do tipo char.
    puts(destino);
}