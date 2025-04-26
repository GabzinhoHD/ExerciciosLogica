
#include <stdio.h>

int main()
{
    int valor;
    printf("Insira um valor:\n");
    scanf("%d", &valor);
    
    if(valor % 3 == 0){
        printf("Esse numero é múltiplo de 3\n");
    }
    
    else{
        printf("Esse numero não é múltiplo de 3");
    }

    return 0;
}
