#include <stdio.h>

int main(){
    
    float N1, N2, N3, N4, media, divisao;

    printf("Digite sua nota de português: \n");
    scanf ("%f", &N1);
    printf("Digite sua nota de Matemática: \n");
    scanf ("%f", &N2);
    printf("Digite sua nota de Ciências: \n");
    scanf ("%f", &N3);
    printf("Digite sua nota de Geografia: \n");
    scanf ("%f", &N4);

    media = N1 + N2 + N3 + N4 ;
    divisao = media / 4;

    printf("A sua média é : %.2f \n", divisao);

    return 0;
}