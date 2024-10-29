#include <stdio.h>
int main(){
    int mes;
    printf("Digite o número do mês (1 a 12), tecle enter e veja e qual estação do ano é.\n");
        scanf("%d", &mes);

    if (mes == 12 ||mes == 1||mes == 2  ){
        printf("Estamos no Inverno.");
    }
    else if (mes == 3 ||mes == 4||mes == 5  ){
        printf("Estamos no Primavera.");
    }
    else if (mes == 6 ||mes == 7||mes == 8  ){
        printf("Estamos no Verão.");
    }
    else if (mes == 9 ||mes == 10||mes == 11  ){
        printf("Estamos no Outono.");
    }
    else {
            printf("O número desse mês não exite, tente novamente");
        }
    printf("\n");
        return 0 ;
}