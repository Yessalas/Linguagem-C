#include <stdio.h>

int maivalor(int num1, int num2) {
    int rs = num1 ;
    if(num2 > num1){
        rs = num2;
    }    
    return rs;  
}

char identificador(char letra){
    if(letra == 'M'||letra == 'm'){
        printf("Masculino");
    }
    else if(letra == 'F'|| letra == 'f'){
        printf ("Femenino");
    }
    else{
        printf ("Sexo Inválido");
    }
}
void vogal(char letra){
    if(letra == 'a'){
        printf("A letra  %c é uma vogal", letra);
    }
    else if(letra == 'e'){
        printf("A letra  %c é uma vogal", letra);
    }
    else if(letra == 'i'){
        printf("A letra  %c é uma vogal", letra);
    }
    else if(letra == 'o'){
        printf("A letra  %c é uma vogal", letra);
    }
    else if(letra == 'u'){
        printf("A letra  %c é uma vogal", letra);
    }
    else{
        printf("%c é uma consoante", letra);
    }
}
void reajuste(float salario){
    float novo_salario;
    float valor_aumento;
    if(salario <= 280){
        valor_aumento = salario * (20.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi ajustado em 20%. O valor de aumento é %f \n ", salario,valor_aumento,novo_salario);
    }
    else if(salario <= 700){
        valor_aumento = salario * (15.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi ajustado em 15%. O valor de aumento é %f \n ", salario,valor_aumento,novo_salario);
    }
    else if(salario <= 1500){
        valor_aumento = salario * (10.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi ajustado em 10%. O valor de aumento é %f \n ", salario,valor_aumento,novo_salario);
    }
    else{
        valor_aumento = salario * (5.0/100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi ajustado em 5%. O valor de aumento é %f \n ", salario,valor_aumento,novo_salario);
    }


}
