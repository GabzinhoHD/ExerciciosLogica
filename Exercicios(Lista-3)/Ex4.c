#include <math.h>
#include <stdio.h>

int main()
{
    float num, raiz, cubo;
    printf("Insira um numero positivo ou negativo :)\n");
    scanf("%f", &num);
    
    if(num > 0){
        raiz = sqrt(num);
        printf("A raiz é %.2f", raiz);
    }
    
    else if(num < 0){
        cubo = pow(num, 3);
        printf("O cubo é %.2f", cubo);
    }
    return 0;
}
