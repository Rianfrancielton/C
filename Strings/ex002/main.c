#include <stdio.h>

int main() {
    char nome[10];

    printf("Digite seu nome: ");
    fgets(nome, 10, stdin); //stdin significa em c, a entrada padrão de dados. E o fgets vai garantir que os dados recebidos tenham um tamanho definido na função e que será salvo na variável/vetor determinada na função.
    fflush(stdin); //o fflush é usado depois de um scanf ou gets para limpar o buffer e garantir que não ocorra interrupções entre a passagem de um scanf para o seguinte scanf. Essas interrupções ou bugs acontecem devido ao lixo de memória ou caracteres nulos acumulado no buffer.

    printf("Resultado: %s", nome);
}