#include <stdio.h>
int main(){
    int ano;
     printf("Digite um ano: \n");
     scanf("%d", &ano);
    
    if (ano % 4 == 0 &ano %100 != 0 || ano % 400 == 0){
        printf("%d é um ano bissexto.\n");
    }
    else {
        printf("%d não é um ano bissexto.\n");
    }
    return 0;
}