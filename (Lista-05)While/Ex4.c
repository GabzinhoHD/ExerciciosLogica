#include <stdio.h>

int main()
{
    int i = 0, somaI = 0, somaP = 0, n;
    printf("---SOMADOR DOS IMPARES E PARES---\n");
    printf("Informe o valor limite:\n");
    scanf("%d", &n);
    
    while(i <= n){
        if((i % 2) == 1 ){
            somaI = somaI + i; 
        }
        else if((i % 2) == 0){
            somaP = somaP + i;
        }
        i++;
    }
    printf("A soma dos impares é: %d\n", somaI);
    printf("A soma dos pares é: %d", somaP);
    return 0;
}
