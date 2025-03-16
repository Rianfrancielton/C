#include <stdio.h>

int subtrai(int a, int b);

int main() {
    int n1, n2, r;

    printf("Insira um número para subtrair: ");
    scanf("%d", &n1);
    printf("Insira outro número para subtrair do primeiro: ");
    scanf("%d", &n2);

    r = subtrai(n1, n2);

    printf("a subtração de %d e %d é %d\n", n1, n2, r);

    return 0;
}

int subtrai(int a, int b) {
    return a - b;
}