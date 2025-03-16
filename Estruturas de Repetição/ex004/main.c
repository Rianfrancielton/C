#include <stdio.h>
#include <locale.h>

 int main () { 
    int fatorial, resposta = 1;

    printf("Insira um numero para calcular o fatorial: ");
    scanf("%d", &fatorial);

    while (fatorial >= 1) {
        resposta *= fatorial;
        fatorial--;
    }
    printf("Resultado: %d\n", resposta);

    return 0;
}