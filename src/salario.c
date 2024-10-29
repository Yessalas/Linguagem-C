#include <stdio.h>
    int main(){
        
        float Sbruto, Sliquido, DvaleT, Dinss, Dfgts, Tdesconto;

        printf("Digite seu sálario total:R$ \n");
        scanf ("%f", &Sbruto);

        DvaleT = Sbruto * 0.06;
        Dinss = Sbruto * 0.07;
        Dfgts = Sbruto * 0.08;

        Tdesconto = DvaleT + Dinss + Dfgts;

        Sliquido = Sbruto - Tdesconto;

        printf("Total de descontos é : %.2f \n", Tdesconto);
        printf("A seu salário liquido é: R$ %.2f \n", Sliquido);

        return 0;
        
    }