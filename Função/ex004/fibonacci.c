#include <stdio.h>

int fibonacci(int n){
    int s=0, i;
    for(i=0; i<=20; i++){
        s += i;
        return s;
    }
}

int main(){
    int n, f;

    printf("Digite um numero para vermos a sequencia de fibonacci ate chegar ao numero sugerido: ");
    scanf("%d", &n);

    f = fibonacci(n);

    printf("%d", f);

    return 0;
}
