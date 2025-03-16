#include <stdio.h>
#include <string.h>

int main (){
    char senha[6] = "senha";
    char tentativa[20];
    int i = 0;

    do {
        printf("Senha: ");
        scanf("%s", tentativa);

        if (i == 2){
            printf("Numero de tentivas excedido. Acesso Bloqueado.\n");
            break;
        }
    
        if (strcmp(tentativa, senha) == 0) {
            printf("Acesso concedido.\n");
            break;
        } else {
            i++;
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (i <= 2);

    return 0;
}