#include <stdio.h>

int main() {
    double valor;
    double desconto1, desconto2;
    
    printf("-----CAIXA-----\n");
    printf("Valor da Compra: R$");
    scanf("%lf", &valor);

    desconto1 = (valor * 20) / 100;
    desconto2 = (valor * 10) /100;

    if (valor > 100) {
        printf("Desconto: 20%%\n");
        printf("Valor Final: R$%.2lf\n", valor - desconto1);
    } else if (valor >= 50 && valor <= 100) {
        printf("Desconto: 10%%\n");
        printf("Valor Final: R$%.2lf\n", valor - desconto2);
    } else {
        printf("Sem desconto aplicado.\n");
        printf("Valor Final: R$%.2lf\n", valor);
    }
    return 0;
}