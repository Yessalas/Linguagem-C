#include <stdio.h>
int main(){
    int valores[]={13,8,23,95,47,14,10,45,165};
    float soma=0;
    float media;
    int p;
    for(p = 0 ; p< 9 ; p++){
        soma+=valores[p];
    }
    media =soma / 9;
    printf("A média é: %.2f\n", media);
    return 0;
}