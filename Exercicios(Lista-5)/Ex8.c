#include <stdio.h>

int main()
{
    int  i = 1, termos = -2;
    
    printf("---PROGRESSÃO GEOMETRICA(10 TERMOS)---\n");
    
    while(i <= 10){
        printf("%d\n", termos);
        termos = termos * -2;
        i++;
    }
    return 0;
}
