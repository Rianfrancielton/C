#include <stdio.h>

int main () {
    int n1, n2, i, soma=0;

    printf("Insira um numero: ");
    scanf("%d", &n1);
    printf("Insira outro numero: ");
    scanf("%d", &n2);

    for (i=n1; i <= n2; i++) {
        soma += i;
    }

    printf("A soma dos numeros entre %d e %d: %d\n", n1, n2, soma);

    return 0;
}