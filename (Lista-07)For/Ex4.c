#include <stdio.h>

int main()
{
    int i;
    float valorA = 0, numerador = 1, denominador = 1;
    
    for(i = 1; i <= 25; i++){
        valorA = valorA + (numerador / denominador);
        numerador += 2;
        denominador++;
        
    }
    printf("%f", valorA);
    
    return 0;
}
