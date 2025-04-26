
#include <stdio.h>

int main()
{
    int valor;
    printf("Insira um valor:\n");
    scanf("%d", &valor);
    
    if(valor > 0){
        printf("Esse numero é positivo\n");
    }
    
   else if (valor < 0){
        printf("Esse numero é negativo\n");
    }
    else{
        printf("Esse numero é nulo");
    }

    return 0;
}
