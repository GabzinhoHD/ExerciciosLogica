#include <math.h>
#include <stdio.h>

int main()
{
    float valor, raiz;
    printf("Insira um valor:\n");
    scanf("%f", &valor);
    
    raiz = sqrt(valor);
    printf("A raiz é: %.2f", raiz);
    return 0;
}
