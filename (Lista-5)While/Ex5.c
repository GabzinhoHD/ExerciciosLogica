#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, quad, cubo;
    printf("---INDENTIFICADOR DOS QUADRADOS E CUBOS(0 Á 10)---\n");
    while(i <= 10){
        printf("Numero:   %d\n", i);
        quad = pow(i, 2);
        cubo = pow(i, 3);
        printf("Quadrado: %d\n", quad);
        printf("Cubo:     %d\n\n", cubo);
        i++;
    }
    return 0;
}
