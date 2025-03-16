#include <stdio.h>

int main() {
    double saldo = 500;
    int valor;
    char opcao;

    do {
        printf("Saldo Inicial: R$ %.2lf\n", saldo);
        printf("Informe o valor desejado (em multiplos de 10) para realizar o saque: ");
        scanf("%d", &valor);

        if (valor % 10 == 0 && valor <= saldo) { 
            printf("Saque realizado.\n");
            saldo -= valor;
            printf("Novo saldo: R$ %.2lf\n", saldo);
        } else if (valor % 10 != 0) {
            printf("Erro: O valor do saque deve ser multiplo de 10.\n");
        } else if (valor > saldo) {
            printf("Erro: saldo insuficiente.\n");
        } 

        printf("Voce deseja realizar outro saque? (s/n): ");
        getchar(); 
        scanf("%c", &opcao);

    } while (opcao == 's' || opcao == 'S'); 

    printf("Programa encerrado. Saldo final: R$ %.2lf\n", saldo);

    return 0;
}
