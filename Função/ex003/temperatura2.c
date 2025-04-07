#include <stdio.h>

float temperatura(float n){
    return (n-32.0) * (5.0/9.0);
}

int main(){
    float c, f;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &f);

    c = temperatura(f);

    printf("A temperatura %.2f fahrenheit equivale a %.2f celsius", f, c);

    return 0;
}