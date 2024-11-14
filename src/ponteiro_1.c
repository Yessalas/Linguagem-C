#include <stdio.h>
int main(){
    // Declaração variavel idade
    int idade = 18;
    // Declaração variavel de ponteiro
    int *pidade = &idade;
    printf("A idade é %d e está em %p e %p com o valor %d\n",idade, &idade, pidade, *pidade);
    return 0;
}