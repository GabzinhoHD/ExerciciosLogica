#include <stdio.h>

int main()
{
    int  i = 1, termos = 0;
    
    printf("---PROGRESSÃO ARITMETICA(20 TERMOS)---\n");
    
    while(i <= 20){
        printf("%d\n", termos);
        termos = termos + 2;
        i++;
    }
    return 0;
}
