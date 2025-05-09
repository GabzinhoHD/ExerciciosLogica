#include <stdio.h>
#include <ctype.h>

int main()
{
    int N;
    
    do{
        printf("Entre com um numero entre 0 e 10:\n");
        scanf("%d", &N);
        
    }while(0 <= N && 10 >= N);
    printf("Numero fora do intervalo!");
    return 0;
}
