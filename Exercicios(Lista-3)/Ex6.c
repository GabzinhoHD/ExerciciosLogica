#include <math.h>
#include <stdio.h>

int main()
{
    float salario, reajuste;
    printf("Insira seu salario para ser reajustado: ");
    scanf("%f", &salario);
    
    if(salario => 0.00 && salario <= 990.00){;
        reajuste = salario * 1.2;
        printf("0 novo salario é de: %.2f", reajuste);
    }
    else if(salario => 990.01 && salario <= 1480.00){
        reajuste = salario * 1.1;
        printf("O novo salario é de: %.2f", reajuste);
    }
    else if(salario => 1480.01 && salario <= 2000){
        reajuste = salario * 1.05;
        printf("O novo salario é de: %.2f", reajuste);
    }
    
    else{
        printf("O seu salario não tera ajustes!!");
    }
    return 0;
}
