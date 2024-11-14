#include <stdio.h>
int main(){
    FILE *arquivo;
    arquivo = fopen("file/texto.txt","a"); 
    // w -- write (escrever)
    // r -- read (ler)
    // a -- append (adicionar)
    fprintf(arquivo,"Olá Mundo!\n");
    fclose(arquivo);
    printf("Criamos o arquivo \n");
    return 0;
}