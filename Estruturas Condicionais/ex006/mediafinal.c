#include <stdio.h>

int main() {
    double n1, n2, n3, n4, media, exame, media_final;
    int p1=2, p2=3, p3=4, p4=1;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = ((n1*p1) + (n2*p2) + (n3*p3) + (n4*p4)) / (p1+p2+p3+p4);

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", exame);
        scanf("%lf", &exame);

        media_final = (media + exame) / 2;

        if (media_final >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media_final);
    }

    return 0;
}
