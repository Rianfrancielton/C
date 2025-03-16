#include <stdio.h>

int main () {
    int n;
    int i;

    printf("Insira um numero (de 1 a 10) para vizualizar a tabuada: ");
    scanf("%d", &n);

    for(i=0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;

}