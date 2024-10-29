#include <stdio.h>
    int main(){
        int placa ;
        printf("Digite o número final da placa do seu carro \n");
        scanf("%d", &placa);

        if (placa == 1|| placa == 2){
            printf("Este veículo não pode circular na Segunda-feira.");
        }
        else if(placa == 3|| placa == 4){
            printf("Este veículo não pode circular na Terça-feira.");
        }
        else if(placa == 5|| placa == 6){
            printf("Este veículo não pode circular na Quarta-feira.");
        }
        else if(placa == 7|| placa == 8){
            printf("Este veículo não pode circular na Quinta-feira.");
        }
        else if (placa == 9|| placa == 0){
            printf("Este veículo não pode circular na Sexta-feira.");
        }
        else {
            printf("Número inválido");
        }
        printf("\n");
        return 0 ;
    }