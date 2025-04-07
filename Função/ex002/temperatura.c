#include <stdio.h>

float temperatura(float n){
    return (n*9.0/5.0)+32.0;
}

int main (){
    float c, f;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &c);

    f = temperatura(c);

    printf("A temperatura %.2f celsius equivale a %.2f fahrenheit", c, f);

    return 0;
}