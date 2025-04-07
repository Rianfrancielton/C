#include <stdio.h>
#include <stdlib.h>

//um ponteiro é um apontador para endereço de memória, de fato é uma variável utilizada para conter endereços de memória, com isso é possível atualizar o conteúdo dos endereços de forma indireta.

int main(){
    int var = 15;
    int *ptr; //declaração do ponteiro
    
    ptr = &var; //apontando o ponteiro para o endereço da variável 

    printf("conteudo de var: %d\n", var);
    printf("endereco de var: %p\n", &var);

    printf("conteudo apontado por ptr: %d\n", *ptr);
    printf("endereco apontado por ptr: %p\n", ptr);
    printf("endereco do ptr: %p\n", &ptr);
}