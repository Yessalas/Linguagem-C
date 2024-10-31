#include <stdio.h>
int main(){
    int num_mes;
    printf("Digite o número do mês e tecle enter. \n");
    scanf("%d", &num_mes);
    switch(num_mes){
        case 1:
        printf("Esse número corresponde há Janeiro. \n");
        break;

        case 2:
        printf("Esse número corresponde há Fevereiro. \n");
        break;

        case 3:
        printf("Esse número corresponde há Março. \n");
        break;

        case 4:
        printf("Esse número corresponde há Abril. \n");
        break;

        case 5:
        printf("Esse número corresponde há Maio. \n");
        break;

        case 6:
        printf("Esse número corresponde há Junho. \n");
        break;

        case 7:
        printf("Esse número corresponde há Julho. \n");
        break;

        case 8:
        printf("Esse número corresponde há Agosto. \n");
        break;

        case 9:
        printf("Esse número corresponde há Setembro. \n");
        break;

        case 10:
        printf("Esse número corresponde há Outubro. \n");
        break;

        case 11:
        printf("Esse número corresponde há Novembro. \n");
        break;

        case 12:
        printf("Esse número corresponde há Dezembro. \n");
        break;

        default:
        printf("Este mês não existe. \n");
        break;
    }
    return 0;
}