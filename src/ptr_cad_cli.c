#include <stdio.h>
void cadastro(char *nome, char *email, int *idade){
    FILE *arquivo;
    arquivo = fopen("file/cad_cli.txt" ,"a");
    fprintf(arquivo,"Nome: %s \n", nome);
    fprintf(arquivo,"Email: %s \n", email);
    fprintf(arquivo,"Idade: %d \n", *idade);
    fclose(arquivo);
}
    int main(){
        char nome[30];
        char email[50];
        int idade;
        printf("Digite o seu nome e tecle enter: \n");
        scanf("%[^\n]s" ,nome);
        printf("Digite o seu email e tecle enter: \n");
        scanf("%s" ,email);
        printf("Digite sua idade e tecle enter: \n");
        scanf("%d" , &idade);
        cadastro(nome,email,&idade);
        printf("Cadastrado com sucesso!!\n");
        return 0;
    }