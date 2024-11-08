#include <stdio.h>

#include "../lib/maivalor.h"

int main(){
    
    char letra;

    printf("Qual é o seu sexo? Digite (f)femenino ou (m)masculino \n");
    scanf("%c", &letra);

    printf("%c \n", identificador (letra));
    return 0;
}