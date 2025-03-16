#include <stdio.h>

int main () {
    int n1, n2, i;

    printf("Insira um numero: ");
    scanf("%d", &n1);
    printf("Insira outro numero: ");
    scanf("%d", &n2);
    printf("Numeros primos de %d a %d: \n", n1, n2);

    for (i=n1; i <= n2; i++) {
        if (i > 1 && i%2!=0) {
            printf("%d\n", i);
        }
    }

    return 0;
}