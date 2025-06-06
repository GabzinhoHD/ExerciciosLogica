#include <stdio.h>

int main()
{
    int i, j, matriz[8][8];
    int valorMaior, valorMenor, linMaior, colMaior, linMenor, colMenor;
    
    printf("---MAIOR E MENOR VALOR (MATRIZ-8x8)---\n");
    for(i = 0; i < 8; i++) for(j = 0; j < 8; j++){
        printf("\nlinha[%d], coluna[%d]\n", i, j);
        printf("Informe valor: ");
        scanf("%d", &matriz[i][j]);
        
        /* Determinação dos valores maiores e menores */
        if(i == 0 && j == 0){
            valorMenor = matriz[0][0];
            valorMaior = matriz[0][0];
        }
        
        if(matriz[i][j] > valorMaior){
            valorMaior = matriz[i][j];
            linMaior = i;
            colMaior = j;
        }
        
        else if(matriz[i][j] < valorMenor){
            valorMenor = matriz[i][j];
            linMenor = i;
            colMenor = j;
        }

    }
    
    printf("\n---RESULTADO---\n\n");
    printf("Menor valor: [%d]\n", valorMenor);
    printf("Posição: lin[%d], col[%d]\n\n", linMenor, colMenor);
    
    printf("Maior valor: [%d]\n", valorMaior);
    printf("Posição: lin[%d], col[%d]\n", linMaior, colMaior);

    return 0;
}
