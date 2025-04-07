#include <stdio.h>
#include <string.h>

int main(){
    char senha[30] = {"Rian"};
    char usuario[30];
    int i;

    printf("Digite a senha: ");
    scanf("%s", usuario);

    i = strcmp(senha, usuario); //strcmp verifica se o valor de uma variável é igual a outra. Para valores iguais, a variável i deve ser igual a 0, se não, valores diferentes.

    if (i == 0) {
        printf("Senha correta\n");
    } else {
        printf("Senha incorreta\n");
    }

}