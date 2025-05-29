#include <math.h>
#include <stdio.h>

int main()
{
    float mQ, valorA ,valorB, valorC, valorD;
    printf("Insira um 4 valores para calcular a Media Quadratica:\n");
    scanf("%f", &valorA);
    scanf("%f", &valorB);
    scanf("%f", &valorC);
    scanf("%f", &valorD);
    
    mQ = sqrt(( pow(valorA, 2) + pow(valorB, 2) + pow(valorC, 2) + pow(valorD, 2) / 4 ));
    
    printf("O valor da Media Quadratica será: %f", mQ);
    return 0;
}
