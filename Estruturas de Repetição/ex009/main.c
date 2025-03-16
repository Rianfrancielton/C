#include <stdio.h>

int main () {
    int i;

    printf("Numeros pares de 1 a 100: \n");

    for(i=1; i <=100; i++) {
       if(i%2==0) {
        printf("%d", i);
       }
    }
    printf("%\n");
    printf("Numeros impares de 1 a 100: \n");

    for(i=1; i <=100; i++) {
        if(i%2!=0) {
         printf("%d", i);
        }
    }

    return 0;
}