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

    /* Entrada dos valores das matrizes */
    printf("\nMATRIZ A:\n");
    for(i = 0; i < m; i++) for(j = 0; j < n; j++){
        printf("\nlinha[%d], coluna[%d]\n", i+1, j+1);
        printf("Informe valor: ");
        scanf("%d", &matrizA[i][j]);
    }
    
    printf("\nMATRIZ B:\n");
    for(i = 0; i < m; i++) for(j = 0; j < n; j++){
        printf("\nlinha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matrizB[i][j]);
    }

    /* Soma das matrizes */
    for(i = 0, l = 0; i < m; i++, l++) for(j = 0, c = 0; j < n; i++, c++){
       matrizC[l][c] = matrizA[i][j] + matrizB[i][j];
    }
    
    printf("\n---RESULTADO---\n");
    printf("MATRIZ C:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("[%d] ", matrizC[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
