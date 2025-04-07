#include <stdio.h>

struct tipo_pessoa { //nome da struct: struct tipo_pessoa
    char nome[20];
    int idade;
    double peso;
};

typedef struct tipo_pessoa tipo_pessoa; //redefinição do nome: tipo_pessoa

int main () {

    //Inicialização direta
    tipo_pessoa pessoa = {"Rian", 19, 61.0}; //pessoa: variável do tipo tipo_pessoa

    printf("nome: %s\n", pessoa.nome);
    printf("idade: %d\n",  pessoa.idade);
    printf("peso: %.2f\n", pessoa.peso);

    //Atribuição por igualdade
    strcpy(pessoa.nome, "Rian");
    pessoa.idade = 19;
    pessoa.peso = 61.50;

    //solicitando entrada
    printf("\nInsira seu nome: \n");
    scanf("%s", &pessoa.nome);

    printf("Insira sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Insira seu peso: ");
    scanf("%f", &pessoa.peso);




}

