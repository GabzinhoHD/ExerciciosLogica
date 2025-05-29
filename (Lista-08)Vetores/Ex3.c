#include <stdio.h>

int main()
{
    int i, n, escalar = 0, vetorX[1000], vetorY[1000];
    
    printf("---CALCULADOR ESCALAR DE VETORES---\n");
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);
    
    printf("---vetorX---\n");
    for(i = 0; i < n; i++){
        printf("Informe o %dº valor do vetorX: ", i+1);
        scanf("%d", &vetorX[i]);
    }
    
    printf("\n---vetorY---\n");
    for(i = 0; i < n; i++){
        printf("Informe o %dº valor do vetorY: ", i+1);
        scanf("%d", &vetorY[i]);
    }
    
    for(i = 0; i < n; i++){
        escalar += vetorX[i] * vetorY[i];
    }
    
    printf("\n---RESULTADO---\n");
    printf("A escalar é: %d", escalar);
    
    
    return 0;
}
