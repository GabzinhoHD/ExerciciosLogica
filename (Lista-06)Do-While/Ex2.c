#include <stdio.h>

int main()
{
    int i = 1, valor1 = 0, valor2 = 1, var, soma;
    printf("---SERIE DE FIBONACCI---\n");
    while(i <= 15){
        soma = valor1 + valor2;
        printf("%d, ", soma);
        var = valor1;
        valor1 = soma;
        valor2 = var;
        i++;
    }
    
    return 0;
}
