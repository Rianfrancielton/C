#include <stdio.h>

 //Sistema de Pedágio
int main () {
    int tipo;
    double valor = 0;

    printf("--------Pedagio--------\n");
    printf("Tipo do Veiculo =>\n");
    printf("-----------------------\n");
    printf("1. Carro de Passeio\n");
    printf("2. Caminhao\n");
    printf("3. Onibus\n");
    printf("-----------------------\n");
    printf("Informe o numero do tipo do seu veiculo de acordo com o menu: ");
    scanf("%d", &tipo);
    printf("\n");

    switch (tipo)
    {
    case 1:
        valor = 5.00;
        break;
    case 2:
        valor = 10.00;
        break;
    case 3:
        valor = 15.00;
        break;
    default:
        printf("Tipo de veiculo invalido.\n");
        break;
    }
    printf("Valor do Pedagio: R$%.2lf", valor);
    return 0;
}