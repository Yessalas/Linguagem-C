#include <stdio.h>

#include "../lib/maivalor.h"
int main(){
    float salario;
    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);
    reajuste(salario);
    printf("\n");

    
    return 0;
}