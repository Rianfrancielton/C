#include <stdio.h>

int main () {
    int i, soma2;
    double nota[10], maior=0, menor=0, media, soma;
    printf("Insira as notas abaixo:\n");

    for (i=0; i < 10; i++) {
        printf("Nota %d: ", i+1);
        scanf("%lf", &nota[i]);
        soma += nota[i];
    }

    media = soma / 10;
    maior = nota[0];
    menor = nota[0];

    for (i=1; i < 10; i++) {
        if (nota[i] > maior) {
            maior = nota[i];
        }

        if (nota[i] < menor) {
            menor = nota[i];
        }
    } 

    for (i=0; i < 10; i++) {
        if (nota[i] > media) {
            soma2 ++;
        }
    }

    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Media: %.2f\n", media);
    printf("%d alunos ficaram acima da media.", soma2);

    return 0;
}