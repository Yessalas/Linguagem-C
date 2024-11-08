#include <stdio.h>
#include "../lib/maivalor.h"

int main(){
    char letra;
    printf("Digite uma vogal:\n");
    scanf("%c", &letra);
    vogal(letra);
    printf("\n");

    
    return 0;
}