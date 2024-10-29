#include <stdio.h>

int main(){
    float Kinicial, Kfinal, Tinicial, Tfinal, TotalKm, TotalT,velocidade;

    printf("Digite sua Km inicial: \n");
    scanf ("%f", &Kinicial);
    printf("Digite sua Km final: \n");
    scanf ("%f", &Kfinal);
    printf("Digite seu Tempo inicial: \n");
    scanf ("%f", &Tinicial);
    printf("Digite seu Tempo final: \n");
    scanf ("%f", &Tfinal);

    TotalKm = Kinicial - Kfinal;
    TotalT =  Tinicial - Tfinal;
    velocidade = TotalKm /  TotalT;

    printf("A sua velocidade média é : %.2f \n", velocidade);

    return 0;
}