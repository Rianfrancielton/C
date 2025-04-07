#include <stdio.h>

int main () {
    int i, quantidade[5];
    char produto[20];
    char consulta[20];

    for (i=1; i <= 5; i++) {
        printf("Produto %d: ", i);
        scanf("%s", &produto[i]);
        printf("\n");
        printf("Quantidade: ");
        scanf("%d", &quantidade[5]);
    }

    printf("Qual produto voce quer consultar? ");
    scanf("%s", &consulta);

    for (i=1; i <= 5; i++) {
        if (strcmp(consulta, produto) == 0);
    }
}