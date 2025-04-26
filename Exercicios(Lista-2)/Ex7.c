#include <math.h>
#include <stdio.h>

int main()
{
    float mH, valorA ,valorB, valorC, valorD;
    printf("Insira um 4 valores para calcular a Media Harmonica:\n");
    scanf("%f", &valorA);
    scanf("%f", &valorB);
    scanf("%f", &valorC);
    scanf("%f", &valorD);
    
    mH = 4 / ( (1 / valorA) + (1 / valorB) + (1 / valorC) + (1 / valorD));
    
    printf("O valor da Media Harmonica será: %f", mH);
    return 0;
}
