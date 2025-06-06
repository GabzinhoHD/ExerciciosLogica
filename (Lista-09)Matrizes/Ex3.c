#include <stdio.h>

int main()
{
    int i, j, n, tam = 100;
    int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];
    
    printf("---SOMADOR DE DUAS MATRIZES---\n");
    
    printf("Informe o tamanho das matrizes: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) for(j = 0; j < n; j++){
        printf("\n---MATRIZ A---\n");
        printf("linha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matrizA[i][j]);
    }
    
    for(i = 0; i < n; i++) for(j = 0; j < n; j++){
        printf("\n---MATRIZ B---\n");
        printf("linha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matrizB[i][j]);
    }
    
    for(i = 0; i < n; i++) for(j = 0; j < n; j++){
       matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
    }
    
    printf("\n---RESULTADO---\n\n");
    for(i = 0; i < n; i++) for(j = 0; j < n; j++){
        printf("lin[%d], col[%d] = [%d]\n", i, j, matrizC[i][j]);
    }
    
    return 0;
}
