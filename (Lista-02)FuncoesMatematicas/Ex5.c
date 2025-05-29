#include <math.h>
#include <stdio.h>

int main()
{
    float num1, quadrado, cubo;
    printf("Insira um valor:\n");
    scanf("%f", &num1);
    quadrado = pow(num1, 2);
    cubo = pow(num1, 3);
    
    printf("número\t quadrado\t cubo\n");
    printf("%.2f\t %.2f\t \t %.2f", num1, quadrado, cubo);
    return 0;
}
