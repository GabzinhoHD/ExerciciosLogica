#include <stdio.h>

int main()
{
    int i, j, m, n, tam = 100;
    int matrizA[tam][tam], matrizT[tam][tam];
    
    printf("---TRANSPOSIÇÃO DE MATRIZ---\n");
    
    do{
        printf("Informe a quantidade de linhas: ");
        scanf("%d", &m);
        printf("Informe a quantidade de colunas: ");
        scanf("%d", &n);
        if(m <= 0 && n <= 0) printf("Impossivel forma uma matriz\n\n");
        
    }while(m <= 0 && n <= 0);
    
    printf("\nMATRIZ:\n");
    for(i = 0; i < m; i++) for(j = 0; j < n; j++){
        printf("\nlinha[%d], coluna[%d]\n", i+1, j+1);
        printf("Informe valor: ");
        scanf("%d", &matrizA[i][j]);
    }
    
    /* transposição da matriz */
      for(int i = 0; i < m; i++) for(int j = 0; j < n; j++){
        matrizT[j][i] = matrizA[i][j];
    }
    
   
    printf("\n---RESULTADO---\n");
    printf("\nMATRIZ NORMAL:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("[%d] ", matrizA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMATRIZ TRANSPOSTA:\n");
     for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("[%d] ", matrizT[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
