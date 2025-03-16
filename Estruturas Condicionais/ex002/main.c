#include <stdio.h>

int main (){

    int n;
    printf("Dias da Semana\n");
    printf("Escolha um numero de 1 a 7: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
            printf("Segunda-feira");
        break;
    case 2:
            printf("Terca-feira");
        break;
    case 3:
            printf("Quarta-feira");
        break;
    case 4:
            printf("Quinta-feira");
        break;
    case 5:
            printf("Sexta-feira");
        break;
    case 6:
            printf("Sabado");
        break;

    case 7:
            printf("Domingo");
        break;
    default:
            printf("O valor inserido nao corresponde ao requisitado.");
        break;
    }
}