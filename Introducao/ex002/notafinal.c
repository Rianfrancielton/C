//Calculadora de Notas Finais

#include <stdio.h>

int main(){
    int nota;

    printf("Digite sua nota final de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 70) {
        printf("Aprovado");
    } else if (nota >= 40 && nota <= 69) {
        printf("Recuperação");
    } else {
        printf("Reprovado");
    }
    return 0;
}