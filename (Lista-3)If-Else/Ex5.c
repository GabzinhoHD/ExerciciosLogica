#include <math.h>
#include <stdio.h>

int main()
{
    int num;
    printf("Insira um numero entre 10 e 100\n");
    scanf("%d", &num);
    
    if(10 < num && num < 100){
        printf("Número está entre 10 e 100 – intervalo permitido");
    }
    else{
        printf("Número fora do intervalo permitido");
    }
    return 0;
}
