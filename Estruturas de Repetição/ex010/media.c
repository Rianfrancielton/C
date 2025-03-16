#include <stdio.h>

int main () {
    int aluno, i, nota, soma=0;
    double media;

    printf("Quantidade de Alunos: ");
    scanf("%d", &aluno);

    for (i=1; i <= aluno; i++) {
        printf("Nota %d: ", i);
        scanf("%d", &nota);
        soma+=nota;

    }

    media = soma / aluno;
    printf("Media: %.1f", media);

    return 0;
}