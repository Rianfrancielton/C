#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct {
    int item[max];
    int topo;
} pilha;

void pilha_inicia (pilha *p){
    p->topo = -1;
}

int pilha_vazia (pilha *p){
    if (p->topo == -1){
        return 1;
    } else {
        return 0;
    }
}

int pilha_cheia (pilha *p){
    if(p->topo == max-1){
        return 1;
    } else {
        return 0;
    }
}

void pilha_insere (pilha *p, int x){
    if(pilha_cheia(p) == 1) {
        printf("ERR0: Pilha Cheia!");
    } else {
        p->topo ++;
        p->item[p->topo] = x;
    }
}

int pilha_remove (pilha *p){
    int aux;
    if (pilha_vazia(p) == 1){
        printf("ERRO: Pilha Vazia!");
    } else {
        aux = p->item[p->topo];
        p->topo--;
        return aux;
    }
}

int main (){
    pilha *p = (pilha*)malloc(sizeof(pilha));

    pilha_inicia(p);
    pilha_insere(p, 1);
    pilha_insere(p, 2);
    pilha_insere(p, 3);

    //Remover Valores
    int aux;
    aux = pilha_remove(p);
    printf("Valor excluido: %d\n", aux);
    
    aux = pilha_remove(p);
    printf("Valor excluido: %d\n", aux);

    aux = pilha_remove(p);
    printf("Valor excluido: %d\n", aux);

    //Pilha Vazia
    aux = pilha_remove(p);
    if (aux == -1) {
        printf("Não foi possível excluir, pilha está vazia.\n");
    }

    free(p);
    return 0;
    
}
