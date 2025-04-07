#include <stdio.h>

int main(){
    int vetor[5];
    int i;
    float s=0;
    float media;

    for(i=1; i<=5; i++){
        printf("Nota %d:", i);
        scanf("%d", &vetor[i]);
    }

    for(i=1; i<=5; i++) {
        s += vetor[i];
    }

    media = s/5;
    printf("Media: %.2f", media);
}