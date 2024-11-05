#include <stdio.h>
int main(){
    char nome[20];
    printf("Digite o seu nome e tecle enter.\n");
    // foi necessario utilizar o colchetes para que o comando 
    // scanf receba toda a cadeia de caracteres
    // o elementos ^ (circunflexo) foi usado para indicar onde
    // começa o primeiro caracter . E comando \n, neste caso,
    // está sendo usado pra ler o espaço aplicado
    // ao final é utilizado o caracter s(string)
    scanf("%[^\n]s", &nome);
    printf("Olá, %s. Seja Bem-Vindo \n", nome);


    return 0;
}