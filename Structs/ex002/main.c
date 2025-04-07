#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipo_pessoa {
    char nome[50];
    int idade;
    float peso;
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
    tipo_pessoa lista[3]; 
    int i;

    for(i=0; i<3; i++){
        printf("Insira os dados (%d):\n", i+1);
        printf("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin); 

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }

    //SAÍDA
    for(i=0; i<3; i++){
        printf("---Pessoa (%d)---\n", i+1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Peso: %f\n", lista[i].peso);
        printf("\n");
    }
}