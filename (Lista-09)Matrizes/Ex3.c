#include <stdio.h>

int main()
{
    int i, j, m, n, l, c, tam = 100;
    int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];
    
    printf("---SOMADOR DE DUAS MATRIZES---\n");
    
    do{
        printf("Informe a quantidade de linhas: ");
        scanf("%d", &m);
        printf("Informe a quantidade de colunas: ");
        scanf("%d", &n);
        if(m <= 0 && n <= 0) printf("Impossivel forma uma matriz\n\n");
        
    }while(m <= 0 && n <= 0);
    
    printf("\n---MATRIZ A---\n");
    for(i = 0; i < m; i++) for(j = 0; j < n; j++){
        printf("\nlinha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matrizA[i][j]);
    }
    
    printf("\n---MATRIZ B---\n");
    for(i = 0; i < m; i++) for(j = 0; j < n; j++){
        printf("\nlinha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matrizB[i][j]);
    }
    
    for(i = 0, l = 0; i < m; i++, l++) for(j = 0, c = 0; j < n; j++, c++){
       matrizC[l][c] = matrizA[i][j] + matrizB[i][j];
    }
    
    printf("\n---RESULTADO---\n");
    printf("---MATRIZ C---\n");
    for(l = 0; l < m; l++) for(c = 0; c < n; c++){
        printf("lin[%d], col[%d] = [%d]\n", l, c, matrizC[l][c]);
    }
    
    return 0;
}
