#include <stdio.h>

int main()
{
    int i, j, m, n, l, c, tam = 100;
    int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];
    
    printf("---SOMADOR DE DUAS MATRIZES---\n");
    
    do{
        printf("Informe a quantidade de linhas: ");
        scanf("%d", &i);
        printf("Informe a quantidade de colunas: ");
        scanf("%d", &j);
        if(i <= 0 && j <= 0) printf("Impossivel forma uma matriz\n\n");
        
    }while(i <= 0 && j <= 0);

    /* Entrada dos valores das matrizes */
    printf("\n---MATRIZ A---\n");
    for(m = 0; m < i; m++) for(n = 0; n < j; n++){
        printf("\nlinha[%d], coluna[%d]\n", m, n);
        printf("Informe valor: ");
        scanf("%d", &matrizA[m][n]);
    }
    
    printf("\n---MATRIZ B---\n");
    for(m = 0; m < i; m++) for(n = 0; n < j; n++){
        printf("\nlinha[%d], coluna[%d]\n", m, n);
        printf("Informe valor: ");
        scanf("%d", &matrizB[m][n]);
    }

    /* Soma das matrizes */
    for(m = 0, l = 0; m < i; m++, l++) for(n = 0, c = 0; n < j; n++, c++){
       matrizC[l][c] = matrizA[m][n] + matrizB[m][n];
    }
    
    printf("\n---RESULTADO---\n");
    printf("---MATRIZ C---\n");
    for(l = 0; l < i; l++) for(c = 0; c < j; c++){
        printf("lin[%d], col[%d] = [%d]\n", l, c, matrizC[l][c]);
    }
    
    return 0;
}
