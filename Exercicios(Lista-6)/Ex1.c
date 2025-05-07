#include <stdio.h>

int main()
{
    int valorI, valorF;
    printf("---CONTADOR---\n");
    printf("Informe o valor inicial da contagem: ");
    scanf("%d", &valorI);
    printf("Informe o Valor final da contagem: ");
    scanf("%d", &valorF);
    
    if(valorI < valorF){
        while(valorI <= valorF){
            printf("%d\n", valorI);
            valorI++;
        }
        
    }

    return 0;
}
