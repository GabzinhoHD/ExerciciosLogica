#include <math.h>
#include <stdio.h>

int main()
{
    float valor, arredondamentoB, arredondamentoC;
    printf("Insira um valor a ser arredondado:\n");
    scanf("%f", &valor);
    
    arredondamentoB = floor(valor);
    arredondamentoC = ceil(valor);
    
    printf("Arredondado para cima é: %.1f\n", arredondamentoC);
    printf("Arredondado para baixo é %.1f", arredondamentoB);
    return 0;
}
