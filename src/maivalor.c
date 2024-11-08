#include <stdio.h>

#include "../lib/maivalor.h"

int main(){
    
    int num1, num2;

    printf("Digite um número e tecle enter: ");
    scanf("%d", &num1);
    printf("Digite outro número e tecle enter: ");
    scanf("%d", &num2);

   

    // Chama a função `maivalor` e exibe o resultado
    
    printf("O maior valor é: %d\n", maivalor(num1,num2));

    return 0;
}