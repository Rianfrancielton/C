#include <stdio.h>

float maior(float a, float b){
    if (a>b){
        return a;
    } else{
        return b;
    }
}

int main(){
    float x1, x2, m;

    printf("Digite um valor 1: ");
    scanf("%f", &x1);
    printf("\n");
    printf("Digite um valor 2: ");
    scanf("%f", &x2);

    m = maior(x1, x2);
    printf("\n");
    printf("O maior numero e: %f", m);
}