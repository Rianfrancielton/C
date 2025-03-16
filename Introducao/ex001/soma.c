#include <stdio.h>

//declaração da função para calcular a soma;
int soma(int a, int b);


int main() {
    int n1, n2, r;

    printf("Insira um número: ");
    scanf("%d", &n1);
    printf("insira outro número: ");
    scanf("%d", &n2);

    // Chama a função soma e armazena o resultado
    r = soma(n1, n2);
    printf("a soma de %d e %d é %d\n", n1, n2, r);

    return 0;
}

//Definição da função soma
int soma(int a, int b) {
    return a + b;
}