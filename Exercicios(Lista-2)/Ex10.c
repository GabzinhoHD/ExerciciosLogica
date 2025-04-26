
#include <stdio.h>

int main()
{
    int v1, v2, troca;
    printf("Insira dois valores:\n");
    scanf("%d" "%d", &v1, &v2);
    printf("O 1º valor é: %d, o 2ºvalor é: %d \n", v1, v2);
    
    troca = v1;
    v1 = v2;
    v2 = troca;
    
    printf("O 1º valor é: %d, o 2º valor é: %d", v1, v2);
    
    return 0;
}
