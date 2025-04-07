#include <stdio.h>

int main() {
    char s[10];

    printf("Digite seu nome: ");
    scanf("%9[^\n]s", s); //essa estrututra do scanf permite que o porgrama leia espaços e limitar a leitura até o número determinado de caracteres. O tamanho deve ser adicionado com (tam-1).

    printf("Resultado: %s", s);
}