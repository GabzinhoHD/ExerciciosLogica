#include <stdio.h>

int main()
{
    int i, n, m;
    printf("---TABUADA---\n");
    printf("Informe o valor multiplicador: ");
    scanf("%d", &n);
    printf("Informe a quantidade de multiplicações: ");
    scanf("%d", &m);
    
    
    for(i = 1;i <= m; i++){
        printf("%d X %d = %d\n", n, i, i*n);
    }
    

    return 0;
}
