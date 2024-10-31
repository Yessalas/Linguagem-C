#include <stdio.h>
int main(){
    int ano;
    int bissextos = 0;
        for (ano=1930 ; ano<= 2024 ; ano++){
            if (ano % 4 == 0 &ano %100 != 0 || ano % 400 == 0){
                printf ("%d \n" , ano);
                bissextos++;
            }
        }
        printf("A contagem de anos bissextos é %d \n." , bissextos);
        return 0;
}
        