#include <stdio.h>

int primo(int n){
    int i;
    for(i=0; i<=n; i++){
        if(i%2==0){
            return i;
        }
    }
}

int main(){
    int n, i;

    printf("Digite um numero para sabermos os primos até o numero definido: ");
    scanf("%d", &n);

    int f = primo(n);

    for(i=0; i<=n; i++){
        printf("%d", f);
    }
}
